/*
 * Copyright (C) 2011 Neil McGill
 *
 * See the README file for license.
 */

void wid_editor_map_display_wid_init(void);
void wid_editor_map_wid_destroy (void);

extern widp wid_editor_map_window;
extern widp wid_editor_map_grid_container;

widp wid_editor_map_thing_replace_template(widp,
                                           int32_t x, int32_t y,
                                           uint32_t count,
                                           thing_templatep);

void wid_editor_map_thing_flood_fill_template(int32_t x, int32_t y,
                                              thing_templatep);
void wid_game_set_count(widp, uint32_t count);

void wid_editor_add_grid(void);
