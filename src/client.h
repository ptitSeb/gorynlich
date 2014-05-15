/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the README file for license.
 *
 * A useful hack to help debug stale/free/bad pointers.
 */

#pragma once

extern uint8_t client_init(void);
extern void client_fini(void);
extern void client_tick(void);
uint8_t client_socket_join(char *host, char *port, uint16_t portno,
                           uint8_t quiet);
uint8_t client_socket_leave(void);
uint8_t client_socket_set_name(const char *name);
uint8_t client_socket_set_pclass(const char *name);
msg_player_statep client_get_player(int n);

extern socketp client_joined_server;
