CFLAGS = -mcpu=cortex-a8 -mfpu=neon -mfloat-abi=softfp -DPANDORA
CFLAGS += -ffast-math -fsingle-precision-constant -ftree-vectorize
CFLAGS += -O3 `sdl-config --cflags` -DDouble=float 
#CFLAGS += -g -flto -flto-odr-type-merging
CFLAGS += -g
#CFLAGS += -DDouble=double
#LDLIBS = -O3 -flto 
LDLIBS += `sdl-config --libs` -lSDL_mixer -lSDL_net -lm -lGL
LDLIBS += -lrt
CC = gcc
NAME=gorynlich
OBJDIR=.o

include Makefile.ramdisk.deps

GAME_OBJECTS=				\
    $(OBJDIR)/backtrace.o 		\
    $(OBJDIR)/client.o 			\
    $(OBJDIR)/client_hooks.o 		\
    $(OBJDIR)/color.o			\
    $(OBJDIR)/command.o 		\
    $(OBJDIR)/config.o			\
    $(OBJDIR)/demarshal.o 		\
    $(OBJDIR)/dir.o 			\
    $(OBJDIR)/file.o 			\
    $(OBJDIR)/font.o 			\
    $(OBJDIR)/geo.o 			\
    $(OBJDIR)/gl.o 			\
    $(OBJDIR)/glshapes.o 		\
    $(OBJDIR)/init_fn.o 		\
    $(OBJDIR)/level.o 			\
    $(OBJDIR)/level_trigger.o 		\
    $(OBJDIR)/log.o 			\
    $(OBJDIR)/main.o 			\
    $(OBJDIR)/map.o 			\
    $(OBJDIR)/map_jigsaw.o 		\
    $(OBJDIR)/marshal.o 		\
    $(OBJDIR)/math.o 			\
    $(OBJDIR)/miniz.o 			\
    $(OBJDIR)/music.o 			\
    $(OBJDIR)/mzip_file.o 		\
    $(OBJDIR)/mzip_lib.o 		\
    $(OBJDIR)/name.o 			\
    $(OBJDIR)/pcg_basic.o 		\
    $(OBJDIR)/pixel.o 			\
    $(OBJDIR)/player.o 			\
    $(OBJDIR)/point.o 			\
    $(OBJDIR)/ptrcheck.o 		\
    $(OBJDIR)/ramdisk_read.o 		\
    $(OBJDIR)/rand.o 			\
    $(OBJDIR)/resource.o 		\
    $(OBJDIR)/sdl.o 			\
    $(OBJDIR)/server.o 			\
    $(OBJDIR)/slre.o 			\
    $(OBJDIR)/socket.o 			\
    $(OBJDIR)/sound.o 			\
    $(OBJDIR)/stb_image.o 		\
    $(OBJDIR)/string.o 			\
    $(OBJDIR)/string_ext.o 		\
    $(OBJDIR)/term.o 			\
    $(OBJDIR)/tex.o 			\
    $(OBJDIR)/thing.o 			\
    $(OBJDIR)/thing_ai.o 		\
    $(OBJDIR)/thing_anim.o 		\
    $(OBJDIR)/thing_blood.o 		\
    $(OBJDIR)/thing_bomb.o 		\
    $(OBJDIR)/thing_client.o 		\
    $(OBJDIR)/thing_collision.o 	\
    $(OBJDIR)/thing_damage.o 		\
    $(OBJDIR)/thing_death.o 		\
    $(OBJDIR)/thing_jesus.o 		\
    $(OBJDIR)/thing_shop.o 		\
    $(OBJDIR)/thing_defense.o 		\
    $(OBJDIR)/thing_dir.o 		\
    $(OBJDIR)/thing_effect.o 		\
    $(OBJDIR)/thing_exit.o 		\
    $(OBJDIR)/thing_explosion.o 	\
    $(OBJDIR)/thing_fire.o 		\
    $(OBJDIR)/thing_health.o 		\
    $(OBJDIR)/thing_item.o 		\
    $(OBJDIR)/thing_magic.o 		\
    $(OBJDIR)/thing_mob_spawn.o 	\
    $(OBJDIR)/thing_place.o 		\
    $(OBJDIR)/thing_random.o 		\
    $(OBJDIR)/thing_server.o 		\
    $(OBJDIR)/thing_shield.o 		\
    $(OBJDIR)/thing_speed.o 		\
    $(OBJDIR)/thing_stats.o 		\
    $(OBJDIR)/thing_teleport.o 		\
    $(OBJDIR)/thing_template.o 		\
    $(OBJDIR)/thing_tick.o 		\
    $(OBJDIR)/thing_tile.o 		\
    $(OBJDIR)/thing_timer.o 		\
    $(OBJDIR)/thing_torch.o 		\
    $(OBJDIR)/thing_vision.o 		\
    $(OBJDIR)/thing_weapon.o 		\
    $(OBJDIR)/thing_xp.o 		\
    $(OBJDIR)/thing_spending_points.o 	\
    $(OBJDIR)/tile.o 			\
    $(OBJDIR)/time.o 			\
    $(OBJDIR)/timer.o 			\
    $(OBJDIR)/token.o 			\
    $(OBJDIR)/tree.o 			\
    $(OBJDIR)/ttf.o 			\
    $(OBJDIR)/util.o 			\
    $(OBJDIR)/vision.o 			\
    $(OBJDIR)/wid.o 			\
    $(OBJDIR)/wid_anim.o 		\
    $(OBJDIR)/wid_button.o 		\
    $(OBJDIR)/wid_chat.o 		\
    $(OBJDIR)/wid_choose_game_type.o 	\
    $(OBJDIR)/wid_choose_name.o 	\
    $(OBJDIR)/wid_choose_pclass.o 	\
    $(OBJDIR)/wid_choose_stats.o 	\
    $(OBJDIR)/wid_cmap.o 		\
    $(OBJDIR)/wid_console.o 		\
    $(OBJDIR)/wid_dead.o 		\
    $(OBJDIR)/wid_dirlist.o 		\
    $(OBJDIR)/wid_editor.o 		\
    $(OBJDIR)/wid_game_map_client.o 	\
    $(OBJDIR)/wid_game_map_server.o 	\
    $(OBJDIR)/wid_game_over.o 		\
    $(OBJDIR)/wid_game_quit.o 		\
    $(OBJDIR)/wid_hiscore.o 		\
    $(OBJDIR)/wid_intro.o 		\
    $(OBJDIR)/wid_intro_about.o 	\
    $(OBJDIR)/wid_intro_demo.o 		\
    $(OBJDIR)/wid_intro_settings.o 	\
    $(OBJDIR)/wid_keyboard.o 		\
    $(OBJDIR)/wid_map.o 		\
    $(OBJDIR)/wid_menu.o 		\
    $(OBJDIR)/wid_notify.o 		\
    $(OBJDIR)/wid_numpad.o 		\
    $(OBJDIR)/wid_player_action.o 	\
    $(OBJDIR)/wid_player_info.o 	\
    $(OBJDIR)/wid_player_inventory.o 	\
    $(OBJDIR)/wid_player_stats.o 	\
    $(OBJDIR)/wid_popup.o 		\
    $(OBJDIR)/wid_server_create.o 	\
    $(OBJDIR)/wid_server_edit.o 	\
    $(OBJDIR)/wid_server_join.o 	\
    $(OBJDIR)/wid_splash.o 		\
    $(OBJDIR)/wid_text_input.o 		\
    $(OBJDIR)/wid_textbox.o 		\
    $(OBJDIR)/wid_tooltip.o 		\

MZIP_OBJECTS=				\
    $(OBJDIR)/util_basic.o 		\
    $(OBJDIR)/string.o 			\
    $(OBJDIR)/file.o 			\
    $(OBJDIR)/miniz.o 			\
    $(OBJDIR)/mzip_lib.o 		\
    $(OBJDIR)/mzip_file.o 		\
    $(OBJDIR)/mzip.o 			\

MUNZIP_OBJECTS=				\
    $(OBJDIR)/util_basic.o 		\
    $(OBJDIR)/file.o 			\
    $(OBJDIR)/string.o 			\
    $(OBJDIR)/miniz.o 			\
    $(OBJDIR)/mzip_lib.o 		\
    $(OBJDIR)/mzip_file.o 		\
    $(OBJDIR)/munzip.o 			\

#
# compile
#
$(OBJDIR)/%.o: %.c
	@echo $(CC) $(EXTRA_CFLAGS) $(CFLAGS) -c -o $@ $<
	@$(CC) $(EXTRA_CFLAGS) $(CFLAGS) -c -o $@ $<

#
# link
#
TARGET_GAME=$(NAME)$(EXE)
$(TARGET_GAME): $(GAME_OBJECTS)
	$(CC) $(GAME_OBJECTS) $(LDLIBS) -o ../$(TARGET_GAME)

#
# mzip
#
TARGET_MZIP=mzip$(EXE)
$(TARGET_MZIP): EXTRA_CFLAGS += -DMINIMAL
$(TARGET_MZIP): $(MZIP_OBJECTS)
	@echo $(CC) $(EXTRA_CFLAGS) $(MZIP_OBJECTS) -lz -o $(TARGET_MZIP)
	@$(CC) $(EXTRA_CFLAGS) $(MZIP_OBJECTS) -lz -o $(TARGET_MZIP)

#
# munzip
#
TARGET_MUNZIP=munzip$(EXE)
$(TARGET_MUNZIP): EXTRA_CFLAGS += -DMINIMAL
$(TARGET_MUNZIP): $(MUNZIP_OBJECTS)
	@echo $(CC) $(EXTRA_CFLAGS) $(MUNZIP_OBJECTS) -lz -o $(TARGET_MUNZIP)
	@$(CC) $(EXTRA_CFLAGS) $(MUNZIP_OBJECTS) -lz -o $(TARGET_MUNZIP)

#
# To force clean and avoid "up to date" warning.
#
.PHONY: clean
.PHONY: clobber

clean:
	rm -rf ../$(TARGET_GAME) ../stdout.txt ../stderr.txt
	rm -rf $(GAME_OBJECTS) $(TARGET_GAME) stdout.txt stderr.txt
	rm -rf $(TARGET_MZIP)
	rm -rf $(TARGET_MUNZIP)

clobber: clean
	rm -rf $(OBJDIR)
	mkdir -p $(OBJDIR)

valgrind:
	valgrind --gen-suppressions=all --leak-check=full --suppressions=valgrind.suppress --error-limit=no ../$(NAME)

all: $(TARGET_GAME) 
	$(DSYM)

include Makefile.ramdisk
# DO NOT DELETE

.o/backtrace.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/backtrace.o: backtrace.h
.o/client.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/client.o: socket_util.h tree.h player.h client.h time_util.h sdl.h slre.h
.o/client.o: command.h token.h string_util.h wid_server_join.h
.o/client.o: wid_game_map_client.h wid_player_info.h wid_player_inventory.h
.o/client.o: wid_player_action.h wid_chat.h wid.h map.h enum.h thing.h
.o/client.o: level_private.h thing_template.h mzip_lib.h wid_dead.h level.h
.o/client.o: name.h music.h
.o/client_hooks.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/client_hooks.o: socket_util.h tree.h player.h client.h time_util.h sdl.h
.o/client_hooks.o: slre.h command.h token.h string_util.h wid_server_join.h
.o/client_hooks.o: wid_game_map_client.h wid_player_info.h
.o/client_hooks.o: wid_player_inventory.h wid_player_action.h wid_chat.h
.o/client_hooks.o: wid.h map.h enum.h thing.h level_private.h
.o/client_hooks.o: thing_template.h mzip_lib.h wid_dead.h level.h name.h
.o/client_hooks.o: music.h
.o/color.o: color.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/color.o: tree.h glapi.h
.o/command.o: slre.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/command.o: command.h token.h string_util.h term.h wid.h sdl.h map.h tree.h
.o/command.o: enum.h
.o/config.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h marshal.h
.o/config.o: tree.h string_util.h name.h
.o/demarshal.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/demarshal.o: string_util.h marshal.h tree.h ramdisk.h
.o/dir.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h dir.h tree.h
.o/dir.o: string_util.h ramdisk.h
.o/file.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h mzip_file.h
.o/file.o: string_util.h file.h time_util.h sdl.h
.o/font.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h ttf.h enum.h
.o/font.o: tree.h font.h string_util.h
.o/geo.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h geo.h
.o/geo.o: math_util.h
.o/gl.o: glapi.h color.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/gl.o: tree.h
.o/glshapes.o: glapi.h color.h main.h config.h pcg_basic.h ptrcheck.h
.o/glshapes.o: thing_stats.h tree.h math_util.h
.o/init_fn.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h tree.h
.o/init_fn.o: init_fn.h init_fn_private.h string_util.h
.o/level.o: slre.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/level.o: string_util.h wid.h sdl.h map.h tree.h enum.h level.h thing.h
.o/level.o: level_private.h thing_template.h command.h token.h time_util.h
.o/level.o: marshal.h wid_game_map_server.h wid_game_map_client.h wid_map.h
.o/level.o: timer.h sound.h wid_editor.h socket_util.h player.h map_jigsaw.h
.o/level.o: file.h thing_shop.h
.o/level_trigger.o: slre.h main.h config.h pcg_basic.h ptrcheck.h
.o/level_trigger.o: thing_stats.h string_util.h wid.h sdl.h map.h tree.h
.o/level_trigger.o: enum.h level.h thing.h level_private.h thing_template.h
.o/level_trigger.o: command.h token.h time_util.h marshal.h
.o/level_trigger.o: wid_game_map_server.h wid_game_map_client.h wid_map.h
.o/level_trigger.o: timer.h sound.h wid_editor.h socket_util.h player.h
.o/level_trigger.o: map_jigsaw.h file.h
.o/log.o: slre.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/log.o: backtrace.h wid_console.h time_util.h sdl.h command.h token.h
.o/log.o: thing.h tree.h wid.h map.h enum.h level_private.h thing_template.h
.o/log.o: level.h timer.h init_fn.h term.h wid_popup.h wid_tooltip.h
.o/log.o: socket_util.h player.h wid_notify.h sound.h wid_game_map_client.h
.o/main.o: slre.h glapi.h color.h main.h config.h pcg_basic.h ptrcheck.h
.o/main.o: thing_stats.h tree.h wid_console.h wid_chat.h command.h token.h
.o/main.o: ttf.h enum.h font.h math_util.h tex.h music.h sound.h tile.h
.o/main.o: tile_private.h thing.h wid.h sdl.h map.h level_private.h
.o/main.o: thing_template.h wid_intro_about.h wid_game_over.h
.o/main.o: wid_intro_settings.h wid_player_stats.h wid_hiscore.h
.o/main.o: wid_server_join.h wid_server_edit.h wid_server_create.h
.o/main.o: wid_intro.h wid_intro_demo.h wid_game_map_server.h
.o/main.o: wid_game_map_client.h wid_choose_game_type.h wid_choose_name.h
.o/main.o: wid_choose_pclass.h wid_choose_stats.h string_util.h dir.h file.h
.o/main.o: level.h resource.h init_fn.h ramdisk.h socket_util.h player.h
.o/main.o: client.h term.h server.h mzip_lib.h map_jigsaw.h wid_editor.h
.o/map.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h map.h tree.h
.o/map.o: enum.h wid.h sdl.h thing.h level_private.h thing_template.h
.o/map.o: thing_tile.h level.h bits.h socket_util.h player.h
.o/map.o: ./wid_game_map_server.h ./wid_game_map_client.h
.o/map_jigsaw.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/map_jigsaw.o: sdl.h map.h tree.h enum.h map_jigsaw.h ramdisk.h
.o/map_jigsaw.o: thing_shop.h thing.h level_private.h thing_template.h
.o/map_jigsaw.o: wid_game_map_server.h level.h time_util.h bits.h color.h
.o/marshal.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h file.h
.o/marshal.o: mzip_file.h marshal.h tree.h string_ext.h enum.h
.o/math.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h math_util.h
.o/miniz_test.o: miniz.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/music.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h music.h
.o/music.o: ramdisk.h tree.h sound.h
.o/mzip_file.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h file.h
.o/mzip_file.o: string_util.h mzip_file.h mzip_lib.h ramdisk.h
.o/mzip_file_test.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/mzip_file_test.o: mzip_file.h
.o/mzip_lib.o: miniz.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/mzip_lib.o: mzip_lib.h
.o/name.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h name.h
.o/pcg_basic.o: pcg_basic.h
.o/pixel.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h pixel.h
.o/player.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h thing.h
.o/player.o: tree.h wid.h sdl.h map.h enum.h level_private.h thing_template.h
.o/player.o: player.h level.h
.o/point.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/ptrcheck.o: slre.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/ptrcheck.o: backtrace.h time_util.h sdl.h tree.h command.h token.h
.o/ptrcheck_test.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/ramdisk_data.o: ramdisk.h
.o/ramdisk_read.o: string_util.h main.h config.h pcg_basic.h ptrcheck.h
.o/ramdisk_read.o: thing_stats.h file.h ramdisk_data.c ramdisk.h
.o/rand.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h math_util.h
.o/resource.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/resource.o: resource.h tex.h tile.h tile_private.h tree.h glapi.h color.h
.o/resource.o: init_fn.h thing.h wid.h sdl.h map.h enum.h level_private.h
.o/resource.o: thing_template.h sound.h
.o/sdl.o: glapi.h color.h main.h config.h pcg_basic.h ptrcheck.h
.o/sdl.o: thing_stats.h tree.h wid.h sdl.h map.h enum.h wid_console.h
.o/sdl.o: wid_notify.h time_util.h thing.h level_private.h thing_template.h
.o/sdl.o: sdl_util.h init_fn.h wid_splash.h wid_intro_demo.h tex.h ttf.h
.o/sdl.o: slre.h command.h token.h server.h client.h term.h timer.h
.o/sdl.o: socket_util.h player.h string_util.h
.o/server.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/server.o: socket_util.h tree.h player.h server.h time_util.h sdl.h slre.h
.o/server.o: command.h token.h wid_game_map_server.h wid_server_create.h
.o/server.o: string_util.h thing.h wid.h map.h enum.h level_private.h
.o/server.o: thing_template.h mzip_lib.h
.o/slre.o: slre.h
.o/socket.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/socket.o: socket_util.h tree.h player.h string_util.h slre.h command.h
.o/socket.o: token.h time_util.h sdl.h wid.h map.h enum.h wid_button.h
.o/socket.o: color.h server.h client.h wid_game_map_server.h
.o/socket.o: wid_player_action.h thing.h level_private.h thing_template.h
.o/socket.o: mzip_lib.h wid_hiscore.h level.h
.o/sound.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h sound.h
.o/sound.o: ramdisk.h tree.h music.h math_util.h thing.h wid.h sdl.h map.h
.o/sound.o: enum.h level_private.h thing_template.h vision.h
.o/stb_image.o: stb_image.h main.h config.h pcg_basic.h ptrcheck.h
.o/stb_image.o: thing_stats.h
.o/string.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/string.o: string_util.h
.o/string_ext.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/string_ext.o: string_ext.h enum.h tree.h color.h tex.h tile.h
.o/string_ext.o: tile_private.h glapi.h
.o/string_test.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/string_test.o: string_ext.h enum.h tree.h
.o/term.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h marshal.h
.o/term.o: tree.h string_util.h term.h
.o/tex.o: glapi.h color.h main.h config.h pcg_basic.h ptrcheck.h
.o/tex.o: thing_stats.h tree.h stb_image.h tex.h ramdisk.h pixel.h
.o/tex.o: math_util.h
.o/thing.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing.o: thing_timer.h wid_game_map_client.h string_util.h sound.h
.o/thing.o: socket_util.h tree.h player.h client.h timer.h tile.h
.o/thing.o: tile_private.h glapi.h color.h wid_hiscore.h wid_player_info.h
.o/thing.o: wid_player_inventory.h wid_player_action.h wid_choose_stats.h
.o/thing.o: thing_shop.h thing.h wid.h sdl.h map.h enum.h level_private.h
.o/thing.o: thing_template.h wid_game_map_server.h level.h time_util.h
.o/thing_ai.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h thing.h
.o/thing_ai.o: tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_ai.o: thing_template.h wid_game_map_server.h math_util.h level.h
.o/thing_ai.o: time_util.h
.o/thing_anim.o: slre.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_anim.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_anim.o: thing_template.h thing_tile.h thing_tile_private.h tile.h
.o/thing_anim.o: tile_private.h glapi.h color.h time_util.h command.h token.h
.o/thing_blood.o: math_util.h main.h config.h pcg_basic.h ptrcheck.h
.o/thing_blood.o: thing_stats.h thing.h tree.h wid.h sdl.h map.h enum.h
.o/thing_blood.o: level_private.h thing_template.h
.o/thing_bomb.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h thing.h
.o/thing_bomb.o: tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_bomb.o: thing_template.h
.o/thing_client.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_client.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_client.o: thing_template.h wid_game_map_client.h socket_util.h
.o/thing_client.o: player.h client.h tile.h tile_private.h glapi.h color.h
.o/thing_client.o: math_util.h
.o/thing_collision.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_collision.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_collision.o: thing_template.h tile.h tile_private.h glapi.h color.h
.o/thing_collision.o: math_util.h thing_shop.h wid_game_map_server.h level.h
.o/thing_collision.o: time_util.h
.o/thing_damage.o: color.h main.h config.h pcg_basic.h ptrcheck.h
.o/thing_damage.o: thing_stats.h tree.h thing.h wid.h sdl.h map.h enum.h
.o/thing_damage.o: level_private.h thing_template.h time_util.h
.o/thing_death.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_death.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_death.o: thing_template.h wid_game_map_server.h level.h time_util.h
.o/thing_death.o: music.h
.o/thing_defense.o: color.h main.h config.h pcg_basic.h ptrcheck.h
.o/thing_defense.o: thing_stats.h tree.h thing.h wid.h sdl.h map.h enum.h
.o/thing_defense.o: level_private.h thing_template.h
.o/thing_dir.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h thing.h
.o/thing_dir.o: tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_dir.o: thing_template.h math_util.h
.o/thing_effect.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_effect.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_effect.o: thing_template.h color.h wid_game_map_client.h math_util.h
.o/thing_exit.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h thing.h
.o/thing_exit.o: tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_exit.o: thing_template.h level.h sound.h
.o/thing_explosion.o: math_util.h main.h config.h pcg_basic.h ptrcheck.h
.o/thing_explosion.o: thing_stats.h thing.h tree.h wid.h sdl.h map.h enum.h
.o/thing_explosion.o: level_private.h thing_template.h
.o/thing_fire.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h thing.h
.o/thing_fire.o: tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_fire.o: thing_template.h math_util.h wid_game_map_server.h vision.h
.o/thing_health.o: color.h main.h config.h pcg_basic.h ptrcheck.h
.o/thing_health.o: thing_stats.h tree.h thing.h wid.h sdl.h map.h enum.h
.o/thing_health.o: level_private.h thing_template.h time_util.h
.o/thing_item.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h thing.h
.o/thing_item.o: tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_item.o: thing_template.h string_ext.h
.o/thing_jesus.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_jesus.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_jesus.o: thing_template.h timer.h level.h
.o/thing_magic.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_magic.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_magic.o: thing_template.h wid_game_map_server.h
.o/thing_magic.o: wid_game_map_client.h time_util.h
.o/thing_mob_spawn.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_mob_spawn.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_mob_spawn.o: thing_template.h wid_game_map_server.h
.o/thing_place.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_place.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_place.o: thing_template.h wid_game_map_server.h
.o/thing_random.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_random.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_random.o: thing_template.h
.o/thing_server.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_server.o: socket_util.h tree.h player.h tile.h tile_private.h
.o/thing_server.o: glapi.h color.h thing_shop.h thing.h wid.h sdl.h map.h
.o/thing_server.o: enum.h level_private.h thing_template.h
.o/thing_server.o: wid_game_map_server.h level.h time_util.h
.o/thing_shield.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_shield.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_shield.o: thing_template.h wid_game_map_server.h
.o/thing_shield.o: wid_game_map_client.h
.o/thing_shop.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_shop.o: thing_shop.h thing.h tree.h wid.h sdl.h map.h enum.h
.o/thing_shop.o: level_private.h thing_template.h wid_game_map_server.h
.o/thing_shop.o: level.h time_util.h
.o/thing_speed.o: color.h main.h config.h pcg_basic.h ptrcheck.h
.o/thing_speed.o: thing_stats.h tree.h thing.h wid.h sdl.h map.h enum.h
.o/thing_speed.o: level_private.h thing_template.h
.o/thing_spending_points.o: color.h main.h config.h pcg_basic.h ptrcheck.h
.o/thing_spending_points.o: thing_stats.h tree.h thing.h wid.h sdl.h map.h
.o/thing_spending_points.o: enum.h level_private.h thing_template.h
.o/thing_stats.o: string_util.h main.h config.h pcg_basic.h ptrcheck.h
.o/thing_stats.o: thing_stats.h name.h wid_player_info.h math_util.h thing.h
.o/thing_stats.o: tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_stats.o: thing_template.h client.h socket_util.h player.h
.o/thing_teleport.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_teleport.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_teleport.o: thing_template.h wid_game_map_server.h time_util.h
.o/thing_teleport.o: math_util.h
.o/thing_template.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_template.o: tree.h thing_tile_private.h thing_tile.h tile.h
.o/thing_template.o: tile_private.h glapi.h color.h thing.h wid.h sdl.h map.h
.o/thing_template.o: enum.h level_private.h thing_template.h marshal.h
.o/thing_template.o: string_util.h
.o/thing_tick.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_tick.o: thing_timer.h timer.h wid_game_map_client.h thing_shop.h
.o/thing_tick.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_tick.o: thing_template.h wid_game_map_server.h level.h time_util.h
.o/thing_tick.o: math_util.h
.o/thing_tile.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h tree.h
.o/thing_tile.o: thing_tile_private.h thing_tile.h thing.h wid.h sdl.h map.h
.o/thing_tile.o: enum.h level_private.h thing_template.h marshal.h
.o/thing_timer.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_timer.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_timer.o: thing_template.h thing_timer.h timer.h
.o/thing_timer.o: wid_game_map_server.h wid_game_map_client.h
.o/thing_torch.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_torch.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_torch.o: thing_template.h time_util.h
.o/thing_vision.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/thing_vision.o: sdl.h map.h tree.h enum.h color.h wid_popup.h
.o/thing_vision.o: wid_player_stats.h string_util.h name.h thing_template.h
.o/thing_vision.o: wid_player_info.h math_util.h thing.h level_private.h
.o/thing_vision.o: client.h socket_util.h player.h wid_game_map_server.h
.o/thing_weapon.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/thing_weapon.o: thing.h tree.h wid.h sdl.h map.h enum.h level_private.h
.o/thing_weapon.o: thing_template.h wid_game_map_server.h
.o/thing_weapon.o: wid_game_map_client.h math_util.h
.o/thing_xp.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/thing_xp.o: sdl.h map.h tree.h enum.h color.h wid_popup.h
.o/thing_xp.o: wid_player_stats.h string_util.h name.h thing_template.h
.o/thing_xp.o: wid_player_info.h math_util.h thing.h level_private.h client.h
.o/thing_xp.o: socket_util.h player.h time_util.h
.o/tile.o: glapi.h color.h main.h config.h pcg_basic.h ptrcheck.h
.o/tile.o: thing_stats.h tree.h tile.h tile_private.h tex.h pixel.h
.o/time.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h time_util.h
.o/time.o: sdl.h sdl_util.h
.o/timer.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h tree.h
.o/timer.o: timer.h timer_private.h string_util.h time_util.h sdl.h
.o/token.o: slre.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/token.o: token.h
.o/tree.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h tree.h
.o/tree_test.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h tree.h
.o/ttf.o: glapi.h color.h main.h config.h pcg_basic.h ptrcheck.h
.o/ttf.o: thing_stats.h tree.h stb_image.h math_util.h pixel.h bits.h tex.h
.o/ttf.o: tile.h tile_private.h ttf.h enum.h ramdisk.h time_util.h sdl.h
.o/ttf.o: string_ext.h string_util.h
.o/util.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/vision.o: slre.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/vision.o: math_util.h string_util.h wid.h sdl.h map.h tree.h enum.h
.o/vision.o: level.h vision.h thing_template.h wid_game_map_server.h thing.h
.o/vision.o: level_private.h
.o/wid.o: slre.h wid.h sdl.h main.h config.h pcg_basic.h ptrcheck.h
.o/wid.o: thing_stats.h map.h tree.h enum.h ttf.h tex.h tile.h tile_private.h
.o/wid.o: glapi.h color.h thing.h level_private.h thing_template.h
.o/wid.o: thing_tile.h command.h token.h time_util.h wid_console.h wid_chat.h
.o/wid.o: wid_tooltip.h marshal.h string_util.h sound.h timer.h client.h
.o/wid.o: wid_game_map_client.h math_util.h level.h
.o/wid_anim.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h thing.h
.o/wid_anim.o: tree.h wid.h sdl.h map.h enum.h level_private.h
.o/wid_anim.o: thing_template.h thing_tile.h time_util.h
.o/wid_button.o: wid.h sdl.h main.h config.h pcg_basic.h ptrcheck.h
.o/wid_button.o: thing_stats.h map.h tree.h enum.h color.h ttf.h wid_button.h
.o/wid_chat.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_chat.o: wid_chat.h wid.h sdl.h map.h tree.h enum.h color.h ttf.h
.o/wid_choose_game_type.o: wid.h sdl.h main.h config.h pcg_basic.h ptrcheck.h
.o/wid_choose_game_type.o: thing_stats.h map.h tree.h enum.h
.o/wid_choose_game_type.o: wid_choose_game_type.h wid_choose_stats.h
.o/wid_choose_game_type.o: wid_choose_name.h wid_intro.h wid_server_join.h
.o/wid_choose_game_type.o: wid_server_create.h wid_game_map_server.h
.o/wid_choose_game_type.o: wid_game_map_client.h timer.h glapi.h color.h
.o/wid_choose_game_type.o: server.h wid_menu.h
.o/wid_choose_name.o: wid.h sdl.h main.h config.h pcg_basic.h ptrcheck.h
.o/wid_choose_name.o: thing_stats.h map.h tree.h enum.h wid_choose_name.h
.o/wid_choose_name.o: wid_choose_pclass.h wid_choose_stats.h wid_intro.h
.o/wid_choose_name.o: wid_server_join.h wid_keyboard.h wid_server_create.h
.o/wid_choose_name.o: timer.h glapi.h color.h server.h wid_menu.h name.h
.o/wid_choose_pclass.o: wid.h sdl.h main.h config.h pcg_basic.h ptrcheck.h
.o/wid_choose_pclass.o: thing_stats.h map.h tree.h enum.h wid_choose_name.h
.o/wid_choose_pclass.o: wid_choose_pclass.h wid_choose_game_type.h
.o/wid_choose_pclass.o: wid_intro.h wid_server_join.h wid_server_create.h
.o/wid_choose_pclass.o: timer.h glapi.h color.h server.h wid_menu.h name.h
.o/wid_choose_stats.o: wid.h sdl.h main.h config.h pcg_basic.h ptrcheck.h
.o/wid_choose_stats.o: thing_stats.h map.h tree.h enum.h wid_player_stats.h
.o/wid_choose_stats.o: wid_choose_name.h wid_choose_stats.h
.o/wid_choose_stats.o: wid_choose_game_type.h wid_intro.h wid_server_join.h
.o/wid_choose_stats.o: wid_server_create.h timer.h glapi.h color.h server.h
.o/wid_choose_stats.o: wid_menu.h name.h thing.h level_private.h
.o/wid_choose_stats.o: thing_template.h string_util.h socket_util.h player.h
.o/wid_choose_stats.o: client.h
.o/wid_cmap.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_cmap.o: sdl.h map.h tree.h enum.h dir.h color.h string_ext.h ttf.h
.o/wid_cmap.o: thing_template.h wid_cmap.h time_util.h timer.h math_util.h
.o/wid_cmap.o: thing_tile.h wid_editor.h wid_intro.h tile.h tile_private.h
.o/wid_cmap.o: glapi.h string_util.h
.o/wid_console.o: slre.h main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_console.o: wid_console.h command.h token.h wid.h sdl.h map.h tree.h
.o/wid_console.o: enum.h color.h ttf.h
.o/wid_dead.o: wid.h sdl.h main.h config.h pcg_basic.h ptrcheck.h
.o/wid_dead.o: thing_stats.h map.h tree.h enum.h color.h wid_dead.h
.o/wid_dead.o: wid_notify.h timer.h client.h wid_game_map_client.h
.o/wid_dead.o: wid_intro.h music.h wid_game_quit.h wid_menu.h wid_game_over.h
.o/wid_dirlist.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_dirlist.o: wid_dirlist.h wid.h sdl.h map.h tree.h enum.h color.h ttf.h
.o/wid_dirlist.o: dir.h string_util.h
.o/wid_editor.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_editor.o: sdl.h map.h tree.h enum.h color.h string_ext.h ttf.h
.o/wid_editor.o: thing_template.h wid_editor.h time_util.h timer.h level.h
.o/wid_editor.o: math_util.h thing_tile.h wid_tooltip.h wid_intro.h
.o/wid_editor.o: map_jigsaw.h tile.h tile_private.h glapi.h marshal.h
.o/wid_editor.o: wid_map.h wid_cmap.h wid_menu.h wid_keyboard.h string_util.h
.o/wid_editor.o: wid_console.h bits.h thing.h level_private.h
.o/wid_game_map_client.o: main.h config.h pcg_basic.h ptrcheck.h
.o/wid_game_map_client.o: thing_stats.h wid.h sdl.h map.h tree.h enum.h
.o/wid_game_map_client.o: tile.h tile_private.h glapi.h color.h string_util.h
.o/wid_game_map_client.o: wid_textbox.h wid_game_map_client.h
.o/wid_game_map_client.o: wid_player_stats.h wid_player_info.h
.o/wid_game_map_client.o: wid_player_inventory.h wid_player_action.h
.o/wid_game_map_client.o: wid_menu.h thing.h level_private.h thing_template.h
.o/wid_game_map_client.o: level.h server.h client.h socket_util.h player.h
.o/wid_game_map_client.o: timer.h time_util.h thing_tile.h wid_chat.h
.o/wid_game_map_client.o: wid_game_quit.h wid_notify.h math_util.h
.o/wid_game_map_client.o: wid_editor.h wid_choose_stats.h sound.h
.o/wid_game_map_server.o: main.h config.h pcg_basic.h ptrcheck.h
.o/wid_game_map_server.o: thing_stats.h wid.h sdl.h map.h tree.h enum.h
.o/wid_game_map_server.o: tile.h tile_private.h glapi.h color.h thing_tile.h
.o/wid_game_map_server.o: wid_game_map_server.h thing.h level_private.h
.o/wid_game_map_server.o: thing_template.h level.h server.h socket_util.h
.o/wid_game_map_server.o: player.h string_util.h file.h wid_editor.h sound.h
.o/wid_game_over.o: wid.h sdl.h main.h config.h pcg_basic.h ptrcheck.h
.o/wid_game_over.o: thing_stats.h map.h tree.h enum.h wid_game_over.h
.o/wid_game_over.o: wid_choose_stats.h wid_choose_name.h wid_intro.h
.o/wid_game_over.o: wid_server_join.h wid_server_create.h
.o/wid_game_over.o: wid_game_map_server.h wid_game_map_client.h timer.h
.o/wid_game_over.o: glapi.h color.h server.h wid_menu.h thing_template.h
.o/wid_game_over.o: music.h client.h
.o/wid_game_quit.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_game_quit.o: wid.h sdl.h map.h tree.h enum.h wid_popup.h
.o/wid_game_quit.o: wid_game_quit.h client.h wid_game_map_client.h
.o/wid_game_quit.o: wid_intro.h string_util.h wid_menu.h
.o/wid_hiscore.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_hiscore.o: sdl.h map.h tree.h enum.h color.h wid_hiscore.h wid_intro.h
.o/wid_hiscore.o: string_util.h marshal.h
.o/wid_intro.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_intro.o: sdl.h map.h tree.h enum.h wid_intro.h wid_popup.h
.o/wid_intro.o: wid_intro_about.h wid_intro_settings.h wid_menu.h
.o/wid_intro.o: wid_game_over.h wid_game_map_client.h wid_choose_game_type.h
.o/wid_intro.o: wid_hiscore.h wid_notify.h wid_server_join.h
.o/wid_intro.o: wid_choose_pclass.h wid_server_create.h thing_template.h
.o/wid_intro.o: music.h level.h timer.h socket_util.h player.h server.h
.o/wid_intro.o: glapi.h color.h wid_keyboard.h wid_editor.h wid_map.h
.o/wid_intro.o: wid_cmap.h wid_tooltip.h
.o/wid_intro_about.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_intro_about.o: wid.h sdl.h map.h tree.h enum.h wid_popup.h
.o/wid_intro_about.o: wid_intro_about.h wid_intro.h wid_menu.h color.h
.o/wid_intro_demo.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_intro_demo.o: wid.h sdl.h map.h tree.h enum.h tex.h init_fn.h
.o/wid_intro_demo.o: wid_intro_demo.h wid_intro.h glapi.h color.h
.o/wid_intro_demo.o: thing_template.h wid_tooltip.h time_util.h music.h
.o/wid_intro_settings.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_intro_settings.o: wid.h sdl.h map.h tree.h enum.h color.h wid_popup.h
.o/wid_intro_settings.o: wid_intro_settings.h wid_intro.h wid_menu.h
.o/wid_intro_settings.o: string_util.h music.h
.o/wid_keyboard.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_keyboard.o: sdl.h map.h tree.h enum.h color.h string_ext.h ttf.h
.o/wid_keyboard.o: wid_keyboard.h time_util.h timer.h math_util.h
.o/wid_map.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_map.o: sdl.h map.h tree.h enum.h dir.h color.h string_ext.h ttf.h
.o/wid_map.o: thing_template.h wid_map.h time_util.h timer.h level.h
.o/wid_map.o: math_util.h thing_tile.h wid_editor.h wid_intro.h tile.h
.o/wid_map.o: tile_private.h glapi.h string_util.h wid_tooltip.h ramdisk.h
.o/wid_menu.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_menu.o: sdl.h map.h tree.h enum.h color.h string_ext.h ttf.h
.o/wid_menu.o: wid_menu.h time_util.h timer.h math_util.h
.o/wid_notify.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_notify.o: sdl.h map.h tree.h enum.h color.h ttf.h wid_notify.h
.o/wid_notify.o: time_util.h string_ext.h
.o/wid_numpad.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_numpad.o: sdl.h map.h tree.h enum.h color.h string_ext.h ttf.h
.o/wid_numpad.o: wid_numpad.h time_util.h timer.h math_util.h
.o/wid_player_action.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_player_action.o: wid.h sdl.h map.h tree.h enum.h color.h
.o/wid_player_action.o: wid_player_action.h wid_player_inventory.h
.o/wid_player_action.o: wid_player_stats.h wid_game_map_client.h
.o/wid_player_action.o: thing_template.h string_util.h socket_util.h player.h
.o/wid_player_action.o: client.h thing.h level_private.h time_util.h sound.h
.o/wid_player_info.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_player_info.o: wid.h sdl.h map.h tree.h enum.h color.h
.o/wid_player_info.o: wid_player_info.h wid_player_inventory.h
.o/wid_player_info.o: wid_player_stats.h string_util.h thing_template.h
.o/wid_player_info.o: time_util.h client.h name.h
.o/wid_player_inventory.o: main.h config.h pcg_basic.h ptrcheck.h
.o/wid_player_inventory.o: thing_stats.h wid.h sdl.h map.h tree.h enum.h
.o/wid_player_inventory.o: color.h wid_player_inventory.h string_util.h
.o/wid_player_inventory.o: thing_template.h wid_player_stats.h glapi.h
.o/wid_player_inventory.o: thing.h level_private.h
.o/wid_player_stats.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_player_stats.o: wid.h sdl.h map.h tree.h enum.h color.h
.o/wid_player_stats.o: wid_player_stats.h wid_player_info.h
.o/wid_player_stats.o: wid_player_inventory.h wid_player_action.h
.o/wid_player_stats.o: wid_choose_game_type.h timer.h string_util.h client.h
.o/wid_player_stats.o: thing.h level_private.h thing_template.h
.o/wid_popup.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_popup.o: sdl.h map.h tree.h enum.h color.h string_ext.h ttf.h
.o/wid_popup.o: wid_popup.h
.o/wid_server_create.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_server_create.o: wid.h sdl.h map.h tree.h enum.h color.h
.o/wid_server_create.o: wid_server_create.h wid_choose_game_type.h
.o/wid_server_create.o: string_util.h wid_game_map_server.h
.o/wid_server_create.o: wid_game_map_client.h socket_util.h player.h
.o/wid_server_create.o: wid_menu.h wid_numpad.h wid_keyboard.h server.h
.o/wid_server_edit.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_server_edit.o: wid.h sdl.h map.h tree.h enum.h color.h
.o/wid_server_edit.o: wid_server_edit.h wid_server_join.h
.o/wid_server_edit.o: wid_choose_game_type.h string_util.h
.o/wid_server_edit.o: wid_game_map_server.h wid_game_map_client.h
.o/wid_server_edit.o: socket_util.h player.h wid_menu.h wid_numpad.h
.o/wid_server_edit.o: wid_keyboard.h server.h
.o/wid_server_join.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_server_join.o: wid.h sdl.h map.h tree.h enum.h color.h
.o/wid_server_join.o: wid_server_join.h wid_server_edit.h
.o/wid_server_join.o: wid_game_map_client.h wid_choose_game_type.h
.o/wid_server_join.o: wid_intro.h string_util.h marshal.h socket_util.h
.o/wid_server_join.o: player.h client.h string_ext.h wid_tooltip.h wid_menu.h
.o/wid_splash.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_splash.o: sdl.h map.h tree.h enum.h tex.h init_fn.h wid_splash.h
.o/wid_splash.o: glapi.h color.h
.o/wid_text_input.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_text_input.o: wid_text_input.h wid.h sdl.h map.h tree.h enum.h color.h
.o/wid_text_input.o: ttf.h
.o/wid_textbox.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h
.o/wid_textbox.o: wid_textbox.h wid.h sdl.h map.h tree.h enum.h color.h
.o/wid_textbox.o: string_ext.h ttf.h
.o/wid_tooltip.o: main.h config.h pcg_basic.h ptrcheck.h thing_stats.h wid.h
.o/wid_tooltip.o: sdl.h map.h tree.h enum.h color.h string_ext.h ttf.h
.o/wid_tooltip.o: wid_tooltip.h
