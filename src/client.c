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

static void client_transmit(void);
static boolean client_init_done;
static socketp client_listen_socket;
static socketp client_connect_socket;

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

static void client_poll (void)
{
    socketp s = client_listen_socket;
    if (!s) {
        return;
    }

    int waittime = 0;
    int numready = SDLNet_CheckSockets(socket_get_socklist(s), waittime);
    if (numready <= 0) {
        return;
    }

    LOG("There are %d sockets with activity!", numready);

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

        char *tmp = iptodynstr(socket_get_local_ip(s));
        LOG("Client Pak rx on: %s", tmp);
        myfree(tmp);

        int y = SDLNet_Read16(packet->data);
        int x = SDLNet_Read16(packet->data+2);
        LOG("Client Recieve X,Y = %d,%d",x,y);   //not working... 
    }

    SDLNet_FreePacket(packet);
}

static void client_transmit (void)
{
static int done = 0;
if (done > 1) {
return;
}
done++;
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

static int x;
static int y;
x++;
y++;
y++;
    LOG("Sending X,Y = %d,%d", x,y);

    packet->address = socket_get_remote_ip(s);
    SDLNet_Write16(y,data);                 
    SDLNet_Write16(x,data+2);               
    packet->len = sizeof(data);

    if (SDLNet_UDP_Send(socket_get_udp_socket(s),
                        socket_get_channel(s), packet) < 1) {
        ERR("no UDP packet sent");
    } 
        
    SDLNet_FreePacket(packet);
}

void client_tick (void)
{
    if (!is_client) {
        return;
    }

    client_poll();
    client_transmit();
}
