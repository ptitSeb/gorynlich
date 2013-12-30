/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the README file for license.
 *
 * A useful hack to help debug stale/free/bad pointers.
 */


#include "SDL_timer.h"

#include "main.h"
#include "net.h"
#include "client.h"
#include "time.h"

static void send_ping(void);
static boolean client_init_done;
static socketp client_connect_socket;
static void client_poll(void);

boolean client_init (void)
{
    if (!is_client) {
        return (true);
    }

    if (client_init_done) {
        return (true);
    }

    socketp s;

    /*
     * Connector.
     */
    s = net_connect(server_address);
    if (!s) {
        WARN("Client failed to connect");
        return (false);
    }

    client_connect_socket = s;
    socket_set_client(s, true);

    LOG("Client connecting to   %s", socket_get_remote_logname(s));
    LOG("Client connecting from %s", socket_get_local_logname(s));

    client_init_done = true;

    return (true);
}

void client_fini (void)
{
    FINI_LOG("%s", __FUNCTION__);

    if (client_init_done) {
        client_init_done = false;
    }
}

static void receive_pong (socketp s, UDPpacket *packet, uint8_t *data)
{
    uint16_t seq = SDLNet_Read16(data);
    data += sizeof(uint16_t);

    uint32_t ts = SDLNet_Read32(data);
    data += sizeof(uint32_t);

    char *tmp = iptodynstr(packet->address);
    LOG("Pong [%s] %d, elapsed %u",
        tmp, seq, time_get_time_cached() - ts);

    myfree(tmp);
}

static void send_ping (void)
{
    static uint32_t ts;
    static uint32_t seq;

    if (!time_have_x_tenths_passed_since(10, ts)) {
        return;
    }

    ts = time_get_time_cached();

    socketp s = client_connect_socket;
    if (!s) {
        return;
    }

    UDPpacket *packet;      

    packet = SDLNet_AllocPacket(MAX_PACKET_SIZE);
    if (!packet) {
        ERR("Out of packet space, pak %d", MAX_PACKET_SIZE);
        return;
    }

    uint8_t *data = packet->data;
    uint8_t *odata = data;

    packet->address = socket_get_remote_ip(s);

    SDLNet_Write16(MSG_TYPE_PING, data);               
    data += sizeof(uint16_t);

    seq++;
    SDLNet_Write16(seq, data);               
    data += sizeof(uint16_t);

    SDLNet_Write32(ts, data);               
    data += sizeof(uint32_t);

    packet->len = data - odata;

    LOG("Ping [%s] %d, ts %d", socket_get_remote_logname(s), seq, ts);

    if (SDLNet_UDP_Send(socket_get_udp_socket(s),
                        socket_get_channel(s), packet) < 1) {
        ERR("no UDP packet sent");

        socket_count_inc_pak_tx_error(s);
    } else {
        socket_count_inc_pak_tx(s);
    }
        
    SDLNet_FreePacket(packet);
}

void client_tick (void)
{
    if (!is_client) {
        return;
    }

    client_poll();
    send_ping();
}

static void client_poll (void)
{
    socketp s = client_connect_socket;
    if (!s) {
        return;
    }

    int waittime = 0;
    int numready = SDLNet_CheckSockets(socket_get_socklist(s), waittime);
    if (numready <= 0) {
        return;
    }

    UDPpacket *packet;      

    packet = SDLNet_AllocPacket(MAX_PACKET_SIZE);
    if (!packet) {
        ERR("Out of packet space, pak %d", MAX_PACKET_SIZE);
        return;
    }

    int i;
    for (i = 0; i < numready; i++) {
        if (!SDLNet_SocketReady(socket_get_udp_socket(s))) {
            continue;
        }

        int paks = SDLNet_UDP_Recv(socket_get_udp_socket(s), packet);
        if (paks != 1) {
            ERR("Pak rx failed: %s", SDLNet_GetError());
            continue;
        }

        uint8_t *data = packet->data;
        msg_type type = SDLNet_Read16(data);
        data += sizeof(uint16_t);

        socket_count_inc_pak_rx(s);

        switch (type) {
        case MSG_TYPE_PONG:
            receive_pong(s, packet, data);
            break;

        default:
            socket_count_inc_pak_rx_bad_msg(s);
            ERR("Unknown message type received [%u", type);
        }
    }

    SDLNet_FreePacket(packet);
}
