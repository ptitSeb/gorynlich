/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the LICENSE file for license.
 */

uint8_t wid_thing_stats_init(void);
void wid_player_stats_fini(void);
void wid_player_stats_hide(void);
void wid_player_stats_visible(thing_statsp );
void wid_player_stats_redraw(void);
extern widp wid_player_stats;
