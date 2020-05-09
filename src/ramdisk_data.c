#include <stdint.h>
#include "ramdisk.h"

#ifndef NORAMDISK

extern unsigned char *data_gfx_anim_eyes_tga_start_ asm("data_gfx_anim_eyes_tga_start_");
extern unsigned char *data_gfx_anim_eyes_tga_end_ asm("data_gfx_anim_eyes_tga_end_");
static const unsigned char *const data_gfx_anim_eyes_tga_start =
    (const unsigned char *const) (char*)&data_gfx_anim_eyes_tga_start_;
static const unsigned char *const data_gfx_anim_eyes_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_anim_eyes_tga_end_;

extern unsigned char *data_gfx_anim_treasure_chest_tga_start_ asm("data_gfx_anim_treasure_chest_tga_start_");
extern unsigned char *data_gfx_anim_treasure_chest_tga_end_ asm("data_gfx_anim_treasure_chest_tga_end_");
static const unsigned char *const data_gfx_anim_treasure_chest_tga_start =
    (const unsigned char *const) (char*)&data_gfx_anim_treasure_chest_tga_start_;
static const unsigned char *const data_gfx_anim_treasure_chest_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_anim_treasure_chest_tga_end_;

extern unsigned char *data_gfx_axe_tga_start_ asm("data_gfx_axe_tga_start_");
extern unsigned char *data_gfx_axe_tga_end_ asm("data_gfx_axe_tga_end_");
static const unsigned char *const data_gfx_axe_tga_start =
    (const unsigned char *const) (char*)&data_gfx_axe_tga_start_;
static const unsigned char *const data_gfx_axe_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_axe_tga_end_;

extern unsigned char *data_gfx_button_black_tga_start_ asm("data_gfx_button_black_tga_start_");
extern unsigned char *data_gfx_button_black_tga_end_ asm("data_gfx_button_black_tga_end_");
static const unsigned char *const data_gfx_button_black_tga_start =
    (const unsigned char *const) (char*)&data_gfx_button_black_tga_start_;
static const unsigned char *const data_gfx_button_black_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_button_black_tga_end_;

extern unsigned char *data_gfx_cloudkill_tga_start_ asm("data_gfx_cloudkill_tga_start_");
extern unsigned char *data_gfx_cloudkill_tga_end_ asm("data_gfx_cloudkill_tga_end_");
static const unsigned char *const data_gfx_cloudkill_tga_start =
    (const unsigned char *const) (char*)&data_gfx_cloudkill_tga_start_;
static const unsigned char *const data_gfx_cloudkill_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_cloudkill_tga_end_;

extern unsigned char *data_gfx_crystal_tga_start_ asm("data_gfx_crystal_tga_start_");
extern unsigned char *data_gfx_crystal_tga_end_ asm("data_gfx_crystal_tga_end_");
static const unsigned char *const data_gfx_crystal_tga_start =
    (const unsigned char *const) (char*)&data_gfx_crystal_tga_start_;
static const unsigned char *const data_gfx_crystal_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_crystal_tga_end_;

extern unsigned char *data_gfx_crystalball_tga_start_ asm("data_gfx_crystalball_tga_start_");
extern unsigned char *data_gfx_crystalball_tga_end_ asm("data_gfx_crystalball_tga_end_");
static const unsigned char *const data_gfx_crystalball_tga_start =
    (const unsigned char *const) (char*)&data_gfx_crystalball_tga_start_;
static const unsigned char *const data_gfx_crystalball_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_crystalball_tga_end_;

extern unsigned char *data_gfx_crystalball_purple_tga_start_ asm("data_gfx_crystalball_purple_tga_start_");
extern unsigned char *data_gfx_crystalball_purple_tga_end_ asm("data_gfx_crystalball_purple_tga_end_");
static const unsigned char *const data_gfx_crystalball_purple_tga_start =
    (const unsigned char *const) (char*)&data_gfx_crystalball_purple_tga_start_;
static const unsigned char *const data_gfx_crystalball_purple_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_crystalball_purple_tga_end_;

extern unsigned char *data_gfx_death_cloud_tga_start_ asm("data_gfx_death_cloud_tga_start_");
extern unsigned char *data_gfx_death_cloud_tga_end_ asm("data_gfx_death_cloud_tga_end_");
static const unsigned char *const data_gfx_death_cloud_tga_start =
    (const unsigned char *const) (char*)&data_gfx_death_cloud_tga_start_;
static const unsigned char *const data_gfx_death_cloud_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_death_cloud_tga_end_;

extern unsigned char *data_gfx_dragon_tga_start_ asm("data_gfx_dragon_tga_start_");
extern unsigned char *data_gfx_dragon_tga_end_ asm("data_gfx_dragon_tga_end_");
static const unsigned char *const data_gfx_dragon_tga_start =
    (const unsigned char *const) (char*)&data_gfx_dragon_tga_start_;
static const unsigned char *const data_gfx_dragon_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_dragon_tga_end_;

extern unsigned char *data_gfx_explosion_tga_start_ asm("data_gfx_explosion_tga_start_");
extern unsigned char *data_gfx_explosion_tga_end_ asm("data_gfx_explosion_tga_end_");
static const unsigned char *const data_gfx_explosion_tga_start =
    (const unsigned char *const) (char*)&data_gfx_explosion_tga_start_;
static const unsigned char *const data_gfx_explosion_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_explosion_tga_end_;

extern unsigned char *data_gfx_giant_rock_tga_start_ asm("data_gfx_giant_rock_tga_start_");
extern unsigned char *data_gfx_giant_rock_tga_end_ asm("data_gfx_giant_rock_tga_end_");
static const unsigned char *const data_gfx_giant_rock_tga_start =
    (const unsigned char *const) (char*)&data_gfx_giant_rock_tga_start_;
static const unsigned char *const data_gfx_giant_rock_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_giant_rock_tga_end_;

extern unsigned char *data_gfx_gorynlich_tga_start_ asm("data_gfx_gorynlich_tga_start_");
extern unsigned char *data_gfx_gorynlich_tga_end_ asm("data_gfx_gorynlich_tga_end_");
static const unsigned char *const data_gfx_gorynlich_tga_start =
    (const unsigned char *const) (char*)&data_gfx_gorynlich_tga_start_;
static const unsigned char *const data_gfx_gorynlich_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_gorynlich_tga_end_;

extern unsigned char *data_gfx_gothic_full_screen_tga_start_ asm("data_gfx_gothic_full_screen_tga_start_");
extern unsigned char *data_gfx_gothic_full_screen_tga_end_ asm("data_gfx_gothic_full_screen_tga_end_");
static const unsigned char *const data_gfx_gothic_full_screen_tga_start =
    (const unsigned char *const) (char*)&data_gfx_gothic_full_screen_tga_start_;
static const unsigned char *const data_gfx_gothic_full_screen_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_gothic_full_screen_tga_end_;

extern unsigned char *data_gfx_gothic_tall_axe_tga_start_ asm("data_gfx_gothic_tall_axe_tga_start_");
extern unsigned char *data_gfx_gothic_tall_axe_tga_end_ asm("data_gfx_gothic_tall_axe_tga_end_");
static const unsigned char *const data_gfx_gothic_tall_axe_tga_start =
    (const unsigned char *const) (char*)&data_gfx_gothic_tall_axe_tga_start_;
static const unsigned char *const data_gfx_gothic_tall_axe_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_gothic_tall_axe_tga_end_;

extern unsigned char *data_gfx_gothic_tall_chest_tga_start_ asm("data_gfx_gothic_tall_chest_tga_start_");
extern unsigned char *data_gfx_gothic_tall_chest_tga_end_ asm("data_gfx_gothic_tall_chest_tga_end_");
static const unsigned char *const data_gfx_gothic_tall_chest_tga_start =
    (const unsigned char *const) (char*)&data_gfx_gothic_tall_chest_tga_start_;
static const unsigned char *const data_gfx_gothic_tall_chest_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_gothic_tall_chest_tga_end_;

extern unsigned char *data_gfx_gothic_tall_skull_tga_start_ asm("data_gfx_gothic_tall_skull_tga_start_");
extern unsigned char *data_gfx_gothic_tall_skull_tga_end_ asm("data_gfx_gothic_tall_skull_tga_end_");
static const unsigned char *const data_gfx_gothic_tall_skull_tga_start =
    (const unsigned char *const) (char*)&data_gfx_gothic_tall_skull_tga_start_;
static const unsigned char *const data_gfx_gothic_tall_skull_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_gothic_tall_skull_tga_end_;

extern unsigned char *data_gfx_gothic_wide_tga_start_ asm("data_gfx_gothic_wide_tga_start_");
extern unsigned char *data_gfx_gothic_wide_tga_end_ asm("data_gfx_gothic_wide_tga_end_");
static const unsigned char *const data_gfx_gothic_wide_tga_start =
    (const unsigned char *const) (char*)&data_gfx_gothic_wide_tga_start_;
static const unsigned char *const data_gfx_gothic_wide_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_gothic_wide_tga_end_;

extern unsigned char *data_gfx_gravestone_tga_start_ asm("data_gfx_gravestone_tga_start_");
extern unsigned char *data_gfx_gravestone_tga_end_ asm("data_gfx_gravestone_tga_end_");
static const unsigned char *const data_gfx_gravestone_tga_start =
    (const unsigned char *const) (char*)&data_gfx_gravestone_tga_start_;
static const unsigned char *const data_gfx_gravestone_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_gravestone_tga_end_;

extern unsigned char *data_gfx_gravestone2_tga_start_ asm("data_gfx_gravestone2_tga_start_");
extern unsigned char *data_gfx_gravestone2_tga_end_ asm("data_gfx_gravestone2_tga_end_");
static const unsigned char *const data_gfx_gravestone2_tga_start =
    (const unsigned char *const) (char*)&data_gfx_gravestone2_tga_start_;
static const unsigned char *const data_gfx_gravestone2_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_gravestone2_tga_end_;

extern unsigned char *data_gfx_intro1_tga_start_ asm("data_gfx_intro1_tga_start_");
extern unsigned char *data_gfx_intro1_tga_end_ asm("data_gfx_intro1_tga_end_");
static const unsigned char *const data_gfx_intro1_tga_start =
    (const unsigned char *const) (char*)&data_gfx_intro1_tga_start_;
static const unsigned char *const data_gfx_intro1_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_intro1_tga_end_;

extern unsigned char *data_gfx_intro2_tga_start_ asm("data_gfx_intro2_tga_start_");
extern unsigned char *data_gfx_intro2_tga_end_ asm("data_gfx_intro2_tga_end_");
static const unsigned char *const data_gfx_intro2_tga_start =
    (const unsigned char *const) (char*)&data_gfx_intro2_tga_start_;
static const unsigned char *const data_gfx_intro2_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_intro2_tga_end_;

extern unsigned char *data_gfx_intro3_tga_start_ asm("data_gfx_intro3_tga_start_");
extern unsigned char *data_gfx_intro3_tga_end_ asm("data_gfx_intro3_tga_end_");
static const unsigned char *const data_gfx_intro3_tga_start =
    (const unsigned char *const) (char*)&data_gfx_intro3_tga_start_;
static const unsigned char *const data_gfx_intro3_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_intro3_tga_end_;

extern unsigned char *data_gfx_intro4_tga_start_ asm("data_gfx_intro4_tga_start_");
extern unsigned char *data_gfx_intro4_tga_end_ asm("data_gfx_intro4_tga_end_");
static const unsigned char *const data_gfx_intro4_tga_start =
    (const unsigned char *const) (char*)&data_gfx_intro4_tga_start_;
static const unsigned char *const data_gfx_intro4_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_intro4_tga_end_;

extern unsigned char *data_gfx_intro5_tga_start_ asm("data_gfx_intro5_tga_start_");
extern unsigned char *data_gfx_intro5_tga_end_ asm("data_gfx_intro5_tga_end_");
static const unsigned char *const data_gfx_intro5_tga_start =
    (const unsigned char *const) (char*)&data_gfx_intro5_tga_start_;
static const unsigned char *const data_gfx_intro5_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_intro5_tga_end_;

extern unsigned char *data_gfx_itembar_tga_start_ asm("data_gfx_itembar_tga_start_");
extern unsigned char *data_gfx_itembar_tga_end_ asm("data_gfx_itembar_tga_end_");
static const unsigned char *const data_gfx_itembar_tga_start =
    (const unsigned char *const) (char*)&data_gfx_itembar_tga_start_;
static const unsigned char *const data_gfx_itembar_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_itembar_tga_end_;

extern unsigned char *data_gfx_jesus_tga_start_ asm("data_gfx_jesus_tga_start_");
extern unsigned char *data_gfx_jesus_tga_end_ asm("data_gfx_jesus_tga_end_");
static const unsigned char *const data_gfx_jesus_tga_start =
    (const unsigned char *const) (char*)&data_gfx_jesus_tga_start_;
static const unsigned char *const data_gfx_jesus_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_jesus_tga_end_;

extern unsigned char *data_gfx_magic_tga_start_ asm("data_gfx_magic_tga_start_");
extern unsigned char *data_gfx_magic_tga_end_ asm("data_gfx_magic_tga_end_");
static const unsigned char *const data_gfx_magic_tga_start =
    (const unsigned char *const) (char*)&data_gfx_magic_tga_start_;
static const unsigned char *const data_gfx_magic_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_magic_tga_end_;

extern unsigned char *data_gfx_magic_cloud_tga_start_ asm("data_gfx_magic_cloud_tga_start_");
extern unsigned char *data_gfx_magic_cloud_tga_end_ asm("data_gfx_magic_cloud_tga_end_");
static const unsigned char *const data_gfx_magic_cloud_tga_start =
    (const unsigned char *const) (char*)&data_gfx_magic_cloud_tga_start_;
static const unsigned char *const data_gfx_magic_cloud_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_magic_cloud_tga_end_;

extern unsigned char *data_gfx_main_title_tga_start_ asm("data_gfx_main_title_tga_start_");
extern unsigned char *data_gfx_main_title_tga_end_ asm("data_gfx_main_title_tga_end_");
static const unsigned char *const data_gfx_main_title_tga_start =
    (const unsigned char *const) (char*)&data_gfx_main_title_tga_start_;
static const unsigned char *const data_gfx_main_title_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_main_title_tga_end_;

extern unsigned char *data_gfx_player1_tga_start_ asm("data_gfx_player1_tga_start_");
extern unsigned char *data_gfx_player1_tga_end_ asm("data_gfx_player1_tga_end_");
static const unsigned char *const data_gfx_player1_tga_start =
    (const unsigned char *const) (char*)&data_gfx_player1_tga_start_;
static const unsigned char *const data_gfx_player1_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_player1_tga_end_;

extern unsigned char *data_gfx_player2_tga_start_ asm("data_gfx_player2_tga_start_");
extern unsigned char *data_gfx_player2_tga_end_ asm("data_gfx_player2_tga_end_");
static const unsigned char *const data_gfx_player2_tga_start =
    (const unsigned char *const) (char*)&data_gfx_player2_tga_start_;
static const unsigned char *const data_gfx_player2_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_player2_tga_end_;

extern unsigned char *data_gfx_player3_tga_start_ asm("data_gfx_player3_tga_start_");
extern unsigned char *data_gfx_player3_tga_end_ asm("data_gfx_player3_tga_end_");
static const unsigned char *const data_gfx_player3_tga_start =
    (const unsigned char *const) (char*)&data_gfx_player3_tga_start_;
static const unsigned char *const data_gfx_player3_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_player3_tga_end_;

extern unsigned char *data_gfx_player4_tga_start_ asm("data_gfx_player4_tga_start_");
extern unsigned char *data_gfx_player4_tga_end_ asm("data_gfx_player4_tga_end_");
static const unsigned char *const data_gfx_player4_tga_start =
    (const unsigned char *const) (char*)&data_gfx_player4_tga_start_;
static const unsigned char *const data_gfx_player4_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_player4_tga_end_;

extern unsigned char *data_gfx_player5_tga_start_ asm("data_gfx_player5_tga_start_");
extern unsigned char *data_gfx_player5_tga_end_ asm("data_gfx_player5_tga_end_");
static const unsigned char *const data_gfx_player5_tga_start =
    (const unsigned char *const) (char*)&data_gfx_player5_tga_start_;
static const unsigned char *const data_gfx_player5_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_player5_tga_end_;

extern unsigned char *data_gfx_players_tga_start_ asm("data_gfx_players_tga_start_");
extern unsigned char *data_gfx_players_tga_end_ asm("data_gfx_players_tga_end_");
static const unsigned char *const data_gfx_players_tga_start =
    (const unsigned char *const) (char*)&data_gfx_players_tga_start_;
static const unsigned char *const data_gfx_players_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_players_tga_end_;

extern unsigned char *data_gfx_poison_tga_start_ asm("data_gfx_poison_tga_start_");
extern unsigned char *data_gfx_poison_tga_end_ asm("data_gfx_poison_tga_end_");
static const unsigned char *const data_gfx_poison_tga_start =
    (const unsigned char *const) (char*)&data_gfx_poison_tga_start_;
static const unsigned char *const data_gfx_poison_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_poison_tga_end_;

extern unsigned char *data_gfx_powerup1_tga_start_ asm("data_gfx_powerup1_tga_start_");
extern unsigned char *data_gfx_powerup1_tga_end_ asm("data_gfx_powerup1_tga_end_");
static const unsigned char *const data_gfx_powerup1_tga_start =
    (const unsigned char *const) (char*)&data_gfx_powerup1_tga_start_;
static const unsigned char *const data_gfx_powerup1_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_powerup1_tga_end_;

extern unsigned char *data_gfx_ring_tga_start_ asm("data_gfx_ring_tga_start_");
extern unsigned char *data_gfx_ring_tga_end_ asm("data_gfx_ring_tga_end_");
static const unsigned char *const data_gfx_ring_tga_start =
    (const unsigned char *const) (char*)&data_gfx_ring_tga_start_;
static const unsigned char *const data_gfx_ring_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_ring_tga_end_;

extern unsigned char *data_gfx_sawblade_tga_start_ asm("data_gfx_sawblade_tga_start_");
extern unsigned char *data_gfx_sawblade_tga_end_ asm("data_gfx_sawblade_tga_end_");
static const unsigned char *const data_gfx_sawblade_tga_start =
    (const unsigned char *const) (char*)&data_gfx_sawblade_tga_start_;
static const unsigned char *const data_gfx_sawblade_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_sawblade_tga_end_;

extern unsigned char *data_gfx_sawblade2_tga_start_ asm("data_gfx_sawblade2_tga_start_");
extern unsigned char *data_gfx_sawblade2_tga_end_ asm("data_gfx_sawblade2_tga_end_");
static const unsigned char *const data_gfx_sawblade2_tga_start =
    (const unsigned char *const) (char*)&data_gfx_sawblade2_tga_start_;
static const unsigned char *const data_gfx_sawblade2_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_sawblade2_tga_end_;

extern unsigned char *data_gfx_sawblade3_tga_start_ asm("data_gfx_sawblade3_tga_start_");
extern unsigned char *data_gfx_sawblade3_tga_end_ asm("data_gfx_sawblade3_tga_end_");
static const unsigned char *const data_gfx_sawblade3_tga_start =
    (const unsigned char *const) (char*)&data_gfx_sawblade3_tga_start_;
static const unsigned char *const data_gfx_sawblade3_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_sawblade3_tga_end_;

extern unsigned char *data_gfx_sawblade4_tga_start_ asm("data_gfx_sawblade4_tga_start_");
extern unsigned char *data_gfx_sawblade4_tga_end_ asm("data_gfx_sawblade4_tga_end_");
static const unsigned char *const data_gfx_sawblade4_tga_start =
    (const unsigned char *const) (char*)&data_gfx_sawblade4_tga_start_;
static const unsigned char *const data_gfx_sawblade4_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_sawblade4_tga_end_;

extern unsigned char *data_gfx_sawblade5_tga_start_ asm("data_gfx_sawblade5_tga_start_");
extern unsigned char *data_gfx_sawblade5_tga_end_ asm("data_gfx_sawblade5_tga_end_");
static const unsigned char *const data_gfx_sawblade5_tga_start =
    (const unsigned char *const) (char*)&data_gfx_sawblade5_tga_start_;
static const unsigned char *const data_gfx_sawblade5_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_sawblade5_tga_end_;

extern unsigned char *data_gfx_shield1_tga_start_ asm("data_gfx_shield1_tga_start_");
extern unsigned char *data_gfx_shield1_tga_end_ asm("data_gfx_shield1_tga_end_");
static const unsigned char *const data_gfx_shield1_tga_start =
    (const unsigned char *const) (char*)&data_gfx_shield1_tga_start_;
static const unsigned char *const data_gfx_shield1_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_shield1_tga_end_;

extern unsigned char *data_gfx_sprites_tga_start_ asm("data_gfx_sprites_tga_start_");
extern unsigned char *data_gfx_sprites_tga_end_ asm("data_gfx_sprites_tga_end_");
static const unsigned char *const data_gfx_sprites_tga_start =
    (const unsigned char *const) (char*)&data_gfx_sprites_tga_start_;
static const unsigned char *const data_gfx_sprites_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_sprites_tga_end_;

extern unsigned char *data_gfx_sprites_large_tga_start_ asm("data_gfx_sprites_large_tga_start_");
extern unsigned char *data_gfx_sprites_large_tga_end_ asm("data_gfx_sprites_large_tga_end_");
static const unsigned char *const data_gfx_sprites_large_tga_start =
    (const unsigned char *const) (char*)&data_gfx_sprites_large_tga_start_;
static const unsigned char *const data_gfx_sprites_large_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_sprites_large_tga_end_;

extern unsigned char *data_gfx_squiggles_tga_start_ asm("data_gfx_squiggles_tga_start_");
extern unsigned char *data_gfx_squiggles_tga_end_ asm("data_gfx_squiggles_tga_end_");
static const unsigned char *const data_gfx_squiggles_tga_start =
    (const unsigned char *const) (char*)&data_gfx_squiggles_tga_start_;
static const unsigned char *const data_gfx_squiggles_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_squiggles_tga_end_;

extern unsigned char *data_gfx_tall_tga_start_ asm("data_gfx_tall_tga_start_");
extern unsigned char *data_gfx_tall_tga_end_ asm("data_gfx_tall_tga_end_");
static const unsigned char *const data_gfx_tall_tga_start =
    (const unsigned char *const) (char*)&data_gfx_tall_tga_start_;
static const unsigned char *const data_gfx_tall_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_tall_tga_end_;

extern unsigned char *data_gfx_teleport_tga_start_ asm("data_gfx_teleport_tga_start_");
extern unsigned char *data_gfx_teleport_tga_end_ asm("data_gfx_teleport_tga_end_");
static const unsigned char *const data_gfx_teleport_tga_start =
    (const unsigned char *const) (char*)&data_gfx_teleport_tga_start_;
static const unsigned char *const data_gfx_teleport_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_teleport_tga_end_;

extern unsigned char *data_gfx_title_tga_start_ asm("data_gfx_title_tga_start_");
extern unsigned char *data_gfx_title_tga_end_ asm("data_gfx_title_tga_end_");
static const unsigned char *const data_gfx_title_tga_start =
    (const unsigned char *const) (char*)&data_gfx_title_tga_start_;
static const unsigned char *const data_gfx_title_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_title_tga_end_;

extern unsigned char *data_gfx_title2_tga_start_ asm("data_gfx_title2_tga_start_");
extern unsigned char *data_gfx_title2_tga_end_ asm("data_gfx_title2_tga_end_");
static const unsigned char *const data_gfx_title2_tga_start =
    (const unsigned char *const) (char*)&data_gfx_title2_tga_start_;
static const unsigned char *const data_gfx_title2_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_title2_tga_end_;

extern unsigned char *data_gfx_title3_tga_start_ asm("data_gfx_title3_tga_start_");
extern unsigned char *data_gfx_title3_tga_end_ asm("data_gfx_title3_tga_end_");
static const unsigned char *const data_gfx_title3_tga_start =
    (const unsigned char *const) (char*)&data_gfx_title3_tga_start_;
static const unsigned char *const data_gfx_title3_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_title3_tga_end_;

extern unsigned char *data_gfx_title4_tga_start_ asm("data_gfx_title4_tga_start_");
extern unsigned char *data_gfx_title4_tga_end_ asm("data_gfx_title4_tga_end_");
static const unsigned char *const data_gfx_title4_tga_start =
    (const unsigned char *const) (char*)&data_gfx_title4_tga_start_;
static const unsigned char *const data_gfx_title4_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_title4_tga_end_;

extern unsigned char *data_gfx_title5_tga_start_ asm("data_gfx_title5_tga_start_");
extern unsigned char *data_gfx_title5_tga_end_ asm("data_gfx_title5_tga_end_");
static const unsigned char *const data_gfx_title5_tga_start =
    (const unsigned char *const) (char*)&data_gfx_title5_tga_start_;
static const unsigned char *const data_gfx_title5_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_title5_tga_end_;

extern unsigned char *data_gfx_title6_tga_start_ asm("data_gfx_title6_tga_start_");
extern unsigned char *data_gfx_title6_tga_end_ asm("data_gfx_title6_tga_end_");
static const unsigned char *const data_gfx_title6_tga_start =
    (const unsigned char *const) (char*)&data_gfx_title6_tga_start_;
static const unsigned char *const data_gfx_title6_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_title6_tga_end_;

extern unsigned char *data_gfx_title_small_tga_start_ asm("data_gfx_title_small_tga_start_");
extern unsigned char *data_gfx_title_small_tga_end_ asm("data_gfx_title_small_tga_end_");
static const unsigned char *const data_gfx_title_small_tga_start =
    (const unsigned char *const) (char*)&data_gfx_title_small_tga_start_;
static const unsigned char *const data_gfx_title_small_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_title_small_tga_end_;

extern unsigned char *data_gfx_wall_floor_tga_start_ asm("data_gfx_wall_floor_tga_start_");
extern unsigned char *data_gfx_wall_floor_tga_end_ asm("data_gfx_wall_floor_tga_end_");
static const unsigned char *const data_gfx_wall_floor_tga_start =
    (const unsigned char *const) (char*)&data_gfx_wall_floor_tga_start_;
static const unsigned char *const data_gfx_wall_floor_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_wall_floor_tga_end_;

extern unsigned char *data_gfx_window_gothic_wide_tga_start_ asm("data_gfx_window_gothic_wide_tga_start_");
extern unsigned char *data_gfx_window_gothic_wide_tga_end_ asm("data_gfx_window_gothic_wide_tga_end_");
static const unsigned char *const data_gfx_window_gothic_wide_tga_start =
    (const unsigned char *const) (char*)&data_gfx_window_gothic_wide_tga_start_;
static const unsigned char *const data_gfx_window_gothic_wide_tga_end   =
    (const unsigned char *const) (char*)&data_gfx_window_gothic_wide_tga_end_;

extern unsigned char *data_levels_1_1_start_ asm("data_levels_1_1_start_");
extern unsigned char *data_levels_1_1_end_ asm("data_levels_1_1_end_");
static const unsigned char *const data_levels_1_1_start =
    (const unsigned char *const) (char*)&data_levels_1_1_start_;
static const unsigned char *const data_levels_1_1_end   =
    (const unsigned char *const) (char*)&data_levels_1_1_end_;

extern unsigned char *data_levels_1_10_start_ asm("data_levels_1_10_start_");
extern unsigned char *data_levels_1_10_end_ asm("data_levels_1_10_end_");
static const unsigned char *const data_levels_1_10_start =
    (const unsigned char *const) (char*)&data_levels_1_10_start_;
static const unsigned char *const data_levels_1_10_end   =
    (const unsigned char *const) (char*)&data_levels_1_10_end_;

extern unsigned char *data_levels_1_2_start_ asm("data_levels_1_2_start_");
extern unsigned char *data_levels_1_2_end_ asm("data_levels_1_2_end_");
static const unsigned char *const data_levels_1_2_start =
    (const unsigned char *const) (char*)&data_levels_1_2_start_;
static const unsigned char *const data_levels_1_2_end   =
    (const unsigned char *const) (char*)&data_levels_1_2_end_;

extern unsigned char *data_levels_1_3_start_ asm("data_levels_1_3_start_");
extern unsigned char *data_levels_1_3_end_ asm("data_levels_1_3_end_");
static const unsigned char *const data_levels_1_3_start =
    (const unsigned char *const) (char*)&data_levels_1_3_start_;
static const unsigned char *const data_levels_1_3_end   =
    (const unsigned char *const) (char*)&data_levels_1_3_end_;

extern unsigned char *data_levels_1_4_start_ asm("data_levels_1_4_start_");
extern unsigned char *data_levels_1_4_end_ asm("data_levels_1_4_end_");
static const unsigned char *const data_levels_1_4_start =
    (const unsigned char *const) (char*)&data_levels_1_4_start_;
static const unsigned char *const data_levels_1_4_end   =
    (const unsigned char *const) (char*)&data_levels_1_4_end_;

extern unsigned char *data_levels_1_5_start_ asm("data_levels_1_5_start_");
extern unsigned char *data_levels_1_5_end_ asm("data_levels_1_5_end_");
static const unsigned char *const data_levels_1_5_start =
    (const unsigned char *const) (char*)&data_levels_1_5_start_;
static const unsigned char *const data_levels_1_5_end   =
    (const unsigned char *const) (char*)&data_levels_1_5_end_;

extern unsigned char *data_levels_1_6_start_ asm("data_levels_1_6_start_");
extern unsigned char *data_levels_1_6_end_ asm("data_levels_1_6_end_");
static const unsigned char *const data_levels_1_6_start =
    (const unsigned char *const) (char*)&data_levels_1_6_start_;
static const unsigned char *const data_levels_1_6_end   =
    (const unsigned char *const) (char*)&data_levels_1_6_end_;

extern unsigned char *data_levels_1_7_start_ asm("data_levels_1_7_start_");
extern unsigned char *data_levels_1_7_end_ asm("data_levels_1_7_end_");
static const unsigned char *const data_levels_1_7_start =
    (const unsigned char *const) (char*)&data_levels_1_7_start_;
static const unsigned char *const data_levels_1_7_end   =
    (const unsigned char *const) (char*)&data_levels_1_7_end_;

extern unsigned char *data_levels_1_8_start_ asm("data_levels_1_8_start_");
extern unsigned char *data_levels_1_8_end_ asm("data_levels_1_8_end_");
static const unsigned char *const data_levels_1_8_start =
    (const unsigned char *const) (char*)&data_levels_1_8_start_;
static const unsigned char *const data_levels_1_8_end   =
    (const unsigned char *const) (char*)&data_levels_1_8_end_;

extern unsigned char *data_levels_1_9_start_ asm("data_levels_1_9_start_");
extern unsigned char *data_levels_1_9_end_ asm("data_levels_1_9_end_");
static const unsigned char *const data_levels_1_9_start =
    (const unsigned char *const) (char*)&data_levels_1_9_start_;
static const unsigned char *const data_levels_1_9_end   =
    (const unsigned char *const) (char*)&data_levels_1_9_end_;

extern unsigned char *data_levels_10_1_start_ asm("data_levels_10_1_start_");
extern unsigned char *data_levels_10_1_end_ asm("data_levels_10_1_end_");
static const unsigned char *const data_levels_10_1_start =
    (const unsigned char *const) (char*)&data_levels_10_1_start_;
static const unsigned char *const data_levels_10_1_end   =
    (const unsigned char *const) (char*)&data_levels_10_1_end_;

extern unsigned char *data_levels_10_10_start_ asm("data_levels_10_10_start_");
extern unsigned char *data_levels_10_10_end_ asm("data_levels_10_10_end_");
static const unsigned char *const data_levels_10_10_start =
    (const unsigned char *const) (char*)&data_levels_10_10_start_;
static const unsigned char *const data_levels_10_10_end   =
    (const unsigned char *const) (char*)&data_levels_10_10_end_;

extern unsigned char *data_levels_10_2_start_ asm("data_levels_10_2_start_");
extern unsigned char *data_levels_10_2_end_ asm("data_levels_10_2_end_");
static const unsigned char *const data_levels_10_2_start =
    (const unsigned char *const) (char*)&data_levels_10_2_start_;
static const unsigned char *const data_levels_10_2_end   =
    (const unsigned char *const) (char*)&data_levels_10_2_end_;

extern unsigned char *data_levels_10_3_start_ asm("data_levels_10_3_start_");
extern unsigned char *data_levels_10_3_end_ asm("data_levels_10_3_end_");
static const unsigned char *const data_levels_10_3_start =
    (const unsigned char *const) (char*)&data_levels_10_3_start_;
static const unsigned char *const data_levels_10_3_end   =
    (const unsigned char *const) (char*)&data_levels_10_3_end_;

extern unsigned char *data_levels_10_4_start_ asm("data_levels_10_4_start_");
extern unsigned char *data_levels_10_4_end_ asm("data_levels_10_4_end_");
static const unsigned char *const data_levels_10_4_start =
    (const unsigned char *const) (char*)&data_levels_10_4_start_;
static const unsigned char *const data_levels_10_4_end   =
    (const unsigned char *const) (char*)&data_levels_10_4_end_;

extern unsigned char *data_levels_10_5_start_ asm("data_levels_10_5_start_");
extern unsigned char *data_levels_10_5_end_ asm("data_levels_10_5_end_");
static const unsigned char *const data_levels_10_5_start =
    (const unsigned char *const) (char*)&data_levels_10_5_start_;
static const unsigned char *const data_levels_10_5_end   =
    (const unsigned char *const) (char*)&data_levels_10_5_end_;

extern unsigned char *data_levels_10_6_start_ asm("data_levels_10_6_start_");
extern unsigned char *data_levels_10_6_end_ asm("data_levels_10_6_end_");
static const unsigned char *const data_levels_10_6_start =
    (const unsigned char *const) (char*)&data_levels_10_6_start_;
static const unsigned char *const data_levels_10_6_end   =
    (const unsigned char *const) (char*)&data_levels_10_6_end_;

extern unsigned char *data_levels_10_7_start_ asm("data_levels_10_7_start_");
extern unsigned char *data_levels_10_7_end_ asm("data_levels_10_7_end_");
static const unsigned char *const data_levels_10_7_start =
    (const unsigned char *const) (char*)&data_levels_10_7_start_;
static const unsigned char *const data_levels_10_7_end   =
    (const unsigned char *const) (char*)&data_levels_10_7_end_;

extern unsigned char *data_levels_10_8_start_ asm("data_levels_10_8_start_");
extern unsigned char *data_levels_10_8_end_ asm("data_levels_10_8_end_");
static const unsigned char *const data_levels_10_8_start =
    (const unsigned char *const) (char*)&data_levels_10_8_start_;
static const unsigned char *const data_levels_10_8_end   =
    (const unsigned char *const) (char*)&data_levels_10_8_end_;

extern unsigned char *data_levels_10_9_start_ asm("data_levels_10_9_start_");
extern unsigned char *data_levels_10_9_end_ asm("data_levels_10_9_end_");
static const unsigned char *const data_levels_10_9_start =
    (const unsigned char *const) (char*)&data_levels_10_9_start_;
static const unsigned char *const data_levels_10_9_end   =
    (const unsigned char *const) (char*)&data_levels_10_9_end_;

extern unsigned char *data_levels_2_1_start_ asm("data_levels_2_1_start_");
extern unsigned char *data_levels_2_1_end_ asm("data_levels_2_1_end_");
static const unsigned char *const data_levels_2_1_start =
    (const unsigned char *const) (char*)&data_levels_2_1_start_;
static const unsigned char *const data_levels_2_1_end   =
    (const unsigned char *const) (char*)&data_levels_2_1_end_;

extern unsigned char *data_levels_2_10_start_ asm("data_levels_2_10_start_");
extern unsigned char *data_levels_2_10_end_ asm("data_levels_2_10_end_");
static const unsigned char *const data_levels_2_10_start =
    (const unsigned char *const) (char*)&data_levels_2_10_start_;
static const unsigned char *const data_levels_2_10_end   =
    (const unsigned char *const) (char*)&data_levels_2_10_end_;

extern unsigned char *data_levels_2_2_start_ asm("data_levels_2_2_start_");
extern unsigned char *data_levels_2_2_end_ asm("data_levels_2_2_end_");
static const unsigned char *const data_levels_2_2_start =
    (const unsigned char *const) (char*)&data_levels_2_2_start_;
static const unsigned char *const data_levels_2_2_end   =
    (const unsigned char *const) (char*)&data_levels_2_2_end_;

extern unsigned char *data_levels_2_3_start_ asm("data_levels_2_3_start_");
extern unsigned char *data_levels_2_3_end_ asm("data_levels_2_3_end_");
static const unsigned char *const data_levels_2_3_start =
    (const unsigned char *const) (char*)&data_levels_2_3_start_;
static const unsigned char *const data_levels_2_3_end   =
    (const unsigned char *const) (char*)&data_levels_2_3_end_;

extern unsigned char *data_levels_2_4_start_ asm("data_levels_2_4_start_");
extern unsigned char *data_levels_2_4_end_ asm("data_levels_2_4_end_");
static const unsigned char *const data_levels_2_4_start =
    (const unsigned char *const) (char*)&data_levels_2_4_start_;
static const unsigned char *const data_levels_2_4_end   =
    (const unsigned char *const) (char*)&data_levels_2_4_end_;

extern unsigned char *data_levels_2_5_start_ asm("data_levels_2_5_start_");
extern unsigned char *data_levels_2_5_end_ asm("data_levels_2_5_end_");
static const unsigned char *const data_levels_2_5_start =
    (const unsigned char *const) (char*)&data_levels_2_5_start_;
static const unsigned char *const data_levels_2_5_end   =
    (const unsigned char *const) (char*)&data_levels_2_5_end_;

extern unsigned char *data_levels_2_6_start_ asm("data_levels_2_6_start_");
extern unsigned char *data_levels_2_6_end_ asm("data_levels_2_6_end_");
static const unsigned char *const data_levels_2_6_start =
    (const unsigned char *const) (char*)&data_levels_2_6_start_;
static const unsigned char *const data_levels_2_6_end   =
    (const unsigned char *const) (char*)&data_levels_2_6_end_;

extern unsigned char *data_levels_2_7_start_ asm("data_levels_2_7_start_");
extern unsigned char *data_levels_2_7_end_ asm("data_levels_2_7_end_");
static const unsigned char *const data_levels_2_7_start =
    (const unsigned char *const) (char*)&data_levels_2_7_start_;
static const unsigned char *const data_levels_2_7_end   =
    (const unsigned char *const) (char*)&data_levels_2_7_end_;

extern unsigned char *data_levels_2_8_start_ asm("data_levels_2_8_start_");
extern unsigned char *data_levels_2_8_end_ asm("data_levels_2_8_end_");
static const unsigned char *const data_levels_2_8_start =
    (const unsigned char *const) (char*)&data_levels_2_8_start_;
static const unsigned char *const data_levels_2_8_end   =
    (const unsigned char *const) (char*)&data_levels_2_8_end_;

extern unsigned char *data_levels_2_9_start_ asm("data_levels_2_9_start_");
extern unsigned char *data_levels_2_9_end_ asm("data_levels_2_9_end_");
static const unsigned char *const data_levels_2_9_start =
    (const unsigned char *const) (char*)&data_levels_2_9_start_;
static const unsigned char *const data_levels_2_9_end   =
    (const unsigned char *const) (char*)&data_levels_2_9_end_;

extern unsigned char *data_levels_3_1_start_ asm("data_levels_3_1_start_");
extern unsigned char *data_levels_3_1_end_ asm("data_levels_3_1_end_");
static const unsigned char *const data_levels_3_1_start =
    (const unsigned char *const) (char*)&data_levels_3_1_start_;
static const unsigned char *const data_levels_3_1_end   =
    (const unsigned char *const) (char*)&data_levels_3_1_end_;

extern unsigned char *data_levels_3_10_start_ asm("data_levels_3_10_start_");
extern unsigned char *data_levels_3_10_end_ asm("data_levels_3_10_end_");
static const unsigned char *const data_levels_3_10_start =
    (const unsigned char *const) (char*)&data_levels_3_10_start_;
static const unsigned char *const data_levels_3_10_end   =
    (const unsigned char *const) (char*)&data_levels_3_10_end_;

extern unsigned char *data_levels_3_2_start_ asm("data_levels_3_2_start_");
extern unsigned char *data_levels_3_2_end_ asm("data_levels_3_2_end_");
static const unsigned char *const data_levels_3_2_start =
    (const unsigned char *const) (char*)&data_levels_3_2_start_;
static const unsigned char *const data_levels_3_2_end   =
    (const unsigned char *const) (char*)&data_levels_3_2_end_;

extern unsigned char *data_levels_3_3_start_ asm("data_levels_3_3_start_");
extern unsigned char *data_levels_3_3_end_ asm("data_levels_3_3_end_");
static const unsigned char *const data_levels_3_3_start =
    (const unsigned char *const) (char*)&data_levels_3_3_start_;
static const unsigned char *const data_levels_3_3_end   =
    (const unsigned char *const) (char*)&data_levels_3_3_end_;

extern unsigned char *data_levels_3_4_start_ asm("data_levels_3_4_start_");
extern unsigned char *data_levels_3_4_end_ asm("data_levels_3_4_end_");
static const unsigned char *const data_levels_3_4_start =
    (const unsigned char *const) (char*)&data_levels_3_4_start_;
static const unsigned char *const data_levels_3_4_end   =
    (const unsigned char *const) (char*)&data_levels_3_4_end_;

extern unsigned char *data_levels_3_5_start_ asm("data_levels_3_5_start_");
extern unsigned char *data_levels_3_5_end_ asm("data_levels_3_5_end_");
static const unsigned char *const data_levels_3_5_start =
    (const unsigned char *const) (char*)&data_levels_3_5_start_;
static const unsigned char *const data_levels_3_5_end   =
    (const unsigned char *const) (char*)&data_levels_3_5_end_;

extern unsigned char *data_levels_3_6_start_ asm("data_levels_3_6_start_");
extern unsigned char *data_levels_3_6_end_ asm("data_levels_3_6_end_");
static const unsigned char *const data_levels_3_6_start =
    (const unsigned char *const) (char*)&data_levels_3_6_start_;
static const unsigned char *const data_levels_3_6_end   =
    (const unsigned char *const) (char*)&data_levels_3_6_end_;

extern unsigned char *data_levels_3_7_start_ asm("data_levels_3_7_start_");
extern unsigned char *data_levels_3_7_end_ asm("data_levels_3_7_end_");
static const unsigned char *const data_levels_3_7_start =
    (const unsigned char *const) (char*)&data_levels_3_7_start_;
static const unsigned char *const data_levels_3_7_end   =
    (const unsigned char *const) (char*)&data_levels_3_7_end_;

extern unsigned char *data_levels_3_8_start_ asm("data_levels_3_8_start_");
extern unsigned char *data_levels_3_8_end_ asm("data_levels_3_8_end_");
static const unsigned char *const data_levels_3_8_start =
    (const unsigned char *const) (char*)&data_levels_3_8_start_;
static const unsigned char *const data_levels_3_8_end   =
    (const unsigned char *const) (char*)&data_levels_3_8_end_;

extern unsigned char *data_levels_3_9_start_ asm("data_levels_3_9_start_");
extern unsigned char *data_levels_3_9_end_ asm("data_levels_3_9_end_");
static const unsigned char *const data_levels_3_9_start =
    (const unsigned char *const) (char*)&data_levels_3_9_start_;
static const unsigned char *const data_levels_3_9_end   =
    (const unsigned char *const) (char*)&data_levels_3_9_end_;

extern unsigned char *data_levels_4_1_start_ asm("data_levels_4_1_start_");
extern unsigned char *data_levels_4_1_end_ asm("data_levels_4_1_end_");
static const unsigned char *const data_levels_4_1_start =
    (const unsigned char *const) (char*)&data_levels_4_1_start_;
static const unsigned char *const data_levels_4_1_end   =
    (const unsigned char *const) (char*)&data_levels_4_1_end_;

extern unsigned char *data_levels_4_10_start_ asm("data_levels_4_10_start_");
extern unsigned char *data_levels_4_10_end_ asm("data_levels_4_10_end_");
static const unsigned char *const data_levels_4_10_start =
    (const unsigned char *const) (char*)&data_levels_4_10_start_;
static const unsigned char *const data_levels_4_10_end   =
    (const unsigned char *const) (char*)&data_levels_4_10_end_;

extern unsigned char *data_levels_4_2_start_ asm("data_levels_4_2_start_");
extern unsigned char *data_levels_4_2_end_ asm("data_levels_4_2_end_");
static const unsigned char *const data_levels_4_2_start =
    (const unsigned char *const) (char*)&data_levels_4_2_start_;
static const unsigned char *const data_levels_4_2_end   =
    (const unsigned char *const) (char*)&data_levels_4_2_end_;

extern unsigned char *data_levels_4_3_start_ asm("data_levels_4_3_start_");
extern unsigned char *data_levels_4_3_end_ asm("data_levels_4_3_end_");
static const unsigned char *const data_levels_4_3_start =
    (const unsigned char *const) (char*)&data_levels_4_3_start_;
static const unsigned char *const data_levels_4_3_end   =
    (const unsigned char *const) (char*)&data_levels_4_3_end_;

extern unsigned char *data_levels_4_4_start_ asm("data_levels_4_4_start_");
extern unsigned char *data_levels_4_4_end_ asm("data_levels_4_4_end_");
static const unsigned char *const data_levels_4_4_start =
    (const unsigned char *const) (char*)&data_levels_4_4_start_;
static const unsigned char *const data_levels_4_4_end   =
    (const unsigned char *const) (char*)&data_levels_4_4_end_;

extern unsigned char *data_levels_4_5_start_ asm("data_levels_4_5_start_");
extern unsigned char *data_levels_4_5_end_ asm("data_levels_4_5_end_");
static const unsigned char *const data_levels_4_5_start =
    (const unsigned char *const) (char*)&data_levels_4_5_start_;
static const unsigned char *const data_levels_4_5_end   =
    (const unsigned char *const) (char*)&data_levels_4_5_end_;

extern unsigned char *data_levels_4_6_start_ asm("data_levels_4_6_start_");
extern unsigned char *data_levels_4_6_end_ asm("data_levels_4_6_end_");
static const unsigned char *const data_levels_4_6_start =
    (const unsigned char *const) (char*)&data_levels_4_6_start_;
static const unsigned char *const data_levels_4_6_end   =
    (const unsigned char *const) (char*)&data_levels_4_6_end_;

extern unsigned char *data_levels_4_7_start_ asm("data_levels_4_7_start_");
extern unsigned char *data_levels_4_7_end_ asm("data_levels_4_7_end_");
static const unsigned char *const data_levels_4_7_start =
    (const unsigned char *const) (char*)&data_levels_4_7_start_;
static const unsigned char *const data_levels_4_7_end   =
    (const unsigned char *const) (char*)&data_levels_4_7_end_;

extern unsigned char *data_levels_4_8_start_ asm("data_levels_4_8_start_");
extern unsigned char *data_levels_4_8_end_ asm("data_levels_4_8_end_");
static const unsigned char *const data_levels_4_8_start =
    (const unsigned char *const) (char*)&data_levels_4_8_start_;
static const unsigned char *const data_levels_4_8_end   =
    (const unsigned char *const) (char*)&data_levels_4_8_end_;

extern unsigned char *data_levels_4_9_start_ asm("data_levels_4_9_start_");
extern unsigned char *data_levels_4_9_end_ asm("data_levels_4_9_end_");
static const unsigned char *const data_levels_4_9_start =
    (const unsigned char *const) (char*)&data_levels_4_9_start_;
static const unsigned char *const data_levels_4_9_end   =
    (const unsigned char *const) (char*)&data_levels_4_9_end_;

extern unsigned char *data_levels_5_1_start_ asm("data_levels_5_1_start_");
extern unsigned char *data_levels_5_1_end_ asm("data_levels_5_1_end_");
static const unsigned char *const data_levels_5_1_start =
    (const unsigned char *const) (char*)&data_levels_5_1_start_;
static const unsigned char *const data_levels_5_1_end   =
    (const unsigned char *const) (char*)&data_levels_5_1_end_;

extern unsigned char *data_levels_5_10_start_ asm("data_levels_5_10_start_");
extern unsigned char *data_levels_5_10_end_ asm("data_levels_5_10_end_");
static const unsigned char *const data_levels_5_10_start =
    (const unsigned char *const) (char*)&data_levels_5_10_start_;
static const unsigned char *const data_levels_5_10_end   =
    (const unsigned char *const) (char*)&data_levels_5_10_end_;

extern unsigned char *data_levels_5_2_start_ asm("data_levels_5_2_start_");
extern unsigned char *data_levels_5_2_end_ asm("data_levels_5_2_end_");
static const unsigned char *const data_levels_5_2_start =
    (const unsigned char *const) (char*)&data_levels_5_2_start_;
static const unsigned char *const data_levels_5_2_end   =
    (const unsigned char *const) (char*)&data_levels_5_2_end_;

extern unsigned char *data_levels_5_3_start_ asm("data_levels_5_3_start_");
extern unsigned char *data_levels_5_3_end_ asm("data_levels_5_3_end_");
static const unsigned char *const data_levels_5_3_start =
    (const unsigned char *const) (char*)&data_levels_5_3_start_;
static const unsigned char *const data_levels_5_3_end   =
    (const unsigned char *const) (char*)&data_levels_5_3_end_;

extern unsigned char *data_levels_5_4_start_ asm("data_levels_5_4_start_");
extern unsigned char *data_levels_5_4_end_ asm("data_levels_5_4_end_");
static const unsigned char *const data_levels_5_4_start =
    (const unsigned char *const) (char*)&data_levels_5_4_start_;
static const unsigned char *const data_levels_5_4_end   =
    (const unsigned char *const) (char*)&data_levels_5_4_end_;

extern unsigned char *data_levels_5_5_start_ asm("data_levels_5_5_start_");
extern unsigned char *data_levels_5_5_end_ asm("data_levels_5_5_end_");
static const unsigned char *const data_levels_5_5_start =
    (const unsigned char *const) (char*)&data_levels_5_5_start_;
static const unsigned char *const data_levels_5_5_end   =
    (const unsigned char *const) (char*)&data_levels_5_5_end_;

extern unsigned char *data_levels_5_6_start_ asm("data_levels_5_6_start_");
extern unsigned char *data_levels_5_6_end_ asm("data_levels_5_6_end_");
static const unsigned char *const data_levels_5_6_start =
    (const unsigned char *const) (char*)&data_levels_5_6_start_;
static const unsigned char *const data_levels_5_6_end   =
    (const unsigned char *const) (char*)&data_levels_5_6_end_;

extern unsigned char *data_levels_5_7_start_ asm("data_levels_5_7_start_");
extern unsigned char *data_levels_5_7_end_ asm("data_levels_5_7_end_");
static const unsigned char *const data_levels_5_7_start =
    (const unsigned char *const) (char*)&data_levels_5_7_start_;
static const unsigned char *const data_levels_5_7_end   =
    (const unsigned char *const) (char*)&data_levels_5_7_end_;

extern unsigned char *data_levels_5_8_start_ asm("data_levels_5_8_start_");
extern unsigned char *data_levels_5_8_end_ asm("data_levels_5_8_end_");
static const unsigned char *const data_levels_5_8_start =
    (const unsigned char *const) (char*)&data_levels_5_8_start_;
static const unsigned char *const data_levels_5_8_end   =
    (const unsigned char *const) (char*)&data_levels_5_8_end_;

extern unsigned char *data_levels_5_9_start_ asm("data_levels_5_9_start_");
extern unsigned char *data_levels_5_9_end_ asm("data_levels_5_9_end_");
static const unsigned char *const data_levels_5_9_start =
    (const unsigned char *const) (char*)&data_levels_5_9_start_;
static const unsigned char *const data_levels_5_9_end   =
    (const unsigned char *const) (char*)&data_levels_5_9_end_;

extern unsigned char *data_levels_6_1_start_ asm("data_levels_6_1_start_");
extern unsigned char *data_levels_6_1_end_ asm("data_levels_6_1_end_");
static const unsigned char *const data_levels_6_1_start =
    (const unsigned char *const) (char*)&data_levels_6_1_start_;
static const unsigned char *const data_levels_6_1_end   =
    (const unsigned char *const) (char*)&data_levels_6_1_end_;

extern unsigned char *data_levels_6_10_start_ asm("data_levels_6_10_start_");
extern unsigned char *data_levels_6_10_end_ asm("data_levels_6_10_end_");
static const unsigned char *const data_levels_6_10_start =
    (const unsigned char *const) (char*)&data_levels_6_10_start_;
static const unsigned char *const data_levels_6_10_end   =
    (const unsigned char *const) (char*)&data_levels_6_10_end_;

extern unsigned char *data_levels_6_2_start_ asm("data_levels_6_2_start_");
extern unsigned char *data_levels_6_2_end_ asm("data_levels_6_2_end_");
static const unsigned char *const data_levels_6_2_start =
    (const unsigned char *const) (char*)&data_levels_6_2_start_;
static const unsigned char *const data_levels_6_2_end   =
    (const unsigned char *const) (char*)&data_levels_6_2_end_;

extern unsigned char *data_levels_6_3_start_ asm("data_levels_6_3_start_");
extern unsigned char *data_levels_6_3_end_ asm("data_levels_6_3_end_");
static const unsigned char *const data_levels_6_3_start =
    (const unsigned char *const) (char*)&data_levels_6_3_start_;
static const unsigned char *const data_levels_6_3_end   =
    (const unsigned char *const) (char*)&data_levels_6_3_end_;

extern unsigned char *data_levels_6_4_start_ asm("data_levels_6_4_start_");
extern unsigned char *data_levels_6_4_end_ asm("data_levels_6_4_end_");
static const unsigned char *const data_levels_6_4_start =
    (const unsigned char *const) (char*)&data_levels_6_4_start_;
static const unsigned char *const data_levels_6_4_end   =
    (const unsigned char *const) (char*)&data_levels_6_4_end_;

extern unsigned char *data_levels_6_5_start_ asm("data_levels_6_5_start_");
extern unsigned char *data_levels_6_5_end_ asm("data_levels_6_5_end_");
static const unsigned char *const data_levels_6_5_start =
    (const unsigned char *const) (char*)&data_levels_6_5_start_;
static const unsigned char *const data_levels_6_5_end   =
    (const unsigned char *const) (char*)&data_levels_6_5_end_;

extern unsigned char *data_levels_6_6_start_ asm("data_levels_6_6_start_");
extern unsigned char *data_levels_6_6_end_ asm("data_levels_6_6_end_");
static const unsigned char *const data_levels_6_6_start =
    (const unsigned char *const) (char*)&data_levels_6_6_start_;
static const unsigned char *const data_levels_6_6_end   =
    (const unsigned char *const) (char*)&data_levels_6_6_end_;

extern unsigned char *data_levels_6_7_start_ asm("data_levels_6_7_start_");
extern unsigned char *data_levels_6_7_end_ asm("data_levels_6_7_end_");
static const unsigned char *const data_levels_6_7_start =
    (const unsigned char *const) (char*)&data_levels_6_7_start_;
static const unsigned char *const data_levels_6_7_end   =
    (const unsigned char *const) (char*)&data_levels_6_7_end_;

extern unsigned char *data_levels_6_8_start_ asm("data_levels_6_8_start_");
extern unsigned char *data_levels_6_8_end_ asm("data_levels_6_8_end_");
static const unsigned char *const data_levels_6_8_start =
    (const unsigned char *const) (char*)&data_levels_6_8_start_;
static const unsigned char *const data_levels_6_8_end   =
    (const unsigned char *const) (char*)&data_levels_6_8_end_;

extern unsigned char *data_levels_6_9_start_ asm("data_levels_6_9_start_");
extern unsigned char *data_levels_6_9_end_ asm("data_levels_6_9_end_");
static const unsigned char *const data_levels_6_9_start =
    (const unsigned char *const) (char*)&data_levels_6_9_start_;
static const unsigned char *const data_levels_6_9_end   =
    (const unsigned char *const) (char*)&data_levels_6_9_end_;

extern unsigned char *data_levels_7_1_start_ asm("data_levels_7_1_start_");
extern unsigned char *data_levels_7_1_end_ asm("data_levels_7_1_end_");
static const unsigned char *const data_levels_7_1_start =
    (const unsigned char *const) (char*)&data_levels_7_1_start_;
static const unsigned char *const data_levels_7_1_end   =
    (const unsigned char *const) (char*)&data_levels_7_1_end_;

extern unsigned char *data_levels_7_10_start_ asm("data_levels_7_10_start_");
extern unsigned char *data_levels_7_10_end_ asm("data_levels_7_10_end_");
static const unsigned char *const data_levels_7_10_start =
    (const unsigned char *const) (char*)&data_levels_7_10_start_;
static const unsigned char *const data_levels_7_10_end   =
    (const unsigned char *const) (char*)&data_levels_7_10_end_;

extern unsigned char *data_levels_7_2_start_ asm("data_levels_7_2_start_");
extern unsigned char *data_levels_7_2_end_ asm("data_levels_7_2_end_");
static const unsigned char *const data_levels_7_2_start =
    (const unsigned char *const) (char*)&data_levels_7_2_start_;
static const unsigned char *const data_levels_7_2_end   =
    (const unsigned char *const) (char*)&data_levels_7_2_end_;

extern unsigned char *data_levels_7_3_start_ asm("data_levels_7_3_start_");
extern unsigned char *data_levels_7_3_end_ asm("data_levels_7_3_end_");
static const unsigned char *const data_levels_7_3_start =
    (const unsigned char *const) (char*)&data_levels_7_3_start_;
static const unsigned char *const data_levels_7_3_end   =
    (const unsigned char *const) (char*)&data_levels_7_3_end_;

extern unsigned char *data_levels_7_4_start_ asm("data_levels_7_4_start_");
extern unsigned char *data_levels_7_4_end_ asm("data_levels_7_4_end_");
static const unsigned char *const data_levels_7_4_start =
    (const unsigned char *const) (char*)&data_levels_7_4_start_;
static const unsigned char *const data_levels_7_4_end   =
    (const unsigned char *const) (char*)&data_levels_7_4_end_;

extern unsigned char *data_levels_7_5_start_ asm("data_levels_7_5_start_");
extern unsigned char *data_levels_7_5_end_ asm("data_levels_7_5_end_");
static const unsigned char *const data_levels_7_5_start =
    (const unsigned char *const) (char*)&data_levels_7_5_start_;
static const unsigned char *const data_levels_7_5_end   =
    (const unsigned char *const) (char*)&data_levels_7_5_end_;

extern unsigned char *data_levels_7_6_start_ asm("data_levels_7_6_start_");
extern unsigned char *data_levels_7_6_end_ asm("data_levels_7_6_end_");
static const unsigned char *const data_levels_7_6_start =
    (const unsigned char *const) (char*)&data_levels_7_6_start_;
static const unsigned char *const data_levels_7_6_end   =
    (const unsigned char *const) (char*)&data_levels_7_6_end_;

extern unsigned char *data_levels_7_7_start_ asm("data_levels_7_7_start_");
extern unsigned char *data_levels_7_7_end_ asm("data_levels_7_7_end_");
static const unsigned char *const data_levels_7_7_start =
    (const unsigned char *const) (char*)&data_levels_7_7_start_;
static const unsigned char *const data_levels_7_7_end   =
    (const unsigned char *const) (char*)&data_levels_7_7_end_;

extern unsigned char *data_levels_7_8_start_ asm("data_levels_7_8_start_");
extern unsigned char *data_levels_7_8_end_ asm("data_levels_7_8_end_");
static const unsigned char *const data_levels_7_8_start =
    (const unsigned char *const) (char*)&data_levels_7_8_start_;
static const unsigned char *const data_levels_7_8_end   =
    (const unsigned char *const) (char*)&data_levels_7_8_end_;

extern unsigned char *data_levels_7_9_start_ asm("data_levels_7_9_start_");
extern unsigned char *data_levels_7_9_end_ asm("data_levels_7_9_end_");
static const unsigned char *const data_levels_7_9_start =
    (const unsigned char *const) (char*)&data_levels_7_9_start_;
static const unsigned char *const data_levels_7_9_end   =
    (const unsigned char *const) (char*)&data_levels_7_9_end_;

extern unsigned char *data_levels_8_1_start_ asm("data_levels_8_1_start_");
extern unsigned char *data_levels_8_1_end_ asm("data_levels_8_1_end_");
static const unsigned char *const data_levels_8_1_start =
    (const unsigned char *const) (char*)&data_levels_8_1_start_;
static const unsigned char *const data_levels_8_1_end   =
    (const unsigned char *const) (char*)&data_levels_8_1_end_;

extern unsigned char *data_levels_8_10_start_ asm("data_levels_8_10_start_");
extern unsigned char *data_levels_8_10_end_ asm("data_levels_8_10_end_");
static const unsigned char *const data_levels_8_10_start =
    (const unsigned char *const) (char*)&data_levels_8_10_start_;
static const unsigned char *const data_levels_8_10_end   =
    (const unsigned char *const) (char*)&data_levels_8_10_end_;

extern unsigned char *data_levels_8_2_start_ asm("data_levels_8_2_start_");
extern unsigned char *data_levels_8_2_end_ asm("data_levels_8_2_end_");
static const unsigned char *const data_levels_8_2_start =
    (const unsigned char *const) (char*)&data_levels_8_2_start_;
static const unsigned char *const data_levels_8_2_end   =
    (const unsigned char *const) (char*)&data_levels_8_2_end_;

extern unsigned char *data_levels_8_3_start_ asm("data_levels_8_3_start_");
extern unsigned char *data_levels_8_3_end_ asm("data_levels_8_3_end_");
static const unsigned char *const data_levels_8_3_start =
    (const unsigned char *const) (char*)&data_levels_8_3_start_;
static const unsigned char *const data_levels_8_3_end   =
    (const unsigned char *const) (char*)&data_levels_8_3_end_;

extern unsigned char *data_levels_8_4_start_ asm("data_levels_8_4_start_");
extern unsigned char *data_levels_8_4_end_ asm("data_levels_8_4_end_");
static const unsigned char *const data_levels_8_4_start =
    (const unsigned char *const) (char*)&data_levels_8_4_start_;
static const unsigned char *const data_levels_8_4_end   =
    (const unsigned char *const) (char*)&data_levels_8_4_end_;

extern unsigned char *data_levels_8_5_start_ asm("data_levels_8_5_start_");
extern unsigned char *data_levels_8_5_end_ asm("data_levels_8_5_end_");
static const unsigned char *const data_levels_8_5_start =
    (const unsigned char *const) (char*)&data_levels_8_5_start_;
static const unsigned char *const data_levels_8_5_end   =
    (const unsigned char *const) (char*)&data_levels_8_5_end_;

extern unsigned char *data_levels_8_6_start_ asm("data_levels_8_6_start_");
extern unsigned char *data_levels_8_6_end_ asm("data_levels_8_6_end_");
static const unsigned char *const data_levels_8_6_start =
    (const unsigned char *const) (char*)&data_levels_8_6_start_;
static const unsigned char *const data_levels_8_6_end   =
    (const unsigned char *const) (char*)&data_levels_8_6_end_;

extern unsigned char *data_levels_8_7_start_ asm("data_levels_8_7_start_");
extern unsigned char *data_levels_8_7_end_ asm("data_levels_8_7_end_");
static const unsigned char *const data_levels_8_7_start =
    (const unsigned char *const) (char*)&data_levels_8_7_start_;
static const unsigned char *const data_levels_8_7_end   =
    (const unsigned char *const) (char*)&data_levels_8_7_end_;

extern unsigned char *data_levels_8_8_start_ asm("data_levels_8_8_start_");
extern unsigned char *data_levels_8_8_end_ asm("data_levels_8_8_end_");
static const unsigned char *const data_levels_8_8_start =
    (const unsigned char *const) (char*)&data_levels_8_8_start_;
static const unsigned char *const data_levels_8_8_end   =
    (const unsigned char *const) (char*)&data_levels_8_8_end_;

extern unsigned char *data_levels_8_9_start_ asm("data_levels_8_9_start_");
extern unsigned char *data_levels_8_9_end_ asm("data_levels_8_9_end_");
static const unsigned char *const data_levels_8_9_start =
    (const unsigned char *const) (char*)&data_levels_8_9_start_;
static const unsigned char *const data_levels_8_9_end   =
    (const unsigned char *const) (char*)&data_levels_8_9_end_;

extern unsigned char *data_levels_9_1_start_ asm("data_levels_9_1_start_");
extern unsigned char *data_levels_9_1_end_ asm("data_levels_9_1_end_");
static const unsigned char *const data_levels_9_1_start =
    (const unsigned char *const) (char*)&data_levels_9_1_start_;
static const unsigned char *const data_levels_9_1_end   =
    (const unsigned char *const) (char*)&data_levels_9_1_end_;

extern unsigned char *data_levels_9_10_start_ asm("data_levels_9_10_start_");
extern unsigned char *data_levels_9_10_end_ asm("data_levels_9_10_end_");
static const unsigned char *const data_levels_9_10_start =
    (const unsigned char *const) (char*)&data_levels_9_10_start_;
static const unsigned char *const data_levels_9_10_end   =
    (const unsigned char *const) (char*)&data_levels_9_10_end_;

extern unsigned char *data_levels_9_2_start_ asm("data_levels_9_2_start_");
extern unsigned char *data_levels_9_2_end_ asm("data_levels_9_2_end_");
static const unsigned char *const data_levels_9_2_start =
    (const unsigned char *const) (char*)&data_levels_9_2_start_;
static const unsigned char *const data_levels_9_2_end   =
    (const unsigned char *const) (char*)&data_levels_9_2_end_;

extern unsigned char *data_levels_9_3_start_ asm("data_levels_9_3_start_");
extern unsigned char *data_levels_9_3_end_ asm("data_levels_9_3_end_");
static const unsigned char *const data_levels_9_3_start =
    (const unsigned char *const) (char*)&data_levels_9_3_start_;
static const unsigned char *const data_levels_9_3_end   =
    (const unsigned char *const) (char*)&data_levels_9_3_end_;

extern unsigned char *data_levels_9_4_start_ asm("data_levels_9_4_start_");
extern unsigned char *data_levels_9_4_end_ asm("data_levels_9_4_end_");
static const unsigned char *const data_levels_9_4_start =
    (const unsigned char *const) (char*)&data_levels_9_4_start_;
static const unsigned char *const data_levels_9_4_end   =
    (const unsigned char *const) (char*)&data_levels_9_4_end_;

extern unsigned char *data_levels_9_5_start_ asm("data_levels_9_5_start_");
extern unsigned char *data_levels_9_5_end_ asm("data_levels_9_5_end_");
static const unsigned char *const data_levels_9_5_start =
    (const unsigned char *const) (char*)&data_levels_9_5_start_;
static const unsigned char *const data_levels_9_5_end   =
    (const unsigned char *const) (char*)&data_levels_9_5_end_;

extern unsigned char *data_levels_9_6_start_ asm("data_levels_9_6_start_");
extern unsigned char *data_levels_9_6_end_ asm("data_levels_9_6_end_");
static const unsigned char *const data_levels_9_6_start =
    (const unsigned char *const) (char*)&data_levels_9_6_start_;
static const unsigned char *const data_levels_9_6_end   =
    (const unsigned char *const) (char*)&data_levels_9_6_end_;

extern unsigned char *data_levels_9_7_start_ asm("data_levels_9_7_start_");
extern unsigned char *data_levels_9_7_end_ asm("data_levels_9_7_end_");
static const unsigned char *const data_levels_9_7_start =
    (const unsigned char *const) (char*)&data_levels_9_7_start_;
static const unsigned char *const data_levels_9_7_end   =
    (const unsigned char *const) (char*)&data_levels_9_7_end_;

extern unsigned char *data_levels_9_8_start_ asm("data_levels_9_8_start_");
extern unsigned char *data_levels_9_8_end_ asm("data_levels_9_8_end_");
static const unsigned char *const data_levels_9_8_start =
    (const unsigned char *const) (char*)&data_levels_9_8_start_;
static const unsigned char *const data_levels_9_8_end   =
    (const unsigned char *const) (char*)&data_levels_9_8_end_;

extern unsigned char *data_levels_9_9_start_ asm("data_levels_9_9_start_");
extern unsigned char *data_levels_9_9_end_ asm("data_levels_9_9_end_");
static const unsigned char *const data_levels_9_9_start =
    (const unsigned char *const) (char*)&data_levels_9_9_start_;
static const unsigned char *const data_levels_9_9_end   =
    (const unsigned char *const) (char*)&data_levels_9_9_end_;

extern unsigned char *data_map_jigsaw_map_start_ asm("data_map_jigsaw_map_start_");
extern unsigned char *data_map_jigsaw_map_end_ asm("data_map_jigsaw_map_end_");
static const unsigned char *const data_map_jigsaw_map_start =
    (const unsigned char *const) (char*)&data_map_jigsaw_map_start_;
static const unsigned char *const data_map_jigsaw_map_end   =
    (const unsigned char *const) (char*)&data_map_jigsaw_map_end_;

extern unsigned char *data_music_DST_Alters_ogg_start_ asm("data_music_DST_Alters_ogg_start_");
extern unsigned char *data_music_DST_Alters_ogg_end_ asm("data_music_DST_Alters_ogg_end_");
static const unsigned char *const data_music_DST_Alters_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Alters_ogg_start_;
static const unsigned char *const data_music_DST_Alters_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Alters_ogg_end_;

extern unsigned char *data_music_DST_AncientCurse_II_ogg_start_ asm("data_music_DST_AncientCurse_II_ogg_start_");
extern unsigned char *data_music_DST_AncientCurse_II_ogg_end_ asm("data_music_DST_AncientCurse_II_ogg_end_");
static const unsigned char *const data_music_DST_AncientCurse_II_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_AncientCurse_II_ogg_start_;
static const unsigned char *const data_music_DST_AncientCurse_II_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_AncientCurse_II_ogg_end_;

extern unsigned char *data_music_DST_Arch_Delerium_ogg_start_ asm("data_music_DST_Arch_Delerium_ogg_start_");
extern unsigned char *data_music_DST_Arch_Delerium_ogg_end_ asm("data_music_DST_Arch_Delerium_ogg_end_");
static const unsigned char *const data_music_DST_Arch_Delerium_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Arch_Delerium_ogg_start_;
static const unsigned char *const data_music_DST_Arch_Delerium_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Arch_Delerium_ogg_end_;

extern unsigned char *data_music_DST_Arches_ogg_start_ asm("data_music_DST_Arches_ogg_start_");
extern unsigned char *data_music_DST_Arches_ogg_end_ asm("data_music_DST_Arches_ogg_end_");
static const unsigned char *const data_music_DST_Arches_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Arches_ogg_start_;
static const unsigned char *const data_music_DST_Arches_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Arches_ogg_end_;

extern unsigned char *data_music_DST_Aronara_ogg_start_ asm("data_music_DST_Aronara_ogg_start_");
extern unsigned char *data_music_DST_Aronara_ogg_end_ asm("data_music_DST_Aronara_ogg_end_");
static const unsigned char *const data_music_DST_Aronara_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Aronara_ogg_start_;
static const unsigned char *const data_music_DST_Aronara_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Aronara_ogg_end_;

extern unsigned char *data_music_DST_BattleLands_ogg_start_ asm("data_music_DST_BattleLands_ogg_start_");
extern unsigned char *data_music_DST_BattleLands_ogg_end_ asm("data_music_DST_BattleLands_ogg_end_");
static const unsigned char *const data_music_DST_BattleLands_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_BattleLands_ogg_start_;
static const unsigned char *const data_music_DST_BattleLands_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_BattleLands_ogg_end_;

extern unsigned char *data_music_DST_Beneathere_ogg_start_ asm("data_music_DST_Beneathere_ogg_start_");
extern unsigned char *data_music_DST_Beneathere_ogg_end_ asm("data_music_DST_Beneathere_ogg_end_");
static const unsigned char *const data_music_DST_Beneathere_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Beneathere_ogg_start_;
static const unsigned char *const data_music_DST_Beneathere_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Beneathere_ogg_end_;

extern unsigned char *data_music_DST_BlackRiver_ogg_start_ asm("data_music_DST_BlackRiver_ogg_start_");
extern unsigned char *data_music_DST_BlackRiver_ogg_end_ asm("data_music_DST_BlackRiver_ogg_end_");
static const unsigned char *const data_music_DST_BlackRiver_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_BlackRiver_ogg_start_;
static const unsigned char *const data_music_DST_BlackRiver_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_BlackRiver_ogg_end_;

extern unsigned char *data_music_DST_BloodAndIron_ogg_start_ asm("data_music_DST_BloodAndIron_ogg_start_");
extern unsigned char *data_music_DST_BloodAndIron_ogg_end_ asm("data_music_DST_BloodAndIron_ogg_end_");
static const unsigned char *const data_music_DST_BloodAndIron_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_BloodAndIron_ogg_start_;
static const unsigned char *const data_music_DST_BloodAndIron_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_BloodAndIron_ogg_end_;

extern unsigned char *data_music_DST_BoneTower_ogg_start_ asm("data_music_DST_BoneTower_ogg_start_");
extern unsigned char *data_music_DST_BoneTower_ogg_end_ asm("data_music_DST_BoneTower_ogg_end_");
static const unsigned char *const data_music_DST_BoneTower_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_BoneTower_ogg_start_;
static const unsigned char *const data_music_DST_BoneTower_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_BoneTower_ogg_end_;

extern unsigned char *data_music_DST_ClockTower_ogg_start_ asm("data_music_DST_ClockTower_ogg_start_");
extern unsigned char *data_music_DST_ClockTower_ogg_end_ asm("data_music_DST_ClockTower_ogg_end_");
static const unsigned char *const data_music_DST_ClockTower_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_ClockTower_ogg_start_;
static const unsigned char *const data_music_DST_ClockTower_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_ClockTower_ogg_end_;

extern unsigned char *data_music_DST_DarkDance_ogg_start_ asm("data_music_DST_DarkDance_ogg_start_");
extern unsigned char *data_music_DST_DarkDance_ogg_end_ asm("data_music_DST_DarkDance_ogg_end_");
static const unsigned char *const data_music_DST_DarkDance_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_DarkDance_ogg_start_;
static const unsigned char *const data_music_DST_DarkDance_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_DarkDance_ogg_end_;

extern unsigned char *data_music_DST_Darkening_ogg_start_ asm("data_music_DST_Darkening_ogg_start_");
extern unsigned char *data_music_DST_Darkening_ogg_end_ asm("data_music_DST_Darkening_ogg_end_");
static const unsigned char *const data_music_DST_Darkening_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Darkening_ogg_start_;
static const unsigned char *const data_music_DST_Darkening_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Darkening_ogg_end_;

extern unsigned char *data_music_DST_DarkestKnight_ogg_start_ asm("data_music_DST_DarkestKnight_ogg_start_");
extern unsigned char *data_music_DST_DarkestKnight_ogg_end_ asm("data_music_DST_DarkestKnight_ogg_end_");
static const unsigned char *const data_music_DST_DarkestKnight_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_DarkestKnight_ogg_start_;
static const unsigned char *const data_music_DST_DarkestKnight_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_DarkestKnight_ogg_end_;

extern unsigned char *data_music_DST_DoomCity_ogg_start_ asm("data_music_DST_DoomCity_ogg_start_");
extern unsigned char *data_music_DST_DoomCity_ogg_end_ asm("data_music_DST_DoomCity_ogg_end_");
static const unsigned char *const data_music_DST_DoomCity_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_DoomCity_ogg_start_;
static const unsigned char *const data_music_DST_DoomCity_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_DoomCity_ogg_end_;

extern unsigned char *data_music_DST_ExInfernus_ogg_start_ asm("data_music_DST_ExInfernus_ogg_start_");
extern unsigned char *data_music_DST_ExInfernus_ogg_end_ asm("data_music_DST_ExInfernus_ogg_end_");
static const unsigned char *const data_music_DST_ExInfernus_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_ExInfernus_ogg_start_;
static const unsigned char *const data_music_DST_ExInfernus_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_ExInfernus_ogg_end_;

extern unsigned char *data_music_DST_GhostHouse_ogg_start_ asm("data_music_DST_GhostHouse_ogg_start_");
extern unsigned char *data_music_DST_GhostHouse_ogg_end_ asm("data_music_DST_GhostHouse_ogg_end_");
static const unsigned char *const data_music_DST_GhostHouse_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_GhostHouse_ogg_start_;
static const unsigned char *const data_music_DST_GhostHouse_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_GhostHouse_ogg_end_;

extern unsigned char *data_music_DST_H2O_ogg_start_ asm("data_music_DST_H2O_ogg_start_");
extern unsigned char *data_music_DST_H2O_ogg_end_ asm("data_music_DST_H2O_ogg_end_");
static const unsigned char *const data_music_DST_H2O_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_H2O_ogg_start_;
static const unsigned char *const data_music_DST_H2O_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_H2O_ogg_end_;

extern unsigned char *data_music_DST_LeDanse_ogg_start_ asm("data_music_DST_LeDanse_ogg_start_");
extern unsigned char *data_music_DST_LeDanse_ogg_end_ asm("data_music_DST_LeDanse_ogg_end_");
static const unsigned char *const data_music_DST_LeDanse_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_LeDanse_ogg_start_;
static const unsigned char *const data_music_DST_LeDanse_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_LeDanse_ogg_end_;

extern unsigned char *data_music_DST_Legends_ogg_start_ asm("data_music_DST_Legends_ogg_start_");
extern unsigned char *data_music_DST_Legends_ogg_end_ asm("data_music_DST_Legends_ogg_end_");
static const unsigned char *const data_music_DST_Legends_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Legends_ogg_start_;
static const unsigned char *const data_music_DST_Legends_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Legends_ogg_end_;

extern unsigned char *data_music_DST_MechaSelect_ogg_start_ asm("data_music_DST_MechaSelect_ogg_start_");
extern unsigned char *data_music_DST_MechaSelect_ogg_end_ asm("data_music_DST_MechaSelect_ogg_end_");
static const unsigned char *const data_music_DST_MechaSelect_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_MechaSelect_ogg_start_;
static const unsigned char *const data_music_DST_MechaSelect_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_MechaSelect_ogg_end_;

extern unsigned char *data_music_DST_OldCavern_ogg_start_ asm("data_music_DST_OldCavern_ogg_start_");
extern unsigned char *data_music_DST_OldCavern_ogg_end_ asm("data_music_DST_OldCavern_ogg_end_");
static const unsigned char *const data_music_DST_OldCavern_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_OldCavern_ogg_start_;
static const unsigned char *const data_music_DST_OldCavern_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_OldCavern_ogg_end_;

extern unsigned char *data_music_DST_Ornament_ogg_start_ asm("data_music_DST_Ornament_ogg_start_");
extern unsigned char *data_music_DST_Ornament_ogg_end_ asm("data_music_DST_Ornament_ogg_end_");
static const unsigned char *const data_music_DST_Ornament_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Ornament_ogg_start_;
static const unsigned char *const data_music_DST_Ornament_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Ornament_ogg_end_;

extern unsigned char *data_music_DST_OverlandTheme_ogg_start_ asm("data_music_DST_OverlandTheme_ogg_start_");
extern unsigned char *data_music_DST_OverlandTheme_ogg_end_ asm("data_music_DST_OverlandTheme_ogg_end_");
static const unsigned char *const data_music_DST_OverlandTheme_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_OverlandTheme_ogg_start_;
static const unsigned char *const data_music_DST_OverlandTheme_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_OverlandTheme_ogg_end_;

extern unsigned char *data_music_DST_ReflectingPool_ogg_start_ asm("data_music_DST_ReflectingPool_ogg_start_");
extern unsigned char *data_music_DST_ReflectingPool_ogg_end_ asm("data_music_DST_ReflectingPool_ogg_end_");
static const unsigned char *const data_music_DST_ReflectingPool_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_ReflectingPool_ogg_start_;
static const unsigned char *const data_music_DST_ReflectingPool_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_ReflectingPool_ogg_end_;

extern unsigned char *data_music_DST_Sarcophage_ogg_start_ asm("data_music_DST_Sarcophage_ogg_start_");
extern unsigned char *data_music_DST_Sarcophage_ogg_end_ asm("data_music_DST_Sarcophage_ogg_end_");
static const unsigned char *const data_music_DST_Sarcophage_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_Sarcophage_ogg_start_;
static const unsigned char *const data_music_DST_Sarcophage_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_Sarcophage_ogg_end_;

extern unsigned char *data_music_DST_SnowMode_ogg_start_ asm("data_music_DST_SnowMode_ogg_start_");
extern unsigned char *data_music_DST_SnowMode_ogg_end_ asm("data_music_DST_SnowMode_ogg_end_");
static const unsigned char *const data_music_DST_SnowMode_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_SnowMode_ogg_start_;
static const unsigned char *const data_music_DST_SnowMode_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_SnowMode_ogg_end_;

extern unsigned char *data_music_DST_StarryBook_ogg_start_ asm("data_music_DST_StarryBook_ogg_start_");
extern unsigned char *data_music_DST_StarryBook_ogg_end_ asm("data_music_DST_StarryBook_ogg_end_");
static const unsigned char *const data_music_DST_StarryBook_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_StarryBook_ogg_start_;
static const unsigned char *const data_music_DST_StarryBook_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_StarryBook_ogg_end_;

extern unsigned char *data_music_DST_SuperWin_ogg_start_ asm("data_music_DST_SuperWin_ogg_start_");
extern unsigned char *data_music_DST_SuperWin_ogg_end_ asm("data_music_DST_SuperWin_ogg_end_");
static const unsigned char *const data_music_DST_SuperWin_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_SuperWin_ogg_start_;
static const unsigned char *const data_music_DST_SuperWin_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_SuperWin_ogg_end_;

extern unsigned char *data_music_DST_TheHauntedChapel_ogg_start_ asm("data_music_DST_TheHauntedChapel_ogg_start_");
extern unsigned char *data_music_DST_TheHauntedChapel_ogg_end_ asm("data_music_DST_TheHauntedChapel_ogg_end_");
static const unsigned char *const data_music_DST_TheHauntedChapel_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_TheHauntedChapel_ogg_start_;
static const unsigned char *const data_music_DST_TheHauntedChapel_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_TheHauntedChapel_ogg_end_;

extern unsigned char *data_music_DST_TwoHeaded_ogg_start_ asm("data_music_DST_TwoHeaded_ogg_start_");
extern unsigned char *data_music_DST_TwoHeaded_ogg_end_ asm("data_music_DST_TwoHeaded_ogg_end_");
static const unsigned char *const data_music_DST_TwoHeaded_ogg_start =
    (const unsigned char *const) (char*)&data_music_DST_TwoHeaded_ogg_start_;
static const unsigned char *const data_music_DST_TwoHeaded_ogg_end   =
    (const unsigned char *const) (char*)&data_music_DST_TwoHeaded_ogg_end_;

extern unsigned char *data_music_charlotte_ogg_start_ asm("data_music_charlotte_ogg_start_");
extern unsigned char *data_music_charlotte_ogg_end_ asm("data_music_charlotte_ogg_end_");
static const unsigned char *const data_music_charlotte_ogg_start =
    (const unsigned char *const) (char*)&data_music_charlotte_ogg_start_;
static const unsigned char *const data_music_charlotte_ogg_end   =
    (const unsigned char *const) (char*)&data_music_charlotte_ogg_end_;

extern unsigned char *data_music_charlotte8bit_ogg_start_ asm("data_music_charlotte8bit_ogg_start_");
extern unsigned char *data_music_charlotte8bit_ogg_end_ asm("data_music_charlotte8bit_ogg_end_");
static const unsigned char *const data_music_charlotte8bit_ogg_start =
    (const unsigned char *const) (char*)&data_music_charlotte8bit_ogg_start_;
static const unsigned char *const data_music_charlotte8bit_ogg_end   =
    (const unsigned char *const) (char*)&data_music_charlotte8bit_ogg_end_;

extern unsigned char *data_music_charlotte_slow_ogg_start_ asm("data_music_charlotte_slow_ogg_start_");
extern unsigned char *data_music_charlotte_slow_ogg_end_ asm("data_music_charlotte_slow_ogg_end_");
static const unsigned char *const data_music_charlotte_slow_ogg_start =
    (const unsigned char *const) (char*)&data_music_charlotte_slow_ogg_start_;
static const unsigned char *const data_music_charlotte_slow_ogg_end   =
    (const unsigned char *const) (char*)&data_music_charlotte_slow_ogg_end_;

extern unsigned char *data_music_oggconv_sh_start_ asm("data_music_oggconv_sh_start_");
extern unsigned char *data_music_oggconv_sh_end_ asm("data_music_oggconv_sh_end_");
static const unsigned char *const data_music_oggconv_sh_start =
    (const unsigned char *const) (char*)&data_music_oggconv_sh_start_;
static const unsigned char *const data_music_oggconv_sh_end   =
    (const unsigned char *const) (char*)&data_music_oggconv_sh_end_;

extern unsigned char *data_music_resample_sh_start_ asm("data_music_resample_sh_start_");
extern unsigned char *data_music_resample_sh_end_ asm("data_music_resample_sh_end_");
static const unsigned char *const data_music_resample_sh_start =
    (const unsigned char *const) (char*)&data_music_resample_sh_start_;
static const unsigned char *const data_music_resample_sh_end   =
    (const unsigned char *const) (char*)&data_music_resample_sh_end_;

extern unsigned char *data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_start_ asm("data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_start_");
extern unsigned char *data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_end_ asm("data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_end_");
static const unsigned char *const data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_start =
    (const unsigned char *const) (char*)&data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_start_;
static const unsigned char *const data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_end   =
    (const unsigned char *const) (char*)&data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_end_;

extern unsigned char *data_sound_146733__fins__energy_wav_start_ asm("data_sound_146733__fins__energy_wav_start_");
extern unsigned char *data_sound_146733__fins__energy_wav_end_ asm("data_sound_146733__fins__energy_wav_end_");
static const unsigned char *const data_sound_146733__fins__energy_wav_start =
    (const unsigned char *const) (char*)&data_sound_146733__fins__energy_wav_start_;
static const unsigned char *const data_sound_146733__fins__energy_wav_end   =
    (const unsigned char *const) (char*)&data_sound_146733__fins__energy_wav_end_;

extern unsigned char *data_sound_148975__adam_n__squelch_1_wav_start_ asm("data_sound_148975__adam_n__squelch_1_wav_start_");
extern unsigned char *data_sound_148975__adam_n__squelch_1_wav_end_ asm("data_sound_148975__adam_n__squelch_1_wav_end_");
static const unsigned char *const data_sound_148975__adam_n__squelch_1_wav_start =
    (const unsigned char *const) (char*)&data_sound_148975__adam_n__squelch_1_wav_start_;
static const unsigned char *const data_sound_148975__adam_n__squelch_1_wav_end   =
    (const unsigned char *const) (char*)&data_sound_148975__adam_n__squelch_1_wav_end_;

extern unsigned char *data_sound_170243__beatsbycasper__car_horn_wav_start_ asm("data_sound_170243__beatsbycasper__car_horn_wav_start_");
extern unsigned char *data_sound_170243__beatsbycasper__car_horn_wav_end_ asm("data_sound_170243__beatsbycasper__car_horn_wav_end_");
static const unsigned char *const data_sound_170243__beatsbycasper__car_horn_wav_start =
    (const unsigned char *const) (char*)&data_sound_170243__beatsbycasper__car_horn_wav_start_;
static const unsigned char *const data_sound_170243__beatsbycasper__car_horn_wav_end   =
    (const unsigned char *const) (char*)&data_sound_170243__beatsbycasper__car_horn_wav_end_;

extern unsigned char *data_sound_188363__darkalicenite__grunt_wav_start_ asm("data_sound_188363__darkalicenite__grunt_wav_start_");
extern unsigned char *data_sound_188363__darkalicenite__grunt_wav_end_ asm("data_sound_188363__darkalicenite__grunt_wav_end_");
static const unsigned char *const data_sound_188363__darkalicenite__grunt_wav_start =
    (const unsigned char *const) (char*)&data_sound_188363__darkalicenite__grunt_wav_start_;
static const unsigned char *const data_sound_188363__darkalicenite__grunt_wav_end   =
    (const unsigned char *const) (char*)&data_sound_188363__darkalicenite__grunt_wav_end_;

extern unsigned char *data_sound_188712__oceanictrancer__happy_effect_wav_start_ asm("data_sound_188712__oceanictrancer__happy_effect_wav_start_");
extern unsigned char *data_sound_188712__oceanictrancer__happy_effect_wav_end_ asm("data_sound_188712__oceanictrancer__happy_effect_wav_end_");
static const unsigned char *const data_sound_188712__oceanictrancer__happy_effect_wav_start =
    (const unsigned char *const) (char*)&data_sound_188712__oceanictrancer__happy_effect_wav_start_;
static const unsigned char *const data_sound_188712__oceanictrancer__happy_effect_wav_end   =
    (const unsigned char *const) (char*)&data_sound_188712__oceanictrancer__happy_effect_wav_end_;

extern unsigned char *data_sound_205563__everheat__arrow_wav_start_ asm("data_sound_205563__everheat__arrow_wav_start_");
extern unsigned char *data_sound_205563__everheat__arrow_wav_end_ asm("data_sound_205563__everheat__arrow_wav_end_");
static const unsigned char *const data_sound_205563__everheat__arrow_wav_start =
    (const unsigned char *const) (char*)&data_sound_205563__everheat__arrow_wav_start_;
static const unsigned char *const data_sound_205563__everheat__arrow_wav_end   =
    (const unsigned char *const) (char*)&data_sound_205563__everheat__arrow_wav_end_;

extern unsigned char *data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_start_ asm("data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_start_");
extern unsigned char *data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_end_ asm("data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_end_");
static const unsigned char *const data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_start =
    (const unsigned char *const) (char*)&data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_start_;
static const unsigned char *const data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_end   =
    (const unsigned char *const) (char*)&data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_end_;

extern unsigned char *data_sound_207809__exsomniel__dark_choir_01_wav_start_ asm("data_sound_207809__exsomniel__dark_choir_01_wav_start_");
extern unsigned char *data_sound_207809__exsomniel__dark_choir_01_wav_end_ asm("data_sound_207809__exsomniel__dark_choir_01_wav_end_");
static const unsigned char *const data_sound_207809__exsomniel__dark_choir_01_wav_start =
    (const unsigned char *const) (char*)&data_sound_207809__exsomniel__dark_choir_01_wav_start_;
static const unsigned char *const data_sound_207809__exsomniel__dark_choir_01_wav_end   =
    (const unsigned char *const) (char*)&data_sound_207809__exsomniel__dark_choir_01_wav_end_;

extern unsigned char *data_sound_212764__qubodup__lion_roar_ogg_start_ asm("data_sound_212764__qubodup__lion_roar_ogg_start_");
extern unsigned char *data_sound_212764__qubodup__lion_roar_ogg_end_ asm("data_sound_212764__qubodup__lion_roar_ogg_end_");
static const unsigned char *const data_sound_212764__qubodup__lion_roar_ogg_start =
    (const unsigned char *const) (char*)&data_sound_212764__qubodup__lion_roar_ogg_start_;
static const unsigned char *const data_sound_212764__qubodup__lion_roar_ogg_end   =
    (const unsigned char *const) (char*)&data_sound_212764__qubodup__lion_roar_ogg_end_;

extern unsigned char *data_sound_219566__qubodup__poison_spell_magic_ogg_start_ asm("data_sound_219566__qubodup__poison_spell_magic_ogg_start_");
extern unsigned char *data_sound_219566__qubodup__poison_spell_magic_ogg_end_ asm("data_sound_219566__qubodup__poison_spell_magic_ogg_end_");
static const unsigned char *const data_sound_219566__qubodup__poison_spell_magic_ogg_start =
    (const unsigned char *const) (char*)&data_sound_219566__qubodup__poison_spell_magic_ogg_start_;
static const unsigned char *const data_sound_219566__qubodup__poison_spell_magic_ogg_end   =
    (const unsigned char *const) (char*)&data_sound_219566__qubodup__poison_spell_magic_ogg_end_;

extern unsigned char *data_sound_238855__limetoe__collected_item_wav_start_ asm("data_sound_238855__limetoe__collected_item_wav_start_");
extern unsigned char *data_sound_238855__limetoe__collected_item_wav_end_ asm("data_sound_238855__limetoe__collected_item_wav_end_");
static const unsigned char *const data_sound_238855__limetoe__collected_item_wav_start =
    (const unsigned char *const) (char*)&data_sound_238855__limetoe__collected_item_wav_start_;
static const unsigned char *const data_sound_238855__limetoe__collected_item_wav_end   =
    (const unsigned char *const) (char*)&data_sound_238855__limetoe__collected_item_wav_end_;

extern unsigned char *data_sound_244745__reitanna__egg_crack19_wav_start_ asm("data_sound_244745__reitanna__egg_crack19_wav_start_");
extern unsigned char *data_sound_244745__reitanna__egg_crack19_wav_end_ asm("data_sound_244745__reitanna__egg_crack19_wav_end_");
static const unsigned char *const data_sound_244745__reitanna__egg_crack19_wav_start =
    (const unsigned char *const) (char*)&data_sound_244745__reitanna__egg_crack19_wav_start_;
static const unsigned char *const data_sound_244745__reitanna__egg_crack19_wav_end   =
    (const unsigned char *const) (char*)&data_sound_244745__reitanna__egg_crack19_wav_end_;

extern unsigned char *data_sound_317827__blockfighter298__weapon_pickup_wav_start_ asm("data_sound_317827__blockfighter298__weapon_pickup_wav_start_");
extern unsigned char *data_sound_317827__blockfighter298__weapon_pickup_wav_end_ asm("data_sound_317827__blockfighter298__weapon_pickup_wav_end_");
static const unsigned char *const data_sound_317827__blockfighter298__weapon_pickup_wav_start =
    (const unsigned char *const) (char*)&data_sound_317827__blockfighter298__weapon_pickup_wav_start_;
static const unsigned char *const data_sound_317827__blockfighter298__weapon_pickup_wav_end   =
    (const unsigned char *const) (char*)&data_sound_317827__blockfighter298__weapon_pickup_wav_end_;

extern unsigned char *data_sound_39016__wildweasel__dsfirxpl_wav_start_ asm("data_sound_39016__wildweasel__dsfirxpl_wav_start_");
extern unsigned char *data_sound_39016__wildweasel__dsfirxpl_wav_end_ asm("data_sound_39016__wildweasel__dsfirxpl_wav_end_");
static const unsigned char *const data_sound_39016__wildweasel__dsfirxpl_wav_start =
    (const unsigned char *const) (char*)&data_sound_39016__wildweasel__dsfirxpl_wav_start_;
static const unsigned char *const data_sound_39016__wildweasel__dsfirxpl_wav_end   =
    (const unsigned char *const) (char*)&data_sound_39016__wildweasel__dsfirxpl_wav_end_;

extern unsigned char *data_sound_45137__dj_chronos__dark_church_bell_wav_start_ asm("data_sound_45137__dj_chronos__dark_church_bell_wav_start_");
extern unsigned char *data_sound_45137__dj_chronos__dark_church_bell_wav_end_ asm("data_sound_45137__dj_chronos__dark_church_bell_wav_end_");
static const unsigned char *const data_sound_45137__dj_chronos__dark_church_bell_wav_start =
    (const unsigned char *const) (char*)&data_sound_45137__dj_chronos__dark_church_bell_wav_start_;
static const unsigned char *const data_sound_45137__dj_chronos__dark_church_bell_wav_end   =
    (const unsigned char *const) (char*)&data_sound_45137__dj_chronos__dark_church_bell_wav_end_;

extern unsigned char *data_sound_49676__ejfortin__energy_short_sword_5_wav_start_ asm("data_sound_49676__ejfortin__energy_short_sword_5_wav_start_");
extern unsigned char *data_sound_49676__ejfortin__energy_short_sword_5_wav_end_ asm("data_sound_49676__ejfortin__energy_short_sword_5_wav_end_");
static const unsigned char *const data_sound_49676__ejfortin__energy_short_sword_5_wav_start =
    (const unsigned char *const) (char*)&data_sound_49676__ejfortin__energy_short_sword_5_wav_start_;
static const unsigned char *const data_sound_49676__ejfortin__energy_short_sword_5_wav_end   =
    (const unsigned char *const) (char*)&data_sound_49676__ejfortin__energy_short_sword_5_wav_end_;

extern unsigned char *data_sound_60009__qubodup__swosh_22_ogg_start_ asm("data_sound_60009__qubodup__swosh_22_ogg_start_");
extern unsigned char *data_sound_60009__qubodup__swosh_22_ogg_end_ asm("data_sound_60009__qubodup__swosh_22_ogg_end_");
static const unsigned char *const data_sound_60009__qubodup__swosh_22_ogg_start =
    (const unsigned char *const) (char*)&data_sound_60009__qubodup__swosh_22_ogg_start_;
static const unsigned char *const data_sound_60009__qubodup__swosh_22_ogg_end   =
    (const unsigned char *const) (char*)&data_sound_60009__qubodup__swosh_22_ogg_end_;

extern unsigned char *data_sound_65195__uair01__chamber_choir_chord_o_wav_start_ asm("data_sound_65195__uair01__chamber_choir_chord_o_wav_start_");
extern unsigned char *data_sound_65195__uair01__chamber_choir_chord_o_wav_end_ asm("data_sound_65195__uair01__chamber_choir_chord_o_wav_end_");
static const unsigned char *const data_sound_65195__uair01__chamber_choir_chord_o_wav_start =
    (const unsigned char *const) (char*)&data_sound_65195__uair01__chamber_choir_chord_o_wav_start_;
static const unsigned char *const data_sound_65195__uair01__chamber_choir_chord_o_wav_end   =
    (const unsigned char *const) (char*)&data_sound_65195__uair01__chamber_choir_chord_o_wav_end_;

extern unsigned char *data_sound_82388__robinhood76__01308_man_hit_9_wav_start_ asm("data_sound_82388__robinhood76__01308_man_hit_9_wav_start_");
extern unsigned char *data_sound_82388__robinhood76__01308_man_hit_9_wav_end_ asm("data_sound_82388__robinhood76__01308_man_hit_9_wav_end_");
static const unsigned char *const data_sound_82388__robinhood76__01308_man_hit_9_wav_start =
    (const unsigned char *const) (char*)&data_sound_82388__robinhood76__01308_man_hit_9_wav_start_;
static const unsigned char *const data_sound_82388__robinhood76__01308_man_hit_9_wav_end   =
    (const unsigned char *const) (char*)&data_sound_82388__robinhood76__01308_man_hit_9_wav_end_;

extern unsigned char *data_sound_85568__joelaudio__dragon_roar_wav_start_ asm("data_sound_85568__joelaudio__dragon_roar_wav_start_");
extern unsigned char *data_sound_85568__joelaudio__dragon_roar_wav_end_ asm("data_sound_85568__joelaudio__dragon_roar_wav_end_");
static const unsigned char *const data_sound_85568__joelaudio__dragon_roar_wav_start =
    (const unsigned char *const) (char*)&data_sound_85568__joelaudio__dragon_roar_wav_start_;
static const unsigned char *const data_sound_85568__joelaudio__dragon_roar_wav_end   =
    (const unsigned char *const) (char*)&data_sound_85568__joelaudio__dragon_roar_wav_end_;

extern unsigned char *data_sound_Bite_SoundBible_com_2056759375_wav_start_ asm("data_sound_Bite_SoundBible_com_2056759375_wav_start_");
extern unsigned char *data_sound_Bite_SoundBible_com_2056759375_wav_end_ asm("data_sound_Bite_SoundBible_com_2056759375_wav_end_");
static const unsigned char *const data_sound_Bite_SoundBible_com_2056759375_wav_start =
    (const unsigned char *const) (char*)&data_sound_Bite_SoundBible_com_2056759375_wav_start_;
static const unsigned char *const data_sound_Bite_SoundBible_com_2056759375_wav_end   =
    (const unsigned char *const) (char*)&data_sound_Bite_SoundBible_com_2056759375_wav_end_;

extern unsigned char *data_sound_Door_Latch_002_wav_start_ asm("data_sound_Door_Latch_002_wav_start_");
extern unsigned char *data_sound_Door_Latch_002_wav_end_ asm("data_sound_Door_Latch_002_wav_end_");
static const unsigned char *const data_sound_Door_Latch_002_wav_start =
    (const unsigned char *const) (char*)&data_sound_Door_Latch_002_wav_start_;
static const unsigned char *const data_sound_Door_Latch_002_wav_end   =
    (const unsigned char *const) (char*)&data_sound_Door_Latch_002_wav_end_;

extern unsigned char *data_sound_Electric_Zap_wav_start_ asm("data_sound_Electric_Zap_wav_start_");
extern unsigned char *data_sound_Electric_Zap_wav_end_ asm("data_sound_Electric_Zap_wav_end_");
static const unsigned char *const data_sound_Electric_Zap_wav_start =
    (const unsigned char *const) (char*)&data_sound_Electric_Zap_wav_start_;
static const unsigned char *const data_sound_Electric_Zap_wav_end   =
    (const unsigned char *const) (char*)&data_sound_Electric_Zap_wav_end_;

extern unsigned char *data_sound_Object_Drop_001_wav_start_ asm("data_sound_Object_Drop_001_wav_start_");
extern unsigned char *data_sound_Object_Drop_001_wav_end_ asm("data_sound_Object_Drop_001_wav_end_");
static const unsigned char *const data_sound_Object_Drop_001_wav_start =
    (const unsigned char *const) (char*)&data_sound_Object_Drop_001_wav_start_;
static const unsigned char *const data_sound_Object_Drop_001_wav_end   =
    (const unsigned char *const) (char*)&data_sound_Object_Drop_001_wav_end_;

extern unsigned char *data_sound_Red_Alert_FX_001_wav_start_ asm("data_sound_Red_Alert_FX_001_wav_start_");
extern unsigned char *data_sound_Red_Alert_FX_001_wav_end_ asm("data_sound_Red_Alert_FX_001_wav_end_");
static const unsigned char *const data_sound_Red_Alert_FX_001_wav_start =
    (const unsigned char *const) (char*)&data_sound_Red_Alert_FX_001_wav_start_;
static const unsigned char *const data_sound_Red_Alert_FX_001_wav_end   =
    (const unsigned char *const) (char*)&data_sound_Red_Alert_FX_001_wav_end_;

extern unsigned char *data_sound_bite_SoundBible_com_1625781385_wav_start_ asm("data_sound_bite_SoundBible_com_1625781385_wav_start_");
extern unsigned char *data_sound_bite_SoundBible_com_1625781385_wav_end_ asm("data_sound_bite_SoundBible_com_1625781385_wav_end_");
static const unsigned char *const data_sound_bite_SoundBible_com_1625781385_wav_start =
    (const unsigned char *const) (char*)&data_sound_bite_SoundBible_com_1625781385_wav_start_;
static const unsigned char *const data_sound_bite_SoundBible_com_1625781385_wav_end   =
    (const unsigned char *const) (char*)&data_sound_bite_SoundBible_com_1625781385_wav_end_;

extern unsigned char *data_sound_boom_wav_start_ asm("data_sound_boom_wav_start_");
extern unsigned char *data_sound_boom_wav_end_ asm("data_sound_boom_wav_end_");
static const unsigned char *const data_sound_boom_wav_start =
    (const unsigned char *const) (char*)&data_sound_boom_wav_start_;
static const unsigned char *const data_sound_boom_wav_end   =
    (const unsigned char *const) (char*)&data_sound_boom_wav_end_;

extern unsigned char *data_sound_cash_register_wav_start_ asm("data_sound_cash_register_wav_start_");
extern unsigned char *data_sound_cash_register_wav_end_ asm("data_sound_cash_register_wav_end_");
static const unsigned char *const data_sound_cash_register_wav_start =
    (const unsigned char *const) (char*)&data_sound_cash_register_wav_start_;
static const unsigned char *const data_sound_cash_register_wav_end   =
    (const unsigned char *const) (char*)&data_sound_cash_register_wav_end_;

extern unsigned char *data_sound_cash_register2_wav_start_ asm("data_sound_cash_register2_wav_start_");
extern unsigned char *data_sound_cash_register2_wav_end_ asm("data_sound_cash_register2_wav_end_");
static const unsigned char *const data_sound_cash_register2_wav_start =
    (const unsigned char *const) (char*)&data_sound_cash_register2_wav_start_;
static const unsigned char *const data_sound_cash_register2_wav_end   =
    (const unsigned char *const) (char*)&data_sound_cash_register2_wav_end_;

extern unsigned char *data_sound_click_wav_start_ asm("data_sound_click_wav_start_");
extern unsigned char *data_sound_click_wav_end_ asm("data_sound_click_wav_end_");
static const unsigned char *const data_sound_click_wav_start =
    (const unsigned char *const) (char*)&data_sound_click_wav_start_;
static const unsigned char *const data_sound_click_wav_end   =
    (const unsigned char *const) (char*)&data_sound_click_wav_end_;

extern unsigned char *data_sound_coin_roll_wav_start_ asm("data_sound_coin_roll_wav_start_");
extern unsigned char *data_sound_coin_roll_wav_end_ asm("data_sound_coin_roll_wav_end_");
static const unsigned char *const data_sound_coin_roll_wav_start =
    (const unsigned char *const) (char*)&data_sound_coin_roll_wav_start_;
static const unsigned char *const data_sound_coin_roll_wav_end   =
    (const unsigned char *const) (char*)&data_sound_coin_roll_wav_end_;

extern unsigned char *data_sound_demon_wav_start_ asm("data_sound_demon_wav_start_");
extern unsigned char *data_sound_demon_wav_end_ asm("data_sound_demon_wav_end_");
static const unsigned char *const data_sound_demon_wav_start =
    (const unsigned char *const) (char*)&data_sound_demon_wav_start_;
static const unsigned char *const data_sound_demon_wav_end   =
    (const unsigned char *const) (char*)&data_sound_demon_wav_end_;

extern unsigned char *data_sound_demon_die_wav_start_ asm("data_sound_demon_die_wav_start_");
extern unsigned char *data_sound_demon_die_wav_end_ asm("data_sound_demon_die_wav_end_");
static const unsigned char *const data_sound_demon_die_wav_start =
    (const unsigned char *const) (char*)&data_sound_demon_die_wav_start_;
static const unsigned char *const data_sound_demon_die_wav_end   =
    (const unsigned char *const) (char*)&data_sound_demon_die_wav_end_;

extern unsigned char *data_sound_dinosaur_wav_start_ asm("data_sound_dinosaur_wav_start_");
extern unsigned char *data_sound_dinosaur_wav_end_ asm("data_sound_dinosaur_wav_end_");
static const unsigned char *const data_sound_dinosaur_wav_start =
    (const unsigned char *const) (char*)&data_sound_dinosaur_wav_start_;
static const unsigned char *const data_sound_dinosaur_wav_end   =
    (const unsigned char *const) (char*)&data_sound_dinosaur_wav_end_;

extern unsigned char *data_sound_drop_wav_start_ asm("data_sound_drop_wav_start_");
extern unsigned char *data_sound_drop_wav_end_ asm("data_sound_drop_wav_end_");
static const unsigned char *const data_sound_drop_wav_start =
    (const unsigned char *const) (char*)&data_sound_drop_wav_start_;
static const unsigned char *const data_sound_drop_wav_end   =
    (const unsigned char *const) (char*)&data_sound_drop_wav_end_;

extern unsigned char *data_sound_effect_wav_start_ asm("data_sound_effect_wav_start_");
extern unsigned char *data_sound_effect_wav_end_ asm("data_sound_effect_wav_end_");
static const unsigned char *const data_sound_effect_wav_start =
    (const unsigned char *const) (char*)&data_sound_effect_wav_start_;
static const unsigned char *const data_sound_effect_wav_end   =
    (const unsigned char *const) (char*)&data_sound_effect_wav_end_;

extern unsigned char *data_sound_explosion_wav_start_ asm("data_sound_explosion_wav_start_");
extern unsigned char *data_sound_explosion_wav_end_ asm("data_sound_explosion_wav_end_");
static const unsigned char *const data_sound_explosion_wav_start =
    (const unsigned char *const) (char*)&data_sound_explosion_wav_start_;
static const unsigned char *const data_sound_explosion_wav_end   =
    (const unsigned char *const) (char*)&data_sound_explosion_wav_end_;

extern unsigned char *data_sound_explosion_big_wav_start_ asm("data_sound_explosion_big_wav_start_");
extern unsigned char *data_sound_explosion_big_wav_end_ asm("data_sound_explosion_big_wav_end_");
static const unsigned char *const data_sound_explosion_big_wav_start =
    (const unsigned char *const) (char*)&data_sound_explosion_big_wav_start_;
static const unsigned char *const data_sound_explosion_big_wav_end   =
    (const unsigned char *const) (char*)&data_sound_explosion_big_wav_end_;

extern unsigned char *data_sound_flame_Arrow_SoundBible_com_618067908_wav_start_ asm("data_sound_flame_Arrow_SoundBible_com_618067908_wav_start_");
extern unsigned char *data_sound_flame_Arrow_SoundBible_com_618067908_wav_end_ asm("data_sound_flame_Arrow_SoundBible_com_618067908_wav_end_");
static const unsigned char *const data_sound_flame_Arrow_SoundBible_com_618067908_wav_start =
    (const unsigned char *const) (char*)&data_sound_flame_Arrow_SoundBible_com_618067908_wav_start_;
static const unsigned char *const data_sound_flame_Arrow_SoundBible_com_618067908_wav_end   =
    (const unsigned char *const) (char*)&data_sound_flame_Arrow_SoundBible_com_618067908_wav_end_;

extern unsigned char *data_sound_kick_wav_start_ asm("data_sound_kick_wav_start_");
extern unsigned char *data_sound_kick_wav_end_ asm("data_sound_kick_wav_end_");
static const unsigned char *const data_sound_kick_wav_start =
    (const unsigned char *const) (char*)&data_sound_kick_wav_start_;
static const unsigned char *const data_sound_kick_wav_end   =
    (const unsigned char *const) (char*)&data_sound_kick_wav_end_;

extern unsigned char *data_sound_laugh_wav_start_ asm("data_sound_laugh_wav_start_");
extern unsigned char *data_sound_laugh_wav_end_ asm("data_sound_laugh_wav_end_");
static const unsigned char *const data_sound_laugh_wav_start =
    (const unsigned char *const) (char*)&data_sound_laugh_wav_start_;
static const unsigned char *const data_sound_laugh_wav_end   =
    (const unsigned char *const) (char*)&data_sound_laugh_wav_end_;

extern unsigned char *data_sound_magic_tinkle_wav_start_ asm("data_sound_magic_tinkle_wav_start_");
extern unsigned char *data_sound_magic_tinkle_wav_end_ asm("data_sound_magic_tinkle_wav_end_");
static const unsigned char *const data_sound_magic_tinkle_wav_start =
    (const unsigned char *const) (char*)&data_sound_magic_tinkle_wav_start_;
static const unsigned char *const data_sound_magic_tinkle_wav_end   =
    (const unsigned char *const) (char*)&data_sound_magic_tinkle_wav_end_;

extern unsigned char *data_sound_powerup_wav_start_ asm("data_sound_powerup_wav_start_");
extern unsigned char *data_sound_powerup_wav_end_ asm("data_sound_powerup_wav_end_");
static const unsigned char *const data_sound_powerup_wav_start =
    (const unsigned char *const) (char*)&data_sound_powerup_wav_start_;
static const unsigned char *const data_sound_powerup_wav_end   =
    (const unsigned char *const) (char*)&data_sound_powerup_wav_end_;

extern unsigned char *data_sound_saw_wav_start_ asm("data_sound_saw_wav_start_");
extern unsigned char *data_sound_saw_wav_end_ asm("data_sound_saw_wav_end_");
static const unsigned char *const data_sound_saw_wav_start =
    (const unsigned char *const) (char*)&data_sound_saw_wav_start_;
static const unsigned char *const data_sound_saw_wav_end   =
    (const unsigned char *const) (char*)&data_sound_saw_wav_end_;

extern unsigned char *data_sound_scream_male_wav_start_ asm("data_sound_scream_male_wav_start_");
extern unsigned char *data_sound_scream_male_wav_end_ asm("data_sound_scream_male_wav_end_");
static const unsigned char *const data_sound_scream_male_wav_start =
    (const unsigned char *const) (char*)&data_sound_scream_male_wav_start_;
static const unsigned char *const data_sound_scream_male_wav_end   =
    (const unsigned char *const) (char*)&data_sound_scream_male_wav_end_;

extern unsigned char *data_sound_shotgun_by_ra_the_sun_god_wav_start_ asm("data_sound_shotgun_by_ra_the_sun_god_wav_start_");
extern unsigned char *data_sound_shotgun_by_ra_the_sun_god_wav_end_ asm("data_sound_shotgun_by_ra_the_sun_god_wav_end_");
static const unsigned char *const data_sound_shotgun_by_ra_the_sun_god_wav_start =
    (const unsigned char *const) (char*)&data_sound_shotgun_by_ra_the_sun_god_wav_start_;
static const unsigned char *const data_sound_shotgun_by_ra_the_sun_god_wav_end   =
    (const unsigned char *const) (char*)&data_sound_shotgun_by_ra_the_sun_god_wav_end_;

extern unsigned char *data_sound_shotgun_reload_by_ra_the_sun_god_wav_start_ asm("data_sound_shotgun_reload_by_ra_the_sun_god_wav_start_");
extern unsigned char *data_sound_shotgun_reload_by_ra_the_sun_god_wav_end_ asm("data_sound_shotgun_reload_by_ra_the_sun_god_wav_end_");
static const unsigned char *const data_sound_shotgun_reload_by_ra_the_sun_god_wav_start =
    (const unsigned char *const) (char*)&data_sound_shotgun_reload_by_ra_the_sun_god_wav_start_;
static const unsigned char *const data_sound_shotgun_reload_by_ra_the_sun_god_wav_end   =
    (const unsigned char *const) (char*)&data_sound_shotgun_reload_by_ra_the_sun_god_wav_end_;

extern unsigned char *data_sound_shriek_wav_start_ asm("data_sound_shriek_wav_start_");
extern unsigned char *data_sound_shriek_wav_end_ asm("data_sound_shriek_wav_end_");
static const unsigned char *const data_sound_shriek_wav_start =
    (const unsigned char *const) (char*)&data_sound_shriek_wav_start_;
static const unsigned char *const data_sound_shriek_wav_end   =
    (const unsigned char *const) (char*)&data_sound_shriek_wav_end_;

extern unsigned char *data_sound_slime_wav_start_ asm("data_sound_slime_wav_start_");
extern unsigned char *data_sound_slime_wav_end_ asm("data_sound_slime_wav_end_");
static const unsigned char *const data_sound_slime_wav_start =
    (const unsigned char *const) (char*)&data_sound_slime_wav_start_;
static const unsigned char *const data_sound_slime_wav_end   =
    (const unsigned char *const) (char*)&data_sound_slime_wav_end_;

extern unsigned char *data_sound_small_fireball_SoundBible_com_1381880822_wav_start_ asm("data_sound_small_fireball_SoundBible_com_1381880822_wav_start_");
extern unsigned char *data_sound_small_fireball_SoundBible_com_1381880822_wav_end_ asm("data_sound_small_fireball_SoundBible_com_1381880822_wav_end_");
static const unsigned char *const data_sound_small_fireball_SoundBible_com_1381880822_wav_start =
    (const unsigned char *const) (char*)&data_sound_small_fireball_SoundBible_com_1381880822_wav_start_;
static const unsigned char *const data_sound_small_fireball_SoundBible_com_1381880822_wav_end   =
    (const unsigned char *const) (char*)&data_sound_small_fireball_SoundBible_com_1381880822_wav_end_;

extern unsigned char *data_sound_swoosh_3_SoundBible_com_1573211927_wav_start_ asm("data_sound_swoosh_3_SoundBible_com_1573211927_wav_start_");
extern unsigned char *data_sound_swoosh_3_SoundBible_com_1573211927_wav_end_ asm("data_sound_swoosh_3_SoundBible_com_1573211927_wav_end_");
static const unsigned char *const data_sound_swoosh_3_SoundBible_com_1573211927_wav_start =
    (const unsigned char *const) (char*)&data_sound_swoosh_3_SoundBible_com_1573211927_wav_start_;
static const unsigned char *const data_sound_swoosh_3_SoundBible_com_1573211927_wav_end   =
    (const unsigned char *const) (char*)&data_sound_swoosh_3_SoundBible_com_1573211927_wav_end_;

extern unsigned char *data_sound_swords_collide_sound_explorer_2015600826_wav_start_ asm("data_sound_swords_collide_sound_explorer_2015600826_wav_start_");
extern unsigned char *data_sound_swords_collide_sound_explorer_2015600826_wav_end_ asm("data_sound_swords_collide_sound_explorer_2015600826_wav_end_");
static const unsigned char *const data_sound_swords_collide_sound_explorer_2015600826_wav_start =
    (const unsigned char *const) (char*)&data_sound_swords_collide_sound_explorer_2015600826_wav_start_;
static const unsigned char *const data_sound_swords_collide_sound_explorer_2015600826_wav_end   =
    (const unsigned char *const) (char*)&data_sound_swords_collide_sound_explorer_2015600826_wav_end_;

extern unsigned char *data_sound_teleport_wav_start_ asm("data_sound_teleport_wav_start_");
extern unsigned char *data_sound_teleport_wav_end_ asm("data_sound_teleport_wav_end_");
static const unsigned char *const data_sound_teleport_wav_start =
    (const unsigned char *const) (char*)&data_sound_teleport_wav_start_;
static const unsigned char *const data_sound_teleport_wav_end   =
    (const unsigned char *const) (char*)&data_sound_teleport_wav_end_;

extern unsigned char *data_sound_treasure_wav_start_ asm("data_sound_treasure_wav_start_");
extern unsigned char *data_sound_treasure_wav_end_ asm("data_sound_treasure_wav_end_");
static const unsigned char *const data_sound_treasure_wav_start =
    (const unsigned char *const) (char*)&data_sound_treasure_wav_start_;
static const unsigned char *const data_sound_treasure_wav_end   =
    (const unsigned char *const) (char*)&data_sound_treasure_wav_end_;

extern unsigned char *data_sound_wand_dead_wav_start_ asm("data_sound_wand_dead_wav_start_");
extern unsigned char *data_sound_wand_dead_wav_end_ asm("data_sound_wand_dead_wav_end_");
static const unsigned char *const data_sound_wand_dead_wav_start =
    (const unsigned char *const) (char*)&data_sound_wand_dead_wav_start_;
static const unsigned char *const data_sound_wand_dead_wav_end   =
    (const unsigned char *const) (char*)&data_sound_wand_dead_wav_end_;

extern unsigned char *data_sound_zombie_SoundBible_com_1966938763_wav_start_ asm("data_sound_zombie_SoundBible_com_1966938763_wav_start_");
extern unsigned char *data_sound_zombie_SoundBible_com_1966938763_wav_end_ asm("data_sound_zombie_SoundBible_com_1966938763_wav_end_");
static const unsigned char *const data_sound_zombie_SoundBible_com_1966938763_wav_start =
    (const unsigned char *const) (char*)&data_sound_zombie_SoundBible_com_1966938763_wav_start_;
static const unsigned char *const data_sound_zombie_SoundBible_com_1966938763_wav_end   =
    (const unsigned char *const) (char*)&data_sound_zombie_SoundBible_com_1966938763_wav_end_;

extern unsigned char *data_sound_zombie_in_painSoundBible_com_134322253_wav_start_ asm("data_sound_zombie_in_painSoundBible_com_134322253_wav_start_");
extern unsigned char *data_sound_zombie_in_painSoundBible_com_134322253_wav_end_ asm("data_sound_zombie_in_painSoundBible_com_134322253_wav_end_");
static const unsigned char *const data_sound_zombie_in_painSoundBible_com_134322253_wav_start =
    (const unsigned char *const) (char*)&data_sound_zombie_in_painSoundBible_com_134322253_wav_start_;
static const unsigned char *const data_sound_zombie_in_painSoundBible_com_134322253_wav_end   =
    (const unsigned char *const) (char*)&data_sound_zombie_in_painSoundBible_com_134322253_wav_end_;

extern unsigned char *data_things_acid1_start_ asm("data_things_acid1_start_");
extern unsigned char *data_things_acid1_end_ asm("data_things_acid1_end_");
static const unsigned char *const data_things_acid1_start =
    (const unsigned char *const) (char*)&data_things_acid1_start_;
static const unsigned char *const data_things_acid1_end   =
    (const unsigned char *const) (char*)&data_things_acid1_end_;

extern unsigned char *data_things_action_down_start_ asm("data_things_action_down_start_");
extern unsigned char *data_things_action_down_end_ asm("data_things_action_down_end_");
static const unsigned char *const data_things_action_down_start =
    (const unsigned char *const) (char*)&data_things_action_down_start_;
static const unsigned char *const data_things_action_down_end   =
    (const unsigned char *const) (char*)&data_things_action_down_end_;

extern unsigned char *data_things_action_left_start_ asm("data_things_action_left_start_");
extern unsigned char *data_things_action_left_end_ asm("data_things_action_left_end_");
static const unsigned char *const data_things_action_left_start =
    (const unsigned char *const) (char*)&data_things_action_left_start_;
static const unsigned char *const data_things_action_left_end   =
    (const unsigned char *const) (char*)&data_things_action_left_end_;

extern unsigned char *data_things_action_right_start_ asm("data_things_action_right_start_");
extern unsigned char *data_things_action_right_end_ asm("data_things_action_right_end_");
static const unsigned char *const data_things_action_right_start =
    (const unsigned char *const) (char*)&data_things_action_right_start_;
static const unsigned char *const data_things_action_right_end   =
    (const unsigned char *const) (char*)&data_things_action_right_end_;

extern unsigned char *data_things_action_sleep_start_ asm("data_things_action_sleep_start_");
extern unsigned char *data_things_action_sleep_end_ asm("data_things_action_sleep_end_");
static const unsigned char *const data_things_action_sleep_start =
    (const unsigned char *const) (char*)&data_things_action_sleep_start_;
static const unsigned char *const data_things_action_sleep_end   =
    (const unsigned char *const) (char*)&data_things_action_sleep_end_;

extern unsigned char *data_things_action_text_start_ asm("data_things_action_text_start_");
extern unsigned char *data_things_action_text_end_ asm("data_things_action_text_end_");
static const unsigned char *const data_things_action_text_start =
    (const unsigned char *const) (char*)&data_things_action_text_start_;
static const unsigned char *const data_things_action_text_end   =
    (const unsigned char *const) (char*)&data_things_action_text_end_;

extern unsigned char *data_things_action_trigger_on_hero_start_ asm("data_things_action_trigger_on_hero_start_");
extern unsigned char *data_things_action_trigger_on_hero_end_ asm("data_things_action_trigger_on_hero_end_");
static const unsigned char *const data_things_action_trigger_on_hero_start =
    (const unsigned char *const) (char*)&data_things_action_trigger_on_hero_start_;
static const unsigned char *const data_things_action_trigger_on_hero_end   =
    (const unsigned char *const) (char*)&data_things_action_trigger_on_hero_end_;

extern unsigned char *data_things_action_trigger_on_monst_start_ asm("data_things_action_trigger_on_monst_start_");
extern unsigned char *data_things_action_trigger_on_monst_end_ asm("data_things_action_trigger_on_monst_end_");
static const unsigned char *const data_things_action_trigger_on_monst_start =
    (const unsigned char *const) (char*)&data_things_action_trigger_on_monst_start_;
static const unsigned char *const data_things_action_trigger_on_monst_end   =
    (const unsigned char *const) (char*)&data_things_action_trigger_on_monst_end_;

extern unsigned char *data_things_action_trigger_on_wall_start_ asm("data_things_action_trigger_on_wall_start_");
extern unsigned char *data_things_action_trigger_on_wall_end_ asm("data_things_action_trigger_on_wall_end_");
static const unsigned char *const data_things_action_trigger_on_wall_start =
    (const unsigned char *const) (char*)&data_things_action_trigger_on_wall_start_;
static const unsigned char *const data_things_action_trigger_on_wall_end   =
    (const unsigned char *const) (char*)&data_things_action_trigger_on_wall_end_;

extern unsigned char *data_things_action_up_start_ asm("data_things_action_up_start_");
extern unsigned char *data_things_action_up_end_ asm("data_things_action_up_end_");
static const unsigned char *const data_things_action_up_start =
    (const unsigned char *const) (char*)&data_things_action_up_start_;
static const unsigned char *const data_things_action_up_end   =
    (const unsigned char *const) (char*)&data_things_action_up_end_;

extern unsigned char *data_things_action_zap_start_ asm("data_things_action_zap_start_");
extern unsigned char *data_things_action_zap_end_ asm("data_things_action_zap_end_");
static const unsigned char *const data_things_action_zap_start =
    (const unsigned char *const) (char*)&data_things_action_zap_start_;
static const unsigned char *const data_things_action_zap_end   =
    (const unsigned char *const) (char*)&data_things_action_zap_end_;

extern unsigned char *data_things_all_cheese_start_ asm("data_things_all_cheese_start_");
extern unsigned char *data_things_all_cheese_end_ asm("data_things_all_cheese_end_");
static const unsigned char *const data_things_all_cheese_start =
    (const unsigned char *const) (char*)&data_things_all_cheese_start_;
static const unsigned char *const data_things_all_cheese_end   =
    (const unsigned char *const) (char*)&data_things_all_cheese_end_;

extern unsigned char *data_things_anim_eyes_start_ asm("data_things_anim_eyes_start_");
extern unsigned char *data_things_anim_eyes_end_ asm("data_things_anim_eyes_end_");
static const unsigned char *const data_things_anim_eyes_start =
    (const unsigned char *const) (char*)&data_things_anim_eyes_start_;
static const unsigned char *const data_things_anim_eyes_end   =
    (const unsigned char *const) (char*)&data_things_anim_eyes_end_;

extern unsigned char *data_things_anim_man_start_ asm("data_things_anim_man_start_");
extern unsigned char *data_things_anim_man_end_ asm("data_things_anim_man_end_");
static const unsigned char *const data_things_anim_man_start =
    (const unsigned char *const) (char*)&data_things_anim_man_start_;
static const unsigned char *const data_things_anim_man_end   =
    (const unsigned char *const) (char*)&data_things_anim_man_end_;

extern unsigned char *data_things_anim_treasure_chest_start_ asm("data_things_anim_treasure_chest_start_");
extern unsigned char *data_things_anim_treasure_chest_end_ asm("data_things_anim_treasure_chest_end_");
static const unsigned char *const data_things_anim_treasure_chest_start =
    (const unsigned char *const) (char*)&data_things_anim_treasure_chest_start_;
static const unsigned char *const data_things_anim_treasure_chest_end   =
    (const unsigned char *const) (char*)&data_things_anim_treasure_chest_end_;

extern unsigned char *data_things_apple1_start_ asm("data_things_apple1_start_");
extern unsigned char *data_things_apple1_end_ asm("data_things_apple1_end_");
static const unsigned char *const data_things_apple1_start =
    (const unsigned char *const) (char*)&data_things_apple1_start_;
static const unsigned char *const data_things_apple1_end   =
    (const unsigned char *const) (char*)&data_things_apple1_end_;

extern unsigned char *data_things_apple2_start_ asm("data_things_apple2_start_");
extern unsigned char *data_things_apple2_end_ asm("data_things_apple2_end_");
static const unsigned char *const data_things_apple2_start =
    (const unsigned char *const) (char*)&data_things_apple2_start_;
static const unsigned char *const data_things_apple2_end   =
    (const unsigned char *const) (char*)&data_things_apple2_end_;

extern unsigned char *data_things_armor1_start_ asm("data_things_armor1_start_");
extern unsigned char *data_things_armor1_end_ asm("data_things_armor1_end_");
static const unsigned char *const data_things_armor1_start =
    (const unsigned char *const) (char*)&data_things_armor1_start_;
static const unsigned char *const data_things_armor1_end   =
    (const unsigned char *const) (char*)&data_things_armor1_end_;

extern unsigned char *data_things_armor2_start_ asm("data_things_armor2_start_");
extern unsigned char *data_things_armor2_end_ asm("data_things_armor2_end_");
static const unsigned char *const data_things_armor2_start =
    (const unsigned char *const) (char*)&data_things_armor2_start_;
static const unsigned char *const data_things_armor2_end   =
    (const unsigned char *const) (char*)&data_things_armor2_end_;

extern unsigned char *data_things_armor3_start_ asm("data_things_armor3_start_");
extern unsigned char *data_things_armor3_end_ asm("data_things_armor3_end_");
static const unsigned char *const data_things_armor3_start =
    (const unsigned char *const) (char*)&data_things_armor3_start_;
static const unsigned char *const data_things_armor3_end   =
    (const unsigned char *const) (char*)&data_things_armor3_end_;

extern unsigned char *data_things_armor4_start_ asm("data_things_armor4_start_");
extern unsigned char *data_things_armor4_end_ asm("data_things_armor4_end_");
static const unsigned char *const data_things_armor4_start =
    (const unsigned char *const) (char*)&data_things_armor4_start_;
static const unsigned char *const data_things_armor4_end   =
    (const unsigned char *const) (char*)&data_things_armor4_end_;

extern unsigned char *data_things_arrow_start_ asm("data_things_arrow_start_");
extern unsigned char *data_things_arrow_end_ asm("data_things_arrow_end_");
static const unsigned char *const data_things_arrow_start =
    (const unsigned char *const) (char*)&data_things_arrow_start_;
static const unsigned char *const data_things_arrow_end   =
    (const unsigned char *const) (char*)&data_things_arrow_end_;

extern unsigned char *data_things_axe1_start_ asm("data_things_axe1_start_");
extern unsigned char *data_things_axe1_end_ asm("data_things_axe1_end_");
static const unsigned char *const data_things_axe1_start =
    (const unsigned char *const) (char*)&data_things_axe1_start_;
static const unsigned char *const data_things_axe1_end   =
    (const unsigned char *const) (char*)&data_things_axe1_end_;

extern unsigned char *data_things_axe1_anim_start_ asm("data_things_axe1_anim_start_");
extern unsigned char *data_things_axe1_anim_end_ asm("data_things_axe1_anim_end_");
static const unsigned char *const data_things_axe1_anim_start =
    (const unsigned char *const) (char*)&data_things_axe1_anim_start_;
static const unsigned char *const data_things_axe1_anim_end   =
    (const unsigned char *const) (char*)&data_things_axe1_anim_end_;

extern unsigned char *data_things_axe2_start_ asm("data_things_axe2_start_");
extern unsigned char *data_things_axe2_end_ asm("data_things_axe2_end_");
static const unsigned char *const data_things_axe2_start =
    (const unsigned char *const) (char*)&data_things_axe2_start_;
static const unsigned char *const data_things_axe2_end   =
    (const unsigned char *const) (char*)&data_things_axe2_end_;

extern unsigned char *data_things_axe2_anim_start_ asm("data_things_axe2_anim_start_");
extern unsigned char *data_things_axe2_anim_end_ asm("data_things_axe2_anim_end_");
static const unsigned char *const data_things_axe2_anim_start =
    (const unsigned char *const) (char*)&data_things_axe2_anim_start_;
static const unsigned char *const data_things_axe2_anim_end   =
    (const unsigned char *const) (char*)&data_things_axe2_anim_end_;

extern unsigned char *data_things_axe3_start_ asm("data_things_axe3_start_");
extern unsigned char *data_things_axe3_end_ asm("data_things_axe3_end_");
static const unsigned char *const data_things_axe3_start =
    (const unsigned char *const) (char*)&data_things_axe3_start_;
static const unsigned char *const data_things_axe3_end   =
    (const unsigned char *const) (char*)&data_things_axe3_end_;

extern unsigned char *data_things_axe4_start_ asm("data_things_axe4_start_");
extern unsigned char *data_things_axe4_end_ asm("data_things_axe4_end_");
static const unsigned char *const data_things_axe4_start =
    (const unsigned char *const) (char*)&data_things_axe4_start_;
static const unsigned char *const data_things_axe4_end   =
    (const unsigned char *const) (char*)&data_things_axe4_end_;

extern unsigned char *data_things_axe5_start_ asm("data_things_axe5_start_");
extern unsigned char *data_things_axe5_end_ asm("data_things_axe5_end_");
static const unsigned char *const data_things_axe5_start =
    (const unsigned char *const) (char*)&data_things_axe5_start_;
static const unsigned char *const data_things_axe5_end   =
    (const unsigned char *const) (char*)&data_things_axe5_end_;

extern unsigned char *data_things_baby_death_start_ asm("data_things_baby_death_start_");
extern unsigned char *data_things_baby_death_end_ asm("data_things_baby_death_end_");
static const unsigned char *const data_things_baby_death_start =
    (const unsigned char *const) (char*)&data_things_baby_death_start_;
static const unsigned char *const data_things_baby_death_end   =
    (const unsigned char *const) (char*)&data_things_baby_death_end_;

extern unsigned char *data_things_banana_start_ asm("data_things_banana_start_");
extern unsigned char *data_things_banana_end_ asm("data_things_banana_end_");
static const unsigned char *const data_things_banana_start =
    (const unsigned char *const) (char*)&data_things_banana_start_;
static const unsigned char *const data_things_banana_end   =
    (const unsigned char *const) (char*)&data_things_banana_end_;

extern unsigned char *data_things_blood1_start_ asm("data_things_blood1_start_");
extern unsigned char *data_things_blood1_end_ asm("data_things_blood1_end_");
static const unsigned char *const data_things_blood1_start =
    (const unsigned char *const) (char*)&data_things_blood1_start_;
static const unsigned char *const data_things_blood1_end   =
    (const unsigned char *const) (char*)&data_things_blood1_end_;

extern unsigned char *data_things_blood2_start_ asm("data_things_blood2_start_");
extern unsigned char *data_things_blood2_end_ asm("data_things_blood2_end_");
static const unsigned char *const data_things_blood2_start =
    (const unsigned char *const) (char*)&data_things_blood2_start_;
static const unsigned char *const data_things_blood2_end   =
    (const unsigned char *const) (char*)&data_things_blood2_end_;

extern unsigned char *data_things_bomb_start_ asm("data_things_bomb_start_");
extern unsigned char *data_things_bomb_end_ asm("data_things_bomb_end_");
static const unsigned char *const data_things_bomb_start =
    (const unsigned char *const) (char*)&data_things_bomb_start_;
static const unsigned char *const data_things_bomb_end   =
    (const unsigned char *const) (char*)&data_things_bomb_end_;

extern unsigned char *data_things_bonepile1_start_ asm("data_things_bonepile1_start_");
extern unsigned char *data_things_bonepile1_end_ asm("data_things_bonepile1_end_");
static const unsigned char *const data_things_bonepile1_start =
    (const unsigned char *const) (char*)&data_things_bonepile1_start_;
static const unsigned char *const data_things_bonepile1_end   =
    (const unsigned char *const) (char*)&data_things_bonepile1_end_;

extern unsigned char *data_things_bonepile2_start_ asm("data_things_bonepile2_start_");
extern unsigned char *data_things_bonepile2_end_ asm("data_things_bonepile2_end_");
static const unsigned char *const data_things_bonepile2_start =
    (const unsigned char *const) (char*)&data_things_bonepile2_start_;
static const unsigned char *const data_things_bonepile2_end   =
    (const unsigned char *const) (char*)&data_things_bonepile2_end_;

extern unsigned char *data_things_bonepile3_start_ asm("data_things_bonepile3_start_");
extern unsigned char *data_things_bonepile3_end_ asm("data_things_bonepile3_end_");
static const unsigned char *const data_things_bonepile3_start =
    (const unsigned char *const) (char*)&data_things_bonepile3_start_;
static const unsigned char *const data_things_bonepile3_end   =
    (const unsigned char *const) (char*)&data_things_bonepile3_end_;

extern unsigned char *data_things_bonepile4_start_ asm("data_things_bonepile4_start_");
extern unsigned char *data_things_bonepile4_end_ asm("data_things_bonepile4_end_");
static const unsigned char *const data_things_bonepile4_start =
    (const unsigned char *const) (char*)&data_things_bonepile4_start_;
static const unsigned char *const data_things_bonepile4_end   =
    (const unsigned char *const) (char*)&data_things_bonepile4_end_;

extern unsigned char *data_things_boots1_start_ asm("data_things_boots1_start_");
extern unsigned char *data_things_boots1_end_ asm("data_things_boots1_end_");
static const unsigned char *const data_things_boots1_start =
    (const unsigned char *const) (char*)&data_things_boots1_start_;
static const unsigned char *const data_things_boots1_end   =
    (const unsigned char *const) (char*)&data_things_boots1_end_;

extern unsigned char *data_things_boots2_start_ asm("data_things_boots2_start_");
extern unsigned char *data_things_boots2_end_ asm("data_things_boots2_end_");
static const unsigned char *const data_things_boots2_start =
    (const unsigned char *const) (char*)&data_things_boots2_start_;
static const unsigned char *const data_things_boots2_end   =
    (const unsigned char *const) (char*)&data_things_boots2_end_;

extern unsigned char *data_things_boots3_start_ asm("data_things_boots3_start_");
extern unsigned char *data_things_boots3_end_ asm("data_things_boots3_end_");
static const unsigned char *const data_things_boots3_start =
    (const unsigned char *const) (char*)&data_things_boots3_start_;
static const unsigned char *const data_things_boots3_end   =
    (const unsigned char *const) (char*)&data_things_boots3_end_;

extern unsigned char *data_things_boots4_start_ asm("data_things_boots4_start_");
extern unsigned char *data_things_boots4_end_ asm("data_things_boots4_end_");
static const unsigned char *const data_things_boots4_start =
    (const unsigned char *const) (char*)&data_things_boots4_start_;
static const unsigned char *const data_things_boots4_end   =
    (const unsigned char *const) (char*)&data_things_boots4_end_;

extern unsigned char *data_things_boots5_start_ asm("data_things_boots5_start_");
extern unsigned char *data_things_boots5_end_ asm("data_things_boots5_end_");
static const unsigned char *const data_things_boots5_start =
    (const unsigned char *const) (char*)&data_things_boots5_start_;
static const unsigned char *const data_things_boots5_end   =
    (const unsigned char *const) (char*)&data_things_boots5_end_;

extern unsigned char *data_things_bow1_start_ asm("data_things_bow1_start_");
extern unsigned char *data_things_bow1_end_ asm("data_things_bow1_end_");
static const unsigned char *const data_things_bow1_start =
    (const unsigned char *const) (char*)&data_things_bow1_start_;
static const unsigned char *const data_things_bow1_end   =
    (const unsigned char *const) (char*)&data_things_bow1_end_;

extern unsigned char *data_things_bow1_anim_start_ asm("data_things_bow1_anim_start_");
extern unsigned char *data_things_bow1_anim_end_ asm("data_things_bow1_anim_end_");
static const unsigned char *const data_things_bow1_anim_start =
    (const unsigned char *const) (char*)&data_things_bow1_anim_start_;
static const unsigned char *const data_things_bow1_anim_end   =
    (const unsigned char *const) (char*)&data_things_bow1_anim_end_;

extern unsigned char *data_things_bow2_start_ asm("data_things_bow2_start_");
extern unsigned char *data_things_bow2_end_ asm("data_things_bow2_end_");
static const unsigned char *const data_things_bow2_start =
    (const unsigned char *const) (char*)&data_things_bow2_start_;
static const unsigned char *const data_things_bow2_end   =
    (const unsigned char *const) (char*)&data_things_bow2_end_;

extern unsigned char *data_things_bow3_start_ asm("data_things_bow3_start_");
extern unsigned char *data_things_bow3_end_ asm("data_things_bow3_end_");
static const unsigned char *const data_things_bow3_start =
    (const unsigned char *const) (char*)&data_things_bow3_start_;
static const unsigned char *const data_things_bow3_end   =
    (const unsigned char *const) (char*)&data_things_bow3_end_;

extern unsigned char *data_things_bow4_start_ asm("data_things_bow4_start_");
extern unsigned char *data_things_bow4_end_ asm("data_things_bow4_end_");
static const unsigned char *const data_things_bow4_start =
    (const unsigned char *const) (char*)&data_things_bow4_start_;
static const unsigned char *const data_things_bow4_end   =
    (const unsigned char *const) (char*)&data_things_bow4_end_;

extern unsigned char *data_things_brazier_start_ asm("data_things_brazier_start_");
extern unsigned char *data_things_brazier_end_ asm("data_things_brazier_end_");
static const unsigned char *const data_things_brazier_start =
    (const unsigned char *const) (char*)&data_things_brazier_start_;
static const unsigned char *const data_things_brazier_end   =
    (const unsigned char *const) (char*)&data_things_brazier_end_;

extern unsigned char *data_things_bread_start_ asm("data_things_bread_start_");
extern unsigned char *data_things_bread_end_ asm("data_things_bread_end_");
static const unsigned char *const data_things_bread_start =
    (const unsigned char *const) (char*)&data_things_bread_start_;
static const unsigned char *const data_things_bread_end   =
    (const unsigned char *const) (char*)&data_things_bread_end_;

extern unsigned char *data_things_bubbles1_start_ asm("data_things_bubbles1_start_");
extern unsigned char *data_things_bubbles1_end_ asm("data_things_bubbles1_end_");
static const unsigned char *const data_things_bubbles1_start =
    (const unsigned char *const) (char*)&data_things_bubbles1_start_;
static const unsigned char *const data_things_bubbles1_end   =
    (const unsigned char *const) (char*)&data_things_bubbles1_end_;

extern unsigned char *data_things_cheese_start_ asm("data_things_cheese_start_");
extern unsigned char *data_things_cheese_end_ asm("data_things_cheese_end_");
static const unsigned char *const data_things_cheese_start =
    (const unsigned char *const) (char*)&data_things_cheese_start_;
static const unsigned char *const data_things_cheese_end   =
    (const unsigned char *const) (char*)&data_things_cheese_end_;

extern unsigned char *data_things_chest1_start_ asm("data_things_chest1_start_");
extern unsigned char *data_things_chest1_end_ asm("data_things_chest1_end_");
static const unsigned char *const data_things_chest1_start =
    (const unsigned char *const) (char*)&data_things_chest1_start_;
static const unsigned char *const data_things_chest1_end   =
    (const unsigned char *const) (char*)&data_things_chest1_end_;

extern unsigned char *data_things_chest2_start_ asm("data_things_chest2_start_");
extern unsigned char *data_things_chest2_end_ asm("data_things_chest2_end_");
static const unsigned char *const data_things_chest2_start =
    (const unsigned char *const) (char*)&data_things_chest2_start_;
static const unsigned char *const data_things_chest2_end   =
    (const unsigned char *const) (char*)&data_things_chest2_end_;

extern unsigned char *data_things_cloudkill1_start_ asm("data_things_cloudkill1_start_");
extern unsigned char *data_things_cloudkill1_end_ asm("data_things_cloudkill1_end_");
static const unsigned char *const data_things_cloudkill1_start =
    (const unsigned char *const) (char*)&data_things_cloudkill1_start_;
static const unsigned char *const data_things_cloudkill1_end   =
    (const unsigned char *const) (char*)&data_things_cloudkill1_end_;

extern unsigned char *data_things_cloudkill2_start_ asm("data_things_cloudkill2_start_");
extern unsigned char *data_things_cloudkill2_end_ asm("data_things_cloudkill2_end_");
static const unsigned char *const data_things_cloudkill2_start =
    (const unsigned char *const) (char*)&data_things_cloudkill2_start_;
static const unsigned char *const data_things_cloudkill2_end   =
    (const unsigned char *const) (char*)&data_things_cloudkill2_end_;

extern unsigned char *data_things_club1_start_ asm("data_things_club1_start_");
extern unsigned char *data_things_club1_end_ asm("data_things_club1_end_");
static const unsigned char *const data_things_club1_start =
    (const unsigned char *const) (char*)&data_things_club1_start_;
static const unsigned char *const data_things_club1_end   =
    (const unsigned char *const) (char*)&data_things_club1_end_;

extern unsigned char *data_things_club1_anim_start_ asm("data_things_club1_anim_start_");
extern unsigned char *data_things_club1_anim_end_ asm("data_things_club1_anim_end_");
static const unsigned char *const data_things_club1_anim_start =
    (const unsigned char *const) (char*)&data_things_club1_anim_start_;
static const unsigned char *const data_things_club1_anim_end   =
    (const unsigned char *const) (char*)&data_things_club1_anim_end_;

extern unsigned char *data_things_cobweb_start_ asm("data_things_cobweb_start_");
extern unsigned char *data_things_cobweb_end_ asm("data_things_cobweb_end_");
static const unsigned char *const data_things_cobweb_start =
    (const unsigned char *const) (char*)&data_things_cobweb_start_;
static const unsigned char *const data_things_cobweb_end   =
    (const unsigned char *const) (char*)&data_things_cobweb_end_;

extern unsigned char *data_things_coins1_start_ asm("data_things_coins1_start_");
extern unsigned char *data_things_coins1_end_ asm("data_things_coins1_end_");
static const unsigned char *const data_things_coins1_start =
    (const unsigned char *const) (char*)&data_things_coins1_start_;
static const unsigned char *const data_things_coins1_end   =
    (const unsigned char *const) (char*)&data_things_coins1_end_;

extern unsigned char *data_things_corridor1_start_ asm("data_things_corridor1_start_");
extern unsigned char *data_things_corridor1_end_ asm("data_things_corridor1_end_");
static const unsigned char *const data_things_corridor1_start =
    (const unsigned char *const) (char*)&data_things_corridor1_start_;
static const unsigned char *const data_things_corridor1_end   =
    (const unsigned char *const) (char*)&data_things_corridor1_end_;

extern unsigned char *data_things_corridor2_start_ asm("data_things_corridor2_start_");
extern unsigned char *data_things_corridor2_end_ asm("data_things_corridor2_end_");
static const unsigned char *const data_things_corridor2_start =
    (const unsigned char *const) (char*)&data_things_corridor2_start_;
static const unsigned char *const data_things_corridor2_end   =
    (const unsigned char *const) (char*)&data_things_corridor2_end_;

extern unsigned char *data_things_corridor_wall1_start_ asm("data_things_corridor_wall1_start_");
extern unsigned char *data_things_corridor_wall1_end_ asm("data_things_corridor_wall1_end_");
static const unsigned char *const data_things_corridor_wall1_start =
    (const unsigned char *const) (char*)&data_things_corridor_wall1_start_;
static const unsigned char *const data_things_corridor_wall1_end   =
    (const unsigned char *const) (char*)&data_things_corridor_wall1_end_;

extern unsigned char *data_things_crystal1_start_ asm("data_things_crystal1_start_");
extern unsigned char *data_things_crystal1_end_ asm("data_things_crystal1_end_");
static const unsigned char *const data_things_crystal1_start =
    (const unsigned char *const) (char*)&data_things_crystal1_start_;
static const unsigned char *const data_things_crystal1_end   =
    (const unsigned char *const) (char*)&data_things_crystal1_end_;

extern unsigned char *data_things_crystal2_start_ asm("data_things_crystal2_start_");
extern unsigned char *data_things_crystal2_end_ asm("data_things_crystal2_end_");
static const unsigned char *const data_things_crystal2_start =
    (const unsigned char *const) (char*)&data_things_crystal2_start_;
static const unsigned char *const data_things_crystal2_end   =
    (const unsigned char *const) (char*)&data_things_crystal2_end_;

extern unsigned char *data_things_crystal3_start_ asm("data_things_crystal3_start_");
extern unsigned char *data_things_crystal3_end_ asm("data_things_crystal3_end_");
static const unsigned char *const data_things_crystal3_start =
    (const unsigned char *const) (char*)&data_things_crystal3_start_;
static const unsigned char *const data_things_crystal3_end   =
    (const unsigned char *const) (char*)&data_things_crystal3_end_;

extern unsigned char *data_things_crystal4_start_ asm("data_things_crystal4_start_");
extern unsigned char *data_things_crystal4_end_ asm("data_things_crystal4_end_");
static const unsigned char *const data_things_crystal4_start =
    (const unsigned char *const) (char*)&data_things_crystal4_start_;
static const unsigned char *const data_things_crystal4_end   =
    (const unsigned char *const) (char*)&data_things_crystal4_end_;

extern unsigned char *data_things_crystal5_start_ asm("data_things_crystal5_start_");
extern unsigned char *data_things_crystal5_end_ asm("data_things_crystal5_end_");
static const unsigned char *const data_things_crystal5_start =
    (const unsigned char *const) (char*)&data_things_crystal5_start_;
static const unsigned char *const data_things_crystal5_end   =
    (const unsigned char *const) (char*)&data_things_crystal5_end_;

extern unsigned char *data_things_crystal6_start_ asm("data_things_crystal6_start_");
extern unsigned char *data_things_crystal6_end_ asm("data_things_crystal6_end_");
static const unsigned char *const data_things_crystal6_start =
    (const unsigned char *const) (char*)&data_things_crystal6_start_;
static const unsigned char *const data_things_crystal6_end   =
    (const unsigned char *const) (char*)&data_things_crystal6_end_;

extern unsigned char *data_things_crystal7_start_ asm("data_things_crystal7_start_");
extern unsigned char *data_things_crystal7_end_ asm("data_things_crystal7_end_");
static const unsigned char *const data_things_crystal7_start =
    (const unsigned char *const) (char*)&data_things_crystal7_start_;
static const unsigned char *const data_things_crystal7_end   =
    (const unsigned char *const) (char*)&data_things_crystal7_end_;

extern unsigned char *data_things_death_start_ asm("data_things_death_start_");
extern unsigned char *data_things_death_end_ asm("data_things_death_end_");
static const unsigned char *const data_things_death_start =
    (const unsigned char *const) (char*)&data_things_death_start_;
static const unsigned char *const data_things_death_end   =
    (const unsigned char *const) (char*)&data_things_death_end_;

extern unsigned char *data_things_death_cloud_start_ asm("data_things_death_cloud_start_");
extern unsigned char *data_things_death_cloud_end_ asm("data_things_death_cloud_end_");
static const unsigned char *const data_things_death_cloud_start =
    (const unsigned char *const) (char*)&data_things_death_cloud_start_;
static const unsigned char *const data_things_death_cloud_end   =
    (const unsigned char *const) (char*)&data_things_death_cloud_end_;

extern unsigned char *data_things_death_cloud_anim_start_ asm("data_things_death_cloud_anim_start_");
extern unsigned char *data_things_death_cloud_anim_end_ asm("data_things_death_cloud_anim_end_");
static const unsigned char *const data_things_death_cloud_anim_start =
    (const unsigned char *const) (char*)&data_things_death_cloud_anim_start_;
static const unsigned char *const data_things_death_cloud_anim_end   =
    (const unsigned char *const) (char*)&data_things_death_cloud_anim_end_;

extern unsigned char *data_things_demon1_start_ asm("data_things_demon1_start_");
extern unsigned char *data_things_demon1_end_ asm("data_things_demon1_end_");
static const unsigned char *const data_things_demon1_start =
    (const unsigned char *const) (char*)&data_things_demon1_start_;
static const unsigned char *const data_things_demon1_end   =
    (const unsigned char *const) (char*)&data_things_demon1_end_;

extern unsigned char *data_things_demon2_start_ asm("data_things_demon2_start_");
extern unsigned char *data_things_demon2_end_ asm("data_things_demon2_end_");
static const unsigned char *const data_things_demon2_start =
    (const unsigned char *const) (char*)&data_things_demon2_start_;
static const unsigned char *const data_things_demon2_end   =
    (const unsigned char *const) (char*)&data_things_demon2_end_;

extern unsigned char *data_things_dirt1_start_ asm("data_things_dirt1_start_");
extern unsigned char *data_things_dirt1_end_ asm("data_things_dirt1_end_");
static const unsigned char *const data_things_dirt1_start =
    (const unsigned char *const) (char*)&data_things_dirt1_start_;
static const unsigned char *const data_things_dirt1_end   =
    (const unsigned char *const) (char*)&data_things_dirt1_end_;

extern unsigned char *data_things_door1_start_ asm("data_things_door1_start_");
extern unsigned char *data_things_door1_end_ asm("data_things_door1_end_");
static const unsigned char *const data_things_door1_start =
    (const unsigned char *const) (char*)&data_things_door1_start_;
static const unsigned char *const data_things_door1_end   =
    (const unsigned char *const) (char*)&data_things_door1_end_;

extern unsigned char *data_things_door2_start_ asm("data_things_door2_start_");
extern unsigned char *data_things_door2_end_ asm("data_things_door2_end_");
static const unsigned char *const data_things_door2_start =
    (const unsigned char *const) (char*)&data_things_door2_start_;
static const unsigned char *const data_things_door2_end   =
    (const unsigned char *const) (char*)&data_things_door2_end_;

extern unsigned char *data_things_dragon1_start_ asm("data_things_dragon1_start_");
extern unsigned char *data_things_dragon1_end_ asm("data_things_dragon1_end_");
static const unsigned char *const data_things_dragon1_start =
    (const unsigned char *const) (char*)&data_things_dragon1_start_;
static const unsigned char *const data_things_dragon1_end   =
    (const unsigned char *const) (char*)&data_things_dragon1_end_;

extern unsigned char *data_things_dragon2_start_ asm("data_things_dragon2_start_");
extern unsigned char *data_things_dragon2_end_ asm("data_things_dragon2_end_");
static const unsigned char *const data_things_dragon2_start =
    (const unsigned char *const) (char*)&data_things_dragon2_start_;
static const unsigned char *const data_things_dragon2_end   =
    (const unsigned char *const) (char*)&data_things_dragon2_end_;

extern unsigned char *data_things_dragon3_start_ asm("data_things_dragon3_start_");
extern unsigned char *data_things_dragon3_end_ asm("data_things_dragon3_end_");
static const unsigned char *const data_things_dragon3_start =
    (const unsigned char *const) (char*)&data_things_dragon3_start_;
static const unsigned char *const data_things_dragon3_end   =
    (const unsigned char *const) (char*)&data_things_dragon3_end_;

extern unsigned char *data_things_dragon4_start_ asm("data_things_dragon4_start_");
extern unsigned char *data_things_dragon4_end_ asm("data_things_dragon4_end_");
static const unsigned char *const data_things_dragon4_start =
    (const unsigned char *const) (char*)&data_things_dragon4_start_;
static const unsigned char *const data_things_dragon4_end   =
    (const unsigned char *const) (char*)&data_things_dragon4_end_;

extern unsigned char *data_things_dwarf_start_ asm("data_things_dwarf_start_");
extern unsigned char *data_things_dwarf_end_ asm("data_things_dwarf_end_");
static const unsigned char *const data_things_dwarf_start =
    (const unsigned char *const) (char*)&data_things_dwarf_start_;
static const unsigned char *const data_things_dwarf_end   =
    (const unsigned char *const) (char*)&data_things_dwarf_end_;

extern unsigned char *data_things_elf_start_ asm("data_things_elf_start_");
extern unsigned char *data_things_elf_end_ asm("data_things_elf_end_");
static const unsigned char *const data_things_elf_start =
    (const unsigned char *const) (char*)&data_things_elf_start_;
static const unsigned char *const data_things_elf_end   =
    (const unsigned char *const) (char*)&data_things_elf_end_;

extern unsigned char *data_things_energy1_start_ asm("data_things_energy1_start_");
extern unsigned char *data_things_energy1_end_ asm("data_things_energy1_end_");
static const unsigned char *const data_things_energy1_start =
    (const unsigned char *const) (char*)&data_things_energy1_start_;
static const unsigned char *const data_things_energy1_end   =
    (const unsigned char *const) (char*)&data_things_energy1_end_;

extern unsigned char *data_things_energy2_start_ asm("data_things_energy2_start_");
extern unsigned char *data_things_energy2_end_ asm("data_things_energy2_end_");
static const unsigned char *const data_things_energy2_start =
    (const unsigned char *const) (char*)&data_things_energy2_start_;
static const unsigned char *const data_things_energy2_end   =
    (const unsigned char *const) (char*)&data_things_energy2_end_;

extern unsigned char *data_things_exit1_start_ asm("data_things_exit1_start_");
extern unsigned char *data_things_exit1_end_ asm("data_things_exit1_end_");
static const unsigned char *const data_things_exit1_start =
    (const unsigned char *const) (char*)&data_things_exit1_start_;
static const unsigned char *const data_things_exit1_end   =
    (const unsigned char *const) (char*)&data_things_exit1_end_;

extern unsigned char *data_things_explosion1_start_ asm("data_things_explosion1_start_");
extern unsigned char *data_things_explosion1_end_ asm("data_things_explosion1_end_");
static const unsigned char *const data_things_explosion1_start =
    (const unsigned char *const) (char*)&data_things_explosion1_start_;
static const unsigned char *const data_things_explosion1_end   =
    (const unsigned char *const) (char*)&data_things_explosion1_end_;

extern unsigned char *data_things_explosion2_start_ asm("data_things_explosion2_start_");
extern unsigned char *data_things_explosion2_end_ asm("data_things_explosion2_end_");
static const unsigned char *const data_things_explosion2_start =
    (const unsigned char *const) (char*)&data_things_explosion2_start_;
static const unsigned char *const data_things_explosion2_end   =
    (const unsigned char *const) (char*)&data_things_explosion2_end_;

extern unsigned char *data_things_explosion3_start_ asm("data_things_explosion3_start_");
extern unsigned char *data_things_explosion3_end_ asm("data_things_explosion3_end_");
static const unsigned char *const data_things_explosion3_start =
    (const unsigned char *const) (char*)&data_things_explosion3_start_;
static const unsigned char *const data_things_explosion3_end   =
    (const unsigned char *const) (char*)&data_things_explosion3_end_;

extern unsigned char *data_things_explosion4_start_ asm("data_things_explosion4_start_");
extern unsigned char *data_things_explosion4_end_ asm("data_things_explosion4_end_");
static const unsigned char *const data_things_explosion4_start =
    (const unsigned char *const) (char*)&data_things_explosion4_start_;
static const unsigned char *const data_things_explosion4_end   =
    (const unsigned char *const) (char*)&data_things_explosion4_end_;

extern unsigned char *data_things_eyebawl_start_ asm("data_things_eyebawl_start_");
extern unsigned char *data_things_eyebawl_end_ asm("data_things_eyebawl_end_");
static const unsigned char *const data_things_eyebawl_start =
    (const unsigned char *const) (char*)&data_things_eyebawl_start_;
static const unsigned char *const data_things_eyebawl_end   =
    (const unsigned char *const) (char*)&data_things_eyebawl_end_;

extern unsigned char *data_things_eyebawlmob_start_ asm("data_things_eyebawlmob_start_");
extern unsigned char *data_things_eyebawlmob_end_ asm("data_things_eyebawlmob_end_");
static const unsigned char *const data_things_eyebawlmob_start =
    (const unsigned char *const) (char*)&data_things_eyebawlmob_start_;
static const unsigned char *const data_things_eyebawlmob_end   =
    (const unsigned char *const) (char*)&data_things_eyebawlmob_end_;

extern unsigned char *data_things_fireball1_start_ asm("data_things_fireball1_start_");
extern unsigned char *data_things_fireball1_end_ asm("data_things_fireball1_end_");
static const unsigned char *const data_things_fireball1_start =
    (const unsigned char *const) (char*)&data_things_fireball1_start_;
static const unsigned char *const data_things_fireball1_end   =
    (const unsigned char *const) (char*)&data_things_fireball1_end_;

extern unsigned char *data_things_fireball2_start_ asm("data_things_fireball2_start_");
extern unsigned char *data_things_fireball2_end_ asm("data_things_fireball2_end_");
static const unsigned char *const data_things_fireball2_start =
    (const unsigned char *const) (char*)&data_things_fireball2_start_;
static const unsigned char *const data_things_fireball2_end   =
    (const unsigned char *const) (char*)&data_things_fireball2_end_;

extern unsigned char *data_things_fireball3_start_ asm("data_things_fireball3_start_");
extern unsigned char *data_things_fireball3_end_ asm("data_things_fireball3_end_");
static const unsigned char *const data_things_fireball3_start =
    (const unsigned char *const) (char*)&data_things_fireball3_start_;
static const unsigned char *const data_things_fireball3_end   =
    (const unsigned char *const) (char*)&data_things_fireball3_end_;

extern unsigned char *data_things_fireball4_start_ asm("data_things_fireball4_start_");
extern unsigned char *data_things_fireball4_end_ asm("data_things_fireball4_end_");
static const unsigned char *const data_things_fireball4_start =
    (const unsigned char *const) (char*)&data_things_fireball4_start_;
static const unsigned char *const data_things_fireball4_end   =
    (const unsigned char *const) (char*)&data_things_fireball4_end_;

extern unsigned char *data_things_fireburst1_start_ asm("data_things_fireburst1_start_");
extern unsigned char *data_things_fireburst1_end_ asm("data_things_fireburst1_end_");
static const unsigned char *const data_things_fireburst1_start =
    (const unsigned char *const) (char*)&data_things_fireburst1_start_;
static const unsigned char *const data_things_fireburst1_end   =
    (const unsigned char *const) (char*)&data_things_fireburst1_end_;

extern unsigned char *data_things_fireburst2_start_ asm("data_things_fireburst2_start_");
extern unsigned char *data_things_fireburst2_end_ asm("data_things_fireburst2_end_");
static const unsigned char *const data_things_fireburst2_start =
    (const unsigned char *const) (char*)&data_things_fireburst2_start_;
static const unsigned char *const data_things_fireburst2_end   =
    (const unsigned char *const) (char*)&data_things_fireburst2_end_;

extern unsigned char *data_things_fireburst3_start_ asm("data_things_fireburst3_start_");
extern unsigned char *data_things_fireburst3_end_ asm("data_things_fireburst3_end_");
static const unsigned char *const data_things_fireburst3_start =
    (const unsigned char *const) (char*)&data_things_fireburst3_start_;
static const unsigned char *const data_things_fireburst3_end   =
    (const unsigned char *const) (char*)&data_things_fireburst3_end_;

extern unsigned char *data_things_fireburst4_start_ asm("data_things_fireburst4_start_");
extern unsigned char *data_things_fireburst4_end_ asm("data_things_fireburst4_end_");
static const unsigned char *const data_things_fireburst4_start =
    (const unsigned char *const) (char*)&data_things_fireburst4_start_;
static const unsigned char *const data_things_fireburst4_end   =
    (const unsigned char *const) (char*)&data_things_fireburst4_end_;

extern unsigned char *data_things_flames1_start_ asm("data_things_flames1_start_");
extern unsigned char *data_things_flames1_end_ asm("data_things_flames1_end_");
static const unsigned char *const data_things_flames1_start =
    (const unsigned char *const) (char*)&data_things_flames1_start_;
static const unsigned char *const data_things_flames1_end   =
    (const unsigned char *const) (char*)&data_things_flames1_end_;

extern unsigned char *data_things_floor1_start_ asm("data_things_floor1_start_");
extern unsigned char *data_things_floor1_end_ asm("data_things_floor1_end_");
static const unsigned char *const data_things_floor1_start =
    (const unsigned char *const) (char*)&data_things_floor1_start_;
static const unsigned char *const data_things_floor1_end   =
    (const unsigned char *const) (char*)&data_things_floor1_end_;

extern unsigned char *data_things_floor10_start_ asm("data_things_floor10_start_");
extern unsigned char *data_things_floor10_end_ asm("data_things_floor10_end_");
static const unsigned char *const data_things_floor10_start =
    (const unsigned char *const) (char*)&data_things_floor10_start_;
static const unsigned char *const data_things_floor10_end   =
    (const unsigned char *const) (char*)&data_things_floor10_end_;

extern unsigned char *data_things_floor11_start_ asm("data_things_floor11_start_");
extern unsigned char *data_things_floor11_end_ asm("data_things_floor11_end_");
static const unsigned char *const data_things_floor11_start =
    (const unsigned char *const) (char*)&data_things_floor11_start_;
static const unsigned char *const data_things_floor11_end   =
    (const unsigned char *const) (char*)&data_things_floor11_end_;

extern unsigned char *data_things_floor12_start_ asm("data_things_floor12_start_");
extern unsigned char *data_things_floor12_end_ asm("data_things_floor12_end_");
static const unsigned char *const data_things_floor12_start =
    (const unsigned char *const) (char*)&data_things_floor12_start_;
static const unsigned char *const data_things_floor12_end   =
    (const unsigned char *const) (char*)&data_things_floor12_end_;

extern unsigned char *data_things_floor13_start_ asm("data_things_floor13_start_");
extern unsigned char *data_things_floor13_end_ asm("data_things_floor13_end_");
static const unsigned char *const data_things_floor13_start =
    (const unsigned char *const) (char*)&data_things_floor13_start_;
static const unsigned char *const data_things_floor13_end   =
    (const unsigned char *const) (char*)&data_things_floor13_end_;

extern unsigned char *data_things_floor14_start_ asm("data_things_floor14_start_");
extern unsigned char *data_things_floor14_end_ asm("data_things_floor14_end_");
static const unsigned char *const data_things_floor14_start =
    (const unsigned char *const) (char*)&data_things_floor14_start_;
static const unsigned char *const data_things_floor14_end   =
    (const unsigned char *const) (char*)&data_things_floor14_end_;

extern unsigned char *data_things_floor15_start_ asm("data_things_floor15_start_");
extern unsigned char *data_things_floor15_end_ asm("data_things_floor15_end_");
static const unsigned char *const data_things_floor15_start =
    (const unsigned char *const) (char*)&data_things_floor15_start_;
static const unsigned char *const data_things_floor15_end   =
    (const unsigned char *const) (char*)&data_things_floor15_end_;

extern unsigned char *data_things_floor16_start_ asm("data_things_floor16_start_");
extern unsigned char *data_things_floor16_end_ asm("data_things_floor16_end_");
static const unsigned char *const data_things_floor16_start =
    (const unsigned char *const) (char*)&data_things_floor16_start_;
static const unsigned char *const data_things_floor16_end   =
    (const unsigned char *const) (char*)&data_things_floor16_end_;

extern unsigned char *data_things_floor17_start_ asm("data_things_floor17_start_");
extern unsigned char *data_things_floor17_end_ asm("data_things_floor17_end_");
static const unsigned char *const data_things_floor17_start =
    (const unsigned char *const) (char*)&data_things_floor17_start_;
static const unsigned char *const data_things_floor17_end   =
    (const unsigned char *const) (char*)&data_things_floor17_end_;

extern unsigned char *data_things_floor18_start_ asm("data_things_floor18_start_");
extern unsigned char *data_things_floor18_end_ asm("data_things_floor18_end_");
static const unsigned char *const data_things_floor18_start =
    (const unsigned char *const) (char*)&data_things_floor18_start_;
static const unsigned char *const data_things_floor18_end   =
    (const unsigned char *const) (char*)&data_things_floor18_end_;

extern unsigned char *data_things_floor19_start_ asm("data_things_floor19_start_");
extern unsigned char *data_things_floor19_end_ asm("data_things_floor19_end_");
static const unsigned char *const data_things_floor19_start =
    (const unsigned char *const) (char*)&data_things_floor19_start_;
static const unsigned char *const data_things_floor19_end   =
    (const unsigned char *const) (char*)&data_things_floor19_end_;

extern unsigned char *data_things_floor2_start_ asm("data_things_floor2_start_");
extern unsigned char *data_things_floor2_end_ asm("data_things_floor2_end_");
static const unsigned char *const data_things_floor2_start =
    (const unsigned char *const) (char*)&data_things_floor2_start_;
static const unsigned char *const data_things_floor2_end   =
    (const unsigned char *const) (char*)&data_things_floor2_end_;

extern unsigned char *data_things_floor20_start_ asm("data_things_floor20_start_");
extern unsigned char *data_things_floor20_end_ asm("data_things_floor20_end_");
static const unsigned char *const data_things_floor20_start =
    (const unsigned char *const) (char*)&data_things_floor20_start_;
static const unsigned char *const data_things_floor20_end   =
    (const unsigned char *const) (char*)&data_things_floor20_end_;

extern unsigned char *data_things_floor21_start_ asm("data_things_floor21_start_");
extern unsigned char *data_things_floor21_end_ asm("data_things_floor21_end_");
static const unsigned char *const data_things_floor21_start =
    (const unsigned char *const) (char*)&data_things_floor21_start_;
static const unsigned char *const data_things_floor21_end   =
    (const unsigned char *const) (char*)&data_things_floor21_end_;

extern unsigned char *data_things_floor22_start_ asm("data_things_floor22_start_");
extern unsigned char *data_things_floor22_end_ asm("data_things_floor22_end_");
static const unsigned char *const data_things_floor22_start =
    (const unsigned char *const) (char*)&data_things_floor22_start_;
static const unsigned char *const data_things_floor22_end   =
    (const unsigned char *const) (char*)&data_things_floor22_end_;

extern unsigned char *data_things_floor23_start_ asm("data_things_floor23_start_");
extern unsigned char *data_things_floor23_end_ asm("data_things_floor23_end_");
static const unsigned char *const data_things_floor23_start =
    (const unsigned char *const) (char*)&data_things_floor23_start_;
static const unsigned char *const data_things_floor23_end   =
    (const unsigned char *const) (char*)&data_things_floor23_end_;

extern unsigned char *data_things_floor24_start_ asm("data_things_floor24_start_");
extern unsigned char *data_things_floor24_end_ asm("data_things_floor24_end_");
static const unsigned char *const data_things_floor24_start =
    (const unsigned char *const) (char*)&data_things_floor24_start_;
static const unsigned char *const data_things_floor24_end   =
    (const unsigned char *const) (char*)&data_things_floor24_end_;

extern unsigned char *data_things_floor25_start_ asm("data_things_floor25_start_");
extern unsigned char *data_things_floor25_end_ asm("data_things_floor25_end_");
static const unsigned char *const data_things_floor25_start =
    (const unsigned char *const) (char*)&data_things_floor25_start_;
static const unsigned char *const data_things_floor25_end   =
    (const unsigned char *const) (char*)&data_things_floor25_end_;

extern unsigned char *data_things_floor26_start_ asm("data_things_floor26_start_");
extern unsigned char *data_things_floor26_end_ asm("data_things_floor26_end_");
static const unsigned char *const data_things_floor26_start =
    (const unsigned char *const) (char*)&data_things_floor26_start_;
static const unsigned char *const data_things_floor26_end   =
    (const unsigned char *const) (char*)&data_things_floor26_end_;

extern unsigned char *data_things_floor27_start_ asm("data_things_floor27_start_");
extern unsigned char *data_things_floor27_end_ asm("data_things_floor27_end_");
static const unsigned char *const data_things_floor27_start =
    (const unsigned char *const) (char*)&data_things_floor27_start_;
static const unsigned char *const data_things_floor27_end   =
    (const unsigned char *const) (char*)&data_things_floor27_end_;

extern unsigned char *data_things_floor28_start_ asm("data_things_floor28_start_");
extern unsigned char *data_things_floor28_end_ asm("data_things_floor28_end_");
static const unsigned char *const data_things_floor28_start =
    (const unsigned char *const) (char*)&data_things_floor28_start_;
static const unsigned char *const data_things_floor28_end   =
    (const unsigned char *const) (char*)&data_things_floor28_end_;

extern unsigned char *data_things_floor29_start_ asm("data_things_floor29_start_");
extern unsigned char *data_things_floor29_end_ asm("data_things_floor29_end_");
static const unsigned char *const data_things_floor29_start =
    (const unsigned char *const) (char*)&data_things_floor29_start_;
static const unsigned char *const data_things_floor29_end   =
    (const unsigned char *const) (char*)&data_things_floor29_end_;

extern unsigned char *data_things_floor3_start_ asm("data_things_floor3_start_");
extern unsigned char *data_things_floor3_end_ asm("data_things_floor3_end_");
static const unsigned char *const data_things_floor3_start =
    (const unsigned char *const) (char*)&data_things_floor3_start_;
static const unsigned char *const data_things_floor3_end   =
    (const unsigned char *const) (char*)&data_things_floor3_end_;

extern unsigned char *data_things_floor30_start_ asm("data_things_floor30_start_");
extern unsigned char *data_things_floor30_end_ asm("data_things_floor30_end_");
static const unsigned char *const data_things_floor30_start =
    (const unsigned char *const) (char*)&data_things_floor30_start_;
static const unsigned char *const data_things_floor30_end   =
    (const unsigned char *const) (char*)&data_things_floor30_end_;

extern unsigned char *data_things_floor31_start_ asm("data_things_floor31_start_");
extern unsigned char *data_things_floor31_end_ asm("data_things_floor31_end_");
static const unsigned char *const data_things_floor31_start =
    (const unsigned char *const) (char*)&data_things_floor31_start_;
static const unsigned char *const data_things_floor31_end   =
    (const unsigned char *const) (char*)&data_things_floor31_end_;

extern unsigned char *data_things_floor32_start_ asm("data_things_floor32_start_");
extern unsigned char *data_things_floor32_end_ asm("data_things_floor32_end_");
static const unsigned char *const data_things_floor32_start =
    (const unsigned char *const) (char*)&data_things_floor32_start_;
static const unsigned char *const data_things_floor32_end   =
    (const unsigned char *const) (char*)&data_things_floor32_end_;

extern unsigned char *data_things_floor33_start_ asm("data_things_floor33_start_");
extern unsigned char *data_things_floor33_end_ asm("data_things_floor33_end_");
static const unsigned char *const data_things_floor33_start =
    (const unsigned char *const) (char*)&data_things_floor33_start_;
static const unsigned char *const data_things_floor33_end   =
    (const unsigned char *const) (char*)&data_things_floor33_end_;

extern unsigned char *data_things_floor34_start_ asm("data_things_floor34_start_");
extern unsigned char *data_things_floor34_end_ asm("data_things_floor34_end_");
static const unsigned char *const data_things_floor34_start =
    (const unsigned char *const) (char*)&data_things_floor34_start_;
static const unsigned char *const data_things_floor34_end   =
    (const unsigned char *const) (char*)&data_things_floor34_end_;

extern unsigned char *data_things_floor35_start_ asm("data_things_floor35_start_");
extern unsigned char *data_things_floor35_end_ asm("data_things_floor35_end_");
static const unsigned char *const data_things_floor35_start =
    (const unsigned char *const) (char*)&data_things_floor35_start_;
static const unsigned char *const data_things_floor35_end   =
    (const unsigned char *const) (char*)&data_things_floor35_end_;

extern unsigned char *data_things_floor36_start_ asm("data_things_floor36_start_");
extern unsigned char *data_things_floor36_end_ asm("data_things_floor36_end_");
static const unsigned char *const data_things_floor36_start =
    (const unsigned char *const) (char*)&data_things_floor36_start_;
static const unsigned char *const data_things_floor36_end   =
    (const unsigned char *const) (char*)&data_things_floor36_end_;

extern unsigned char *data_things_floor37_start_ asm("data_things_floor37_start_");
extern unsigned char *data_things_floor37_end_ asm("data_things_floor37_end_");
static const unsigned char *const data_things_floor37_start =
    (const unsigned char *const) (char*)&data_things_floor37_start_;
static const unsigned char *const data_things_floor37_end   =
    (const unsigned char *const) (char*)&data_things_floor37_end_;

extern unsigned char *data_things_floor38_start_ asm("data_things_floor38_start_");
extern unsigned char *data_things_floor38_end_ asm("data_things_floor38_end_");
static const unsigned char *const data_things_floor38_start =
    (const unsigned char *const) (char*)&data_things_floor38_start_;
static const unsigned char *const data_things_floor38_end   =
    (const unsigned char *const) (char*)&data_things_floor38_end_;

extern unsigned char *data_things_floor39_start_ asm("data_things_floor39_start_");
extern unsigned char *data_things_floor39_end_ asm("data_things_floor39_end_");
static const unsigned char *const data_things_floor39_start =
    (const unsigned char *const) (char*)&data_things_floor39_start_;
static const unsigned char *const data_things_floor39_end   =
    (const unsigned char *const) (char*)&data_things_floor39_end_;

extern unsigned char *data_things_floor4_start_ asm("data_things_floor4_start_");
extern unsigned char *data_things_floor4_end_ asm("data_things_floor4_end_");
static const unsigned char *const data_things_floor4_start =
    (const unsigned char *const) (char*)&data_things_floor4_start_;
static const unsigned char *const data_things_floor4_end   =
    (const unsigned char *const) (char*)&data_things_floor4_end_;

extern unsigned char *data_things_floor40_start_ asm("data_things_floor40_start_");
extern unsigned char *data_things_floor40_end_ asm("data_things_floor40_end_");
static const unsigned char *const data_things_floor40_start =
    (const unsigned char *const) (char*)&data_things_floor40_start_;
static const unsigned char *const data_things_floor40_end   =
    (const unsigned char *const) (char*)&data_things_floor40_end_;

extern unsigned char *data_things_floor41_start_ asm("data_things_floor41_start_");
extern unsigned char *data_things_floor41_end_ asm("data_things_floor41_end_");
static const unsigned char *const data_things_floor41_start =
    (const unsigned char *const) (char*)&data_things_floor41_start_;
static const unsigned char *const data_things_floor41_end   =
    (const unsigned char *const) (char*)&data_things_floor41_end_;

extern unsigned char *data_things_floor42_start_ asm("data_things_floor42_start_");
extern unsigned char *data_things_floor42_end_ asm("data_things_floor42_end_");
static const unsigned char *const data_things_floor42_start =
    (const unsigned char *const) (char*)&data_things_floor42_start_;
static const unsigned char *const data_things_floor42_end   =
    (const unsigned char *const) (char*)&data_things_floor42_end_;

extern unsigned char *data_things_floor43_start_ asm("data_things_floor43_start_");
extern unsigned char *data_things_floor43_end_ asm("data_things_floor43_end_");
static const unsigned char *const data_things_floor43_start =
    (const unsigned char *const) (char*)&data_things_floor43_start_;
static const unsigned char *const data_things_floor43_end   =
    (const unsigned char *const) (char*)&data_things_floor43_end_;

extern unsigned char *data_things_floor44_start_ asm("data_things_floor44_start_");
extern unsigned char *data_things_floor44_end_ asm("data_things_floor44_end_");
static const unsigned char *const data_things_floor44_start =
    (const unsigned char *const) (char*)&data_things_floor44_start_;
static const unsigned char *const data_things_floor44_end   =
    (const unsigned char *const) (char*)&data_things_floor44_end_;

extern unsigned char *data_things_floor45_start_ asm("data_things_floor45_start_");
extern unsigned char *data_things_floor45_end_ asm("data_things_floor45_end_");
static const unsigned char *const data_things_floor45_start =
    (const unsigned char *const) (char*)&data_things_floor45_start_;
static const unsigned char *const data_things_floor45_end   =
    (const unsigned char *const) (char*)&data_things_floor45_end_;

extern unsigned char *data_things_floor46_start_ asm("data_things_floor46_start_");
extern unsigned char *data_things_floor46_end_ asm("data_things_floor46_end_");
static const unsigned char *const data_things_floor46_start =
    (const unsigned char *const) (char*)&data_things_floor46_start_;
static const unsigned char *const data_things_floor46_end   =
    (const unsigned char *const) (char*)&data_things_floor46_end_;

extern unsigned char *data_things_floor47_start_ asm("data_things_floor47_start_");
extern unsigned char *data_things_floor47_end_ asm("data_things_floor47_end_");
static const unsigned char *const data_things_floor47_start =
    (const unsigned char *const) (char*)&data_things_floor47_start_;
static const unsigned char *const data_things_floor47_end   =
    (const unsigned char *const) (char*)&data_things_floor47_end_;

extern unsigned char *data_things_floor48_start_ asm("data_things_floor48_start_");
extern unsigned char *data_things_floor48_end_ asm("data_things_floor48_end_");
static const unsigned char *const data_things_floor48_start =
    (const unsigned char *const) (char*)&data_things_floor48_start_;
static const unsigned char *const data_things_floor48_end   =
    (const unsigned char *const) (char*)&data_things_floor48_end_;

extern unsigned char *data_things_floor49_start_ asm("data_things_floor49_start_");
extern unsigned char *data_things_floor49_end_ asm("data_things_floor49_end_");
static const unsigned char *const data_things_floor49_start =
    (const unsigned char *const) (char*)&data_things_floor49_start_;
static const unsigned char *const data_things_floor49_end   =
    (const unsigned char *const) (char*)&data_things_floor49_end_;

extern unsigned char *data_things_floor5_start_ asm("data_things_floor5_start_");
extern unsigned char *data_things_floor5_end_ asm("data_things_floor5_end_");
static const unsigned char *const data_things_floor5_start =
    (const unsigned char *const) (char*)&data_things_floor5_start_;
static const unsigned char *const data_things_floor5_end   =
    (const unsigned char *const) (char*)&data_things_floor5_end_;

extern unsigned char *data_things_floor50_start_ asm("data_things_floor50_start_");
extern unsigned char *data_things_floor50_end_ asm("data_things_floor50_end_");
static const unsigned char *const data_things_floor50_start =
    (const unsigned char *const) (char*)&data_things_floor50_start_;
static const unsigned char *const data_things_floor50_end   =
    (const unsigned char *const) (char*)&data_things_floor50_end_;

extern unsigned char *data_things_floor51_start_ asm("data_things_floor51_start_");
extern unsigned char *data_things_floor51_end_ asm("data_things_floor51_end_");
static const unsigned char *const data_things_floor51_start =
    (const unsigned char *const) (char*)&data_things_floor51_start_;
static const unsigned char *const data_things_floor51_end   =
    (const unsigned char *const) (char*)&data_things_floor51_end_;

extern unsigned char *data_things_floor52_start_ asm("data_things_floor52_start_");
extern unsigned char *data_things_floor52_end_ asm("data_things_floor52_end_");
static const unsigned char *const data_things_floor52_start =
    (const unsigned char *const) (char*)&data_things_floor52_start_;
static const unsigned char *const data_things_floor52_end   =
    (const unsigned char *const) (char*)&data_things_floor52_end_;

extern unsigned char *data_things_floor53_start_ asm("data_things_floor53_start_");
extern unsigned char *data_things_floor53_end_ asm("data_things_floor53_end_");
static const unsigned char *const data_things_floor53_start =
    (const unsigned char *const) (char*)&data_things_floor53_start_;
static const unsigned char *const data_things_floor53_end   =
    (const unsigned char *const) (char*)&data_things_floor53_end_;

extern unsigned char *data_things_floor54_start_ asm("data_things_floor54_start_");
extern unsigned char *data_things_floor54_end_ asm("data_things_floor54_end_");
static const unsigned char *const data_things_floor54_start =
    (const unsigned char *const) (char*)&data_things_floor54_start_;
static const unsigned char *const data_things_floor54_end   =
    (const unsigned char *const) (char*)&data_things_floor54_end_;

extern unsigned char *data_things_floor55_start_ asm("data_things_floor55_start_");
extern unsigned char *data_things_floor55_end_ asm("data_things_floor55_end_");
static const unsigned char *const data_things_floor55_start =
    (const unsigned char *const) (char*)&data_things_floor55_start_;
static const unsigned char *const data_things_floor55_end   =
    (const unsigned char *const) (char*)&data_things_floor55_end_;

extern unsigned char *data_things_floor56_start_ asm("data_things_floor56_start_");
extern unsigned char *data_things_floor56_end_ asm("data_things_floor56_end_");
static const unsigned char *const data_things_floor56_start =
    (const unsigned char *const) (char*)&data_things_floor56_start_;
static const unsigned char *const data_things_floor56_end   =
    (const unsigned char *const) (char*)&data_things_floor56_end_;

extern unsigned char *data_things_floor57_start_ asm("data_things_floor57_start_");
extern unsigned char *data_things_floor57_end_ asm("data_things_floor57_end_");
static const unsigned char *const data_things_floor57_start =
    (const unsigned char *const) (char*)&data_things_floor57_start_;
static const unsigned char *const data_things_floor57_end   =
    (const unsigned char *const) (char*)&data_things_floor57_end_;

extern unsigned char *data_things_floor58_start_ asm("data_things_floor58_start_");
extern unsigned char *data_things_floor58_end_ asm("data_things_floor58_end_");
static const unsigned char *const data_things_floor58_start =
    (const unsigned char *const) (char*)&data_things_floor58_start_;
static const unsigned char *const data_things_floor58_end   =
    (const unsigned char *const) (char*)&data_things_floor58_end_;

extern unsigned char *data_things_floor59_start_ asm("data_things_floor59_start_");
extern unsigned char *data_things_floor59_end_ asm("data_things_floor59_end_");
static const unsigned char *const data_things_floor59_start =
    (const unsigned char *const) (char*)&data_things_floor59_start_;
static const unsigned char *const data_things_floor59_end   =
    (const unsigned char *const) (char*)&data_things_floor59_end_;

extern unsigned char *data_things_floor6_start_ asm("data_things_floor6_start_");
extern unsigned char *data_things_floor6_end_ asm("data_things_floor6_end_");
static const unsigned char *const data_things_floor6_start =
    (const unsigned char *const) (char*)&data_things_floor6_start_;
static const unsigned char *const data_things_floor6_end   =
    (const unsigned char *const) (char*)&data_things_floor6_end_;

extern unsigned char *data_things_floor60_start_ asm("data_things_floor60_start_");
extern unsigned char *data_things_floor60_end_ asm("data_things_floor60_end_");
static const unsigned char *const data_things_floor60_start =
    (const unsigned char *const) (char*)&data_things_floor60_start_;
static const unsigned char *const data_things_floor60_end   =
    (const unsigned char *const) (char*)&data_things_floor60_end_;

extern unsigned char *data_things_floor61_start_ asm("data_things_floor61_start_");
extern unsigned char *data_things_floor61_end_ asm("data_things_floor61_end_");
static const unsigned char *const data_things_floor61_start =
    (const unsigned char *const) (char*)&data_things_floor61_start_;
static const unsigned char *const data_things_floor61_end   =
    (const unsigned char *const) (char*)&data_things_floor61_end_;

extern unsigned char *data_things_floor62_start_ asm("data_things_floor62_start_");
extern unsigned char *data_things_floor62_end_ asm("data_things_floor62_end_");
static const unsigned char *const data_things_floor62_start =
    (const unsigned char *const) (char*)&data_things_floor62_start_;
static const unsigned char *const data_things_floor62_end   =
    (const unsigned char *const) (char*)&data_things_floor62_end_;

extern unsigned char *data_things_floor63_start_ asm("data_things_floor63_start_");
extern unsigned char *data_things_floor63_end_ asm("data_things_floor63_end_");
static const unsigned char *const data_things_floor63_start =
    (const unsigned char *const) (char*)&data_things_floor63_start_;
static const unsigned char *const data_things_floor63_end   =
    (const unsigned char *const) (char*)&data_things_floor63_end_;

extern unsigned char *data_things_floor64_start_ asm("data_things_floor64_start_");
extern unsigned char *data_things_floor64_end_ asm("data_things_floor64_end_");
static const unsigned char *const data_things_floor64_start =
    (const unsigned char *const) (char*)&data_things_floor64_start_;
static const unsigned char *const data_things_floor64_end   =
    (const unsigned char *const) (char*)&data_things_floor64_end_;

extern unsigned char *data_things_floor65_start_ asm("data_things_floor65_start_");
extern unsigned char *data_things_floor65_end_ asm("data_things_floor65_end_");
static const unsigned char *const data_things_floor65_start =
    (const unsigned char *const) (char*)&data_things_floor65_start_;
static const unsigned char *const data_things_floor65_end   =
    (const unsigned char *const) (char*)&data_things_floor65_end_;

extern unsigned char *data_things_floor66_start_ asm("data_things_floor66_start_");
extern unsigned char *data_things_floor66_end_ asm("data_things_floor66_end_");
static const unsigned char *const data_things_floor66_start =
    (const unsigned char *const) (char*)&data_things_floor66_start_;
static const unsigned char *const data_things_floor66_end   =
    (const unsigned char *const) (char*)&data_things_floor66_end_;

extern unsigned char *data_things_floor67_start_ asm("data_things_floor67_start_");
extern unsigned char *data_things_floor67_end_ asm("data_things_floor67_end_");
static const unsigned char *const data_things_floor67_start =
    (const unsigned char *const) (char*)&data_things_floor67_start_;
static const unsigned char *const data_things_floor67_end   =
    (const unsigned char *const) (char*)&data_things_floor67_end_;

extern unsigned char *data_things_floor68_start_ asm("data_things_floor68_start_");
extern unsigned char *data_things_floor68_end_ asm("data_things_floor68_end_");
static const unsigned char *const data_things_floor68_start =
    (const unsigned char *const) (char*)&data_things_floor68_start_;
static const unsigned char *const data_things_floor68_end   =
    (const unsigned char *const) (char*)&data_things_floor68_end_;

extern unsigned char *data_things_floor7_start_ asm("data_things_floor7_start_");
extern unsigned char *data_things_floor7_end_ asm("data_things_floor7_end_");
static const unsigned char *const data_things_floor7_start =
    (const unsigned char *const) (char*)&data_things_floor7_start_;
static const unsigned char *const data_things_floor7_end   =
    (const unsigned char *const) (char*)&data_things_floor7_end_;

extern unsigned char *data_things_floor8_start_ asm("data_things_floor8_start_");
extern unsigned char *data_things_floor8_end_ asm("data_things_floor8_end_");
static const unsigned char *const data_things_floor8_start =
    (const unsigned char *const) (char*)&data_things_floor8_start_;
static const unsigned char *const data_things_floor8_end   =
    (const unsigned char *const) (char*)&data_things_floor8_end_;

extern unsigned char *data_things_floor9_start_ asm("data_things_floor9_start_");
extern unsigned char *data_things_floor9_end_ asm("data_things_floor9_end_");
static const unsigned char *const data_things_floor9_start =
    (const unsigned char *const) (char*)&data_things_floor9_start_;
static const unsigned char *const data_things_floor9_end   =
    (const unsigned char *const) (char*)&data_things_floor9_end_;

extern unsigned char *data_things_food_any_start_ asm("data_things_food_any_start_");
extern unsigned char *data_things_food_any_end_ asm("data_things_food_any_end_");
static const unsigned char *const data_things_food_any_start =
    (const unsigned char *const) (char*)&data_things_food_any_start_;
static const unsigned char *const data_things_food_any_end   =
    (const unsigned char *const) (char*)&data_things_food_any_end_;

extern unsigned char *data_things_gem1_start_ asm("data_things_gem1_start_");
extern unsigned char *data_things_gem1_end_ asm("data_things_gem1_end_");
static const unsigned char *const data_things_gem1_start =
    (const unsigned char *const) (char*)&data_things_gem1_start_;
static const unsigned char *const data_things_gem1_end   =
    (const unsigned char *const) (char*)&data_things_gem1_end_;

extern unsigned char *data_things_gem2_start_ asm("data_things_gem2_start_");
extern unsigned char *data_things_gem2_end_ asm("data_things_gem2_end_");
static const unsigned char *const data_things_gem2_start =
    (const unsigned char *const) (char*)&data_things_gem2_start_;
static const unsigned char *const data_things_gem2_end   =
    (const unsigned char *const) (char*)&data_things_gem2_end_;

extern unsigned char *data_things_gem3_start_ asm("data_things_gem3_start_");
extern unsigned char *data_things_gem3_end_ asm("data_things_gem3_end_");
static const unsigned char *const data_things_gem3_start =
    (const unsigned char *const) (char*)&data_things_gem3_start_;
static const unsigned char *const data_things_gem3_end   =
    (const unsigned char *const) (char*)&data_things_gem3_end_;

extern unsigned char *data_things_gem4_start_ asm("data_things_gem4_start_");
extern unsigned char *data_things_gem4_end_ asm("data_things_gem4_end_");
static const unsigned char *const data_things_gem4_start =
    (const unsigned char *const) (char*)&data_things_gem4_start_;
static const unsigned char *const data_things_gem4_end   =
    (const unsigned char *const) (char*)&data_things_gem4_end_;

extern unsigned char *data_things_gem5_start_ asm("data_things_gem5_start_");
extern unsigned char *data_things_gem5_end_ asm("data_things_gem5_end_");
static const unsigned char *const data_things_gem5_start =
    (const unsigned char *const) (char*)&data_things_gem5_start_;
static const unsigned char *const data_things_gem5_end   =
    (const unsigned char *const) (char*)&data_things_gem5_end_;

extern unsigned char *data_things_gem6_start_ asm("data_things_gem6_start_");
extern unsigned char *data_things_gem6_end_ asm("data_things_gem6_end_");
static const unsigned char *const data_things_gem6_start =
    (const unsigned char *const) (char*)&data_things_gem6_start_;
static const unsigned char *const data_things_gem6_end   =
    (const unsigned char *const) (char*)&data_things_gem6_end_;

extern unsigned char *data_things_gem7_start_ asm("data_things_gem7_start_");
extern unsigned char *data_things_gem7_end_ asm("data_things_gem7_end_");
static const unsigned char *const data_things_gem7_start =
    (const unsigned char *const) (char*)&data_things_gem7_start_;
static const unsigned char *const data_things_gem7_end   =
    (const unsigned char *const) (char*)&data_things_gem7_end_;

extern unsigned char *data_things_generator1_start_ asm("data_things_generator1_start_");
extern unsigned char *data_things_generator1_end_ asm("data_things_generator1_end_");
static const unsigned char *const data_things_generator1_start =
    (const unsigned char *const) (char*)&data_things_generator1_start_;
static const unsigned char *const data_things_generator1_end   =
    (const unsigned char *const) (char*)&data_things_generator1_end_;

extern unsigned char *data_things_generator5_start_ asm("data_things_generator5_start_");
extern unsigned char *data_things_generator5_end_ asm("data_things_generator5_end_");
static const unsigned char *const data_things_generator5_start =
    (const unsigned char *const) (char*)&data_things_generator5_start_;
static const unsigned char *const data_things_generator5_end   =
    (const unsigned char *const) (char*)&data_things_generator5_end_;

extern unsigned char *data_things_generator6_start_ asm("data_things_generator6_start_");
extern unsigned char *data_things_generator6_end_ asm("data_things_generator6_end_");
static const unsigned char *const data_things_generator6_start =
    (const unsigned char *const) (char*)&data_things_generator6_start_;
static const unsigned char *const data_things_generator6_end   =
    (const unsigned char *const) (char*)&data_things_generator6_end_;

extern unsigned char *data_things_generator7_start_ asm("data_things_generator7_start_");
extern unsigned char *data_things_generator7_end_ asm("data_things_generator7_end_");
static const unsigned char *const data_things_generator7_start =
    (const unsigned char *const) (char*)&data_things_generator7_start_;
static const unsigned char *const data_things_generator7_end   =
    (const unsigned char *const) (char*)&data_things_generator7_end_;

extern unsigned char *data_things_ghost1_start_ asm("data_things_ghost1_start_");
extern unsigned char *data_things_ghost1_end_ asm("data_things_ghost1_end_");
static const unsigned char *const data_things_ghost1_start =
    (const unsigned char *const) (char*)&data_things_ghost1_start_;
static const unsigned char *const data_things_ghost1_end   =
    (const unsigned char *const) (char*)&data_things_ghost1_end_;

extern unsigned char *data_things_ghost2_start_ asm("data_things_ghost2_start_");
extern unsigned char *data_things_ghost2_end_ asm("data_things_ghost2_end_");
static const unsigned char *const data_things_ghost2_start =
    (const unsigned char *const) (char*)&data_things_ghost2_start_;
static const unsigned char *const data_things_ghost2_end   =
    (const unsigned char *const) (char*)&data_things_ghost2_end_;

extern unsigned char *data_things_ghost3_start_ asm("data_things_ghost3_start_");
extern unsigned char *data_things_ghost3_end_ asm("data_things_ghost3_end_");
static const unsigned char *const data_things_ghost3_start =
    (const unsigned char *const) (char*)&data_things_ghost3_start_;
static const unsigned char *const data_things_ghost3_end   =
    (const unsigned char *const) (char*)&data_things_ghost3_end_;

extern unsigned char *data_things_ghost4_start_ asm("data_things_ghost4_start_");
extern unsigned char *data_things_ghost4_end_ asm("data_things_ghost4_end_");
static const unsigned char *const data_things_ghost4_start =
    (const unsigned char *const) (char*)&data_things_ghost4_start_;
static const unsigned char *const data_things_ghost4_end   =
    (const unsigned char *const) (char*)&data_things_ghost4_end_;

extern unsigned char *data_things_gobbler_start_ asm("data_things_gobbler_start_");
extern unsigned char *data_things_gobbler_end_ asm("data_things_gobbler_end_");
static const unsigned char *const data_things_gobbler_start =
    (const unsigned char *const) (char*)&data_things_gobbler_start_;
static const unsigned char *const data_things_gobbler_end   =
    (const unsigned char *const) (char*)&data_things_gobbler_end_;

extern unsigned char *data_things_gobblermob_start_ asm("data_things_gobblermob_start_");
extern unsigned char *data_things_gobblermob_end_ asm("data_things_gobblermob_end_");
static const unsigned char *const data_things_gobblermob_start =
    (const unsigned char *const) (char*)&data_things_gobblermob_start_;
static const unsigned char *const data_things_gobblermob_end   =
    (const unsigned char *const) (char*)&data_things_gobblermob_end_;

extern unsigned char *data_things_grass1_start_ asm("data_things_grass1_start_");
extern unsigned char *data_things_grass1_end_ asm("data_things_grass1_end_");
static const unsigned char *const data_things_grass1_start =
    (const unsigned char *const) (char*)&data_things_grass1_start_;
static const unsigned char *const data_things_grass1_end   =
    (const unsigned char *const) (char*)&data_things_grass1_end_;

extern unsigned char *data_things_heart_start_ asm("data_things_heart_start_");
extern unsigned char *data_things_heart_end_ asm("data_things_heart_end_");
static const unsigned char *const data_things_heart_start =
    (const unsigned char *const) (char*)&data_things_heart_start_;
static const unsigned char *const data_things_heart_end   =
    (const unsigned char *const) (char*)&data_things_heart_end_;

extern unsigned char *data_things_helmet1_start_ asm("data_things_helmet1_start_");
extern unsigned char *data_things_helmet1_end_ asm("data_things_helmet1_end_");
static const unsigned char *const data_things_helmet1_start =
    (const unsigned char *const) (char*)&data_things_helmet1_start_;
static const unsigned char *const data_things_helmet1_end   =
    (const unsigned char *const) (char*)&data_things_helmet1_end_;

extern unsigned char *data_things_helmet2_start_ asm("data_things_helmet2_start_");
extern unsigned char *data_things_helmet2_end_ asm("data_things_helmet2_end_");
static const unsigned char *const data_things_helmet2_start =
    (const unsigned char *const) (char*)&data_things_helmet2_start_;
static const unsigned char *const data_things_helmet2_end   =
    (const unsigned char *const) (char*)&data_things_helmet2_end_;

extern unsigned char *data_things_helmet3_start_ asm("data_things_helmet3_start_");
extern unsigned char *data_things_helmet3_end_ asm("data_things_helmet3_end_");
static const unsigned char *const data_things_helmet3_start =
    (const unsigned char *const) (char*)&data_things_helmet3_start_;
static const unsigned char *const data_things_helmet3_end   =
    (const unsigned char *const) (char*)&data_things_helmet3_end_;

extern unsigned char *data_things_helmet4_start_ asm("data_things_helmet4_start_");
extern unsigned char *data_things_helmet4_end_ asm("data_things_helmet4_end_");
static const unsigned char *const data_things_helmet4_start =
    (const unsigned char *const) (char*)&data_things_helmet4_start_;
static const unsigned char *const data_things_helmet4_end   =
    (const unsigned char *const) (char*)&data_things_helmet4_end_;

extern unsigned char *data_things_hit_miss_start_ asm("data_things_hit_miss_start_");
extern unsigned char *data_things_hit_miss_end_ asm("data_things_hit_miss_end_");
static const unsigned char *const data_things_hit_miss_start =
    (const unsigned char *const) (char*)&data_things_hit_miss_start_;
static const unsigned char *const data_things_hit_miss_end   =
    (const unsigned char *const) (char*)&data_things_hit_miss_end_;

extern unsigned char *data_things_hit_success_start_ asm("data_things_hit_success_start_");
extern unsigned char *data_things_hit_success_end_ asm("data_things_hit_success_end_");
static const unsigned char *const data_things_hit_success_start =
    (const unsigned char *const) (char*)&data_things_hit_success_start_;
static const unsigned char *const data_things_hit_success_end   =
    (const unsigned char *const) (char*)&data_things_hit_success_end_;

extern unsigned char *data_things_jesus_start_ asm("data_things_jesus_start_");
extern unsigned char *data_things_jesus_end_ asm("data_things_jesus_end_");
static const unsigned char *const data_things_jesus_start =
    (const unsigned char *const) (char*)&data_things_jesus_start_;
static const unsigned char *const data_things_jesus_end   =
    (const unsigned char *const) (char*)&data_things_jesus_end_;

extern unsigned char *data_things_jesus_cloud_start_ asm("data_things_jesus_cloud_start_");
extern unsigned char *data_things_jesus_cloud_end_ asm("data_things_jesus_cloud_end_");
static const unsigned char *const data_things_jesus_cloud_start =
    (const unsigned char *const) (char*)&data_things_jesus_cloud_start_;
static const unsigned char *const data_things_jesus_cloud_end   =
    (const unsigned char *const) (char*)&data_things_jesus_cloud_end_;

extern unsigned char *data_things_jesus_cloud_anim_start_ asm("data_things_jesus_cloud_anim_start_");
extern unsigned char *data_things_jesus_cloud_anim_end_ asm("data_things_jesus_cloud_anim_end_");
static const unsigned char *const data_things_jesus_cloud_anim_start =
    (const unsigned char *const) (char*)&data_things_jesus_cloud_anim_start_;
static const unsigned char *const data_things_jesus_cloud_anim_end   =
    (const unsigned char *const) (char*)&data_things_jesus_cloud_anim_end_;

extern unsigned char *data_things_juggernaut_start_ asm("data_things_juggernaut_start_");
extern unsigned char *data_things_juggernaut_end_ asm("data_things_juggernaut_end_");
static const unsigned char *const data_things_juggernaut_start =
    (const unsigned char *const) (char*)&data_things_juggernaut_start_;
static const unsigned char *const data_things_juggernaut_end   =
    (const unsigned char *const) (char*)&data_things_juggernaut_end_;

extern unsigned char *data_things_key_start_ asm("data_things_key_start_");
extern unsigned char *data_things_key_end_ asm("data_things_key_end_");
static const unsigned char *const data_things_key_start =
    (const unsigned char *const) (char*)&data_things_key_start_;
static const unsigned char *const data_things_key_end   =
    (const unsigned char *const) (char*)&data_things_key_end_;

extern unsigned char *data_things_keys2_start_ asm("data_things_keys2_start_");
extern unsigned char *data_things_keys2_end_ asm("data_things_keys2_end_");
static const unsigned char *const data_things_keys2_start =
    (const unsigned char *const) (char*)&data_things_keys2_start_;
static const unsigned char *const data_things_keys2_end   =
    (const unsigned char *const) (char*)&data_things_keys2_end_;

extern unsigned char *data_things_keys3_start_ asm("data_things_keys3_start_");
extern unsigned char *data_things_keys3_end_ asm("data_things_keys3_end_");
static const unsigned char *const data_things_keys3_start =
    (const unsigned char *const) (char*)&data_things_keys3_start_;
static const unsigned char *const data_things_keys3_end   =
    (const unsigned char *const) (char*)&data_things_keys3_end_;

extern unsigned char *data_things_lava1_start_ asm("data_things_lava1_start_");
extern unsigned char *data_things_lava1_end_ asm("data_things_lava1_end_");
static const unsigned char *const data_things_lava1_start =
    (const unsigned char *const) (char*)&data_things_lava1_start_;
static const unsigned char *const data_things_lava1_end   =
    (const unsigned char *const) (char*)&data_things_lava1_end_;

extern unsigned char *data_things_light_start_ asm("data_things_light_start_");
extern unsigned char *data_things_light_end_ asm("data_things_light_end_");
static const unsigned char *const data_things_light_start =
    (const unsigned char *const) (char*)&data_things_light_start_;
static const unsigned char *const data_things_light_end   =
    (const unsigned char *const) (char*)&data_things_light_end_;

extern unsigned char *data_things_magic1_start_ asm("data_things_magic1_start_");
extern unsigned char *data_things_magic1_end_ asm("data_things_magic1_end_");
static const unsigned char *const data_things_magic1_start =
    (const unsigned char *const) (char*)&data_things_magic1_start_;
static const unsigned char *const data_things_magic1_end   =
    (const unsigned char *const) (char*)&data_things_magic1_end_;

extern unsigned char *data_things_magic_cloud_start_ asm("data_things_magic_cloud_start_");
extern unsigned char *data_things_magic_cloud_end_ asm("data_things_magic_cloud_end_");
static const unsigned char *const data_things_magic_cloud_start =
    (const unsigned char *const) (char*)&data_things_magic_cloud_start_;
static const unsigned char *const data_things_magic_cloud_end   =
    (const unsigned char *const) (char*)&data_things_magic_cloud_end_;

extern unsigned char *data_things_med_explosion1_start_ asm("data_things_med_explosion1_start_");
extern unsigned char *data_things_med_explosion1_end_ asm("data_things_med_explosion1_end_");
static const unsigned char *const data_things_med_explosion1_start =
    (const unsigned char *const) (char*)&data_things_med_explosion1_start_;
static const unsigned char *const data_things_med_explosion1_end   =
    (const unsigned char *const) (char*)&data_things_med_explosion1_end_;

extern unsigned char *data_things_med_explosion2_start_ asm("data_things_med_explosion2_start_");
extern unsigned char *data_things_med_explosion2_end_ asm("data_things_med_explosion2_end_");
static const unsigned char *const data_things_med_explosion2_start =
    (const unsigned char *const) (char*)&data_things_med_explosion2_start_;
static const unsigned char *const data_things_med_explosion2_end   =
    (const unsigned char *const) (char*)&data_things_med_explosion2_end_;

extern unsigned char *data_things_med_explosion3_start_ asm("data_things_med_explosion3_start_");
extern unsigned char *data_things_med_explosion3_end_ asm("data_things_med_explosion3_end_");
static const unsigned char *const data_things_med_explosion3_start =
    (const unsigned char *const) (char*)&data_things_med_explosion3_start_;
static const unsigned char *const data_things_med_explosion3_end   =
    (const unsigned char *const) (char*)&data_things_med_explosion3_end_;

extern unsigned char *data_things_med_explosion4_start_ asm("data_things_med_explosion4_start_");
extern unsigned char *data_things_med_explosion4_end_ asm("data_things_med_explosion4_end_");
static const unsigned char *const data_things_med_explosion4_start =
    (const unsigned char *const) (char*)&data_things_med_explosion4_start_;
static const unsigned char *const data_things_med_explosion4_end   =
    (const unsigned char *const) (char*)&data_things_med_explosion4_end_;

extern unsigned char *data_things_mob_any_start_ asm("data_things_mob_any_start_");
extern unsigned char *data_things_mob_any_end_ asm("data_things_mob_any_end_");
static const unsigned char *const data_things_mob_any_start =
    (const unsigned char *const) (char*)&data_things_mob_any_start_;
static const unsigned char *const data_things_mob_any_end   =
    (const unsigned char *const) (char*)&data_things_mob_any_end_;

extern unsigned char *data_things_monst_any_start_ asm("data_things_monst_any_start_");
extern unsigned char *data_things_monst_any_end_ asm("data_things_monst_any_end_");
static const unsigned char *const data_things_monst_any_start =
    (const unsigned char *const) (char*)&data_things_monst_any_start_;
static const unsigned char *const data_things_monst_any_end   =
    (const unsigned char *const) (char*)&data_things_monst_any_end_;

extern unsigned char *data_things_mushman1_start_ asm("data_things_mushman1_start_");
extern unsigned char *data_things_mushman1_end_ asm("data_things_mushman1_end_");
static const unsigned char *const data_things_mushman1_start =
    (const unsigned char *const) (char*)&data_things_mushman1_start_;
static const unsigned char *const data_things_mushman1_end   =
    (const unsigned char *const) (char*)&data_things_mushman1_end_;

extern unsigned char *data_things_mushman2_start_ asm("data_things_mushman2_start_");
extern unsigned char *data_things_mushman2_end_ asm("data_things_mushman2_end_");
static const unsigned char *const data_things_mushman2_start =
    (const unsigned char *const) (char*)&data_things_mushman2_start_;
static const unsigned char *const data_things_mushman2_end   =
    (const unsigned char *const) (char*)&data_things_mushman2_end_;

extern unsigned char *data_things_mushman3_start_ asm("data_things_mushman3_start_");
extern unsigned char *data_things_mushman3_end_ asm("data_things_mushman3_end_");
static const unsigned char *const data_things_mushman3_start =
    (const unsigned char *const) (char*)&data_things_mushman3_start_;
static const unsigned char *const data_things_mushman3_end   =
    (const unsigned char *const) (char*)&data_things_mushman3_end_;

extern unsigned char *data_things_noentry_start_ asm("data_things_noentry_start_");
extern unsigned char *data_things_noentry_end_ asm("data_things_noentry_end_");
static const unsigned char *const data_things_noentry_start =
    (const unsigned char *const) (char*)&data_things_noentry_start_;
static const unsigned char *const data_things_noentry_end   =
    (const unsigned char *const) (char*)&data_things_noentry_end_;

extern unsigned char *data_things_orc1_start_ asm("data_things_orc1_start_");
extern unsigned char *data_things_orc1_end_ asm("data_things_orc1_end_");
static const unsigned char *const data_things_orc1_start =
    (const unsigned char *const) (char*)&data_things_orc1_start_;
static const unsigned char *const data_things_orc1_end   =
    (const unsigned char *const) (char*)&data_things_orc1_end_;

extern unsigned char *data_things_orc2_start_ asm("data_things_orc2_start_");
extern unsigned char *data_things_orc2_end_ asm("data_things_orc2_end_");
static const unsigned char *const data_things_orc2_start =
    (const unsigned char *const) (char*)&data_things_orc2_start_;
static const unsigned char *const data_things_orc2_end   =
    (const unsigned char *const) (char*)&data_things_orc2_end_;

extern unsigned char *data_things_orc3_start_ asm("data_things_orc3_start_");
extern unsigned char *data_things_orc3_end_ asm("data_things_orc3_end_");
static const unsigned char *const data_things_orc3_start =
    (const unsigned char *const) (char*)&data_things_orc3_start_;
static const unsigned char *const data_things_orc3_end   =
    (const unsigned char *const) (char*)&data_things_orc3_end_;

extern unsigned char *data_things_orc4_start_ asm("data_things_orc4_start_");
extern unsigned char *data_things_orc4_end_ asm("data_things_orc4_end_");
static const unsigned char *const data_things_orc4_start =
    (const unsigned char *const) (char*)&data_things_orc4_start_;
static const unsigned char *const data_things_orc4_end   =
    (const unsigned char *const) (char*)&data_things_orc4_end_;

extern unsigned char *data_things_orc5_start_ asm("data_things_orc5_start_");
extern unsigned char *data_things_orc5_end_ asm("data_things_orc5_end_");
static const unsigned char *const data_things_orc5_start =
    (const unsigned char *const) (char*)&data_things_orc5_start_;
static const unsigned char *const data_things_orc5_end   =
    (const unsigned char *const) (char*)&data_things_orc5_end_;

extern unsigned char *data_things_orcmob_start_ asm("data_things_orcmob_start_");
extern unsigned char *data_things_orcmob_end_ asm("data_things_orcmob_end_");
static const unsigned char *const data_things_orcmob_start =
    (const unsigned char *const) (char*)&data_things_orcmob_start_;
static const unsigned char *const data_things_orcmob_end   =
    (const unsigned char *const) (char*)&data_things_orcmob_end_;

extern unsigned char *data_things_pellets_start_ asm("data_things_pellets_start_");
extern unsigned char *data_things_pellets_end_ asm("data_things_pellets_end_");
static const unsigned char *const data_things_pellets_start =
    (const unsigned char *const) (char*)&data_things_pellets_start_;
static const unsigned char *const data_things_pellets_end   =
    (const unsigned char *const) (char*)&data_things_pellets_end_;

extern unsigned char *data_things_pizza_start_ asm("data_things_pizza_start_");
extern unsigned char *data_things_pizza_end_ asm("data_things_pizza_end_");
static const unsigned char *const data_things_pizza_start =
    (const unsigned char *const) (char*)&data_things_pizza_start_;
static const unsigned char *const data_things_pizza_end   =
    (const unsigned char *const) (char*)&data_things_pizza_end_;

extern unsigned char *data_things_plant_start_ asm("data_things_plant_start_");
extern unsigned char *data_things_plant_end_ asm("data_things_plant_end_");
static const unsigned char *const data_things_plant_start =
    (const unsigned char *const) (char*)&data_things_plant_start_;
static const unsigned char *const data_things_plant_end   =
    (const unsigned char *const) (char*)&data_things_plant_end_;

extern unsigned char *data_things_plantpod_start_ asm("data_things_plantpod_start_");
extern unsigned char *data_things_plantpod_end_ asm("data_things_plantpod_end_");
static const unsigned char *const data_things_plantpod_start =
    (const unsigned char *const) (char*)&data_things_plantpod_start_;
static const unsigned char *const data_things_plantpod_end   =
    (const unsigned char *const) (char*)&data_things_plantpod_end_;

extern unsigned char *data_things_plasmaball1_start_ asm("data_things_plasmaball1_start_");
extern unsigned char *data_things_plasmaball1_end_ asm("data_things_plasmaball1_end_");
static const unsigned char *const data_things_plasmaball1_start =
    (const unsigned char *const) (char*)&data_things_plasmaball1_start_;
static const unsigned char *const data_things_plasmaball1_end   =
    (const unsigned char *const) (char*)&data_things_plasmaball1_end_;

extern unsigned char *data_things_plasmaball2_start_ asm("data_things_plasmaball2_start_");
extern unsigned char *data_things_plasmaball2_end_ asm("data_things_plasmaball2_end_");
static const unsigned char *const data_things_plasmaball2_start =
    (const unsigned char *const) (char*)&data_things_plasmaball2_start_;
static const unsigned char *const data_things_plasmaball2_end   =
    (const unsigned char *const) (char*)&data_things_plasmaball2_end_;

extern unsigned char *data_things_poison1_start_ asm("data_things_poison1_start_");
extern unsigned char *data_things_poison1_end_ asm("data_things_poison1_end_");
static const unsigned char *const data_things_poison1_start =
    (const unsigned char *const) (char*)&data_things_poison1_start_;
static const unsigned char *const data_things_poison1_end   =
    (const unsigned char *const) (char*)&data_things_poison1_end_;

extern unsigned char *data_things_poison2_start_ asm("data_things_poison2_start_");
extern unsigned char *data_things_poison2_end_ asm("data_things_poison2_end_");
static const unsigned char *const data_things_poison2_start =
    (const unsigned char *const) (char*)&data_things_poison2_start_;
static const unsigned char *const data_things_poison2_end   =
    (const unsigned char *const) (char*)&data_things_poison2_end_;

extern unsigned char *data_things_potion_any_start_ asm("data_things_potion_any_start_");
extern unsigned char *data_things_potion_any_end_ asm("data_things_potion_any_end_");
static const unsigned char *const data_things_potion_any_start =
    (const unsigned char *const) (char*)&data_things_potion_any_start_;
static const unsigned char *const data_things_potion_any_end   =
    (const unsigned char *const) (char*)&data_things_potion_any_end_;

extern unsigned char *data_things_potion_cloudkill_start_ asm("data_things_potion_cloudkill_start_");
extern unsigned char *data_things_potion_cloudkill_end_ asm("data_things_potion_cloudkill_end_");
static const unsigned char *const data_things_potion_cloudkill_start =
    (const unsigned char *const) (char*)&data_things_potion_cloudkill_start_;
static const unsigned char *const data_things_potion_cloudkill_end   =
    (const unsigned char *const) (char*)&data_things_potion_cloudkill_end_;

extern unsigned char *data_things_potion_fire_start_ asm("data_things_potion_fire_start_");
extern unsigned char *data_things_potion_fire_end_ asm("data_things_potion_fire_end_");
static const unsigned char *const data_things_potion_fire_start =
    (const unsigned char *const) (char*)&data_things_potion_fire_start_;
static const unsigned char *const data_things_potion_fire_end   =
    (const unsigned char *const) (char*)&data_things_potion_fire_end_;

extern unsigned char *data_things_potion_jesus_start_ asm("data_things_potion_jesus_start_");
extern unsigned char *data_things_potion_jesus_end_ asm("data_things_potion_jesus_end_");
static const unsigned char *const data_things_potion_jesus_start =
    (const unsigned char *const) (char*)&data_things_potion_jesus_start_;
static const unsigned char *const data_things_potion_jesus_end   =
    (const unsigned char *const) (char*)&data_things_potion_jesus_end_;

extern unsigned char *data_things_potion_life_start_ asm("data_things_potion_life_start_");
extern unsigned char *data_things_potion_life_end_ asm("data_things_potion_life_end_");
static const unsigned char *const data_things_potion_life_start =
    (const unsigned char *const) (char*)&data_things_potion_life_start_;
static const unsigned char *const data_things_potion_life_end   =
    (const unsigned char *const) (char*)&data_things_potion_life_end_;

extern unsigned char *data_things_potion_monsticide_start_ asm("data_things_potion_monsticide_start_");
extern unsigned char *data_things_potion_monsticide_end_ asm("data_things_potion_monsticide_end_");
static const unsigned char *const data_things_potion_monsticide_start =
    (const unsigned char *const) (char*)&data_things_potion_monsticide_start_;
static const unsigned char *const data_things_potion_monsticide_end   =
    (const unsigned char *const) (char*)&data_things_potion_monsticide_end_;

extern unsigned char *data_things_potion_shield_start_ asm("data_things_potion_shield_start_");
extern unsigned char *data_things_potion_shield_end_ asm("data_things_potion_shield_end_");
static const unsigned char *const data_things_potion_shield_start =
    (const unsigned char *const) (char*)&data_things_potion_shield_start_;
static const unsigned char *const data_things_potion_shield_end   =
    (const unsigned char *const) (char*)&data_things_potion_shield_end_;

extern unsigned char *data_things_powerup1_start_ asm("data_things_powerup1_start_");
extern unsigned char *data_things_powerup1_end_ asm("data_things_powerup1_end_");
static const unsigned char *const data_things_powerup1_start =
    (const unsigned char *const) (char*)&data_things_powerup1_start_;
static const unsigned char *const data_things_powerup1_end   =
    (const unsigned char *const) (char*)&data_things_powerup1_end_;

extern unsigned char *data_things_ring1_start_ asm("data_things_ring1_start_");
extern unsigned char *data_things_ring1_end_ asm("data_things_ring1_end_");
static const unsigned char *const data_things_ring1_start =
    (const unsigned char *const) (char*)&data_things_ring1_start_;
static const unsigned char *const data_things_ring1_end   =
    (const unsigned char *const) (char*)&data_things_ring1_end_;

extern unsigned char *data_things_ring2_start_ asm("data_things_ring2_start_");
extern unsigned char *data_things_ring2_end_ asm("data_things_ring2_end_");
static const unsigned char *const data_things_ring2_start =
    (const unsigned char *const) (char*)&data_things_ring2_start_;
static const unsigned char *const data_things_ring2_end   =
    (const unsigned char *const) (char*)&data_things_ring2_end_;

extern unsigned char *data_things_ring3_start_ asm("data_things_ring3_start_");
extern unsigned char *data_things_ring3_end_ asm("data_things_ring3_end_");
static const unsigned char *const data_things_ring3_start =
    (const unsigned char *const) (char*)&data_things_ring3_start_;
static const unsigned char *const data_things_ring3_end   =
    (const unsigned char *const) (char*)&data_things_ring3_end_;

extern unsigned char *data_things_ring4_start_ asm("data_things_ring4_start_");
extern unsigned char *data_things_ring4_end_ asm("data_things_ring4_end_");
static const unsigned char *const data_things_ring4_start =
    (const unsigned char *const) (char*)&data_things_ring4_start_;
static const unsigned char *const data_things_ring4_end   =
    (const unsigned char *const) (char*)&data_things_ring4_end_;

extern unsigned char *data_things_ring5_start_ asm("data_things_ring5_start_");
extern unsigned char *data_things_ring5_end_ asm("data_things_ring5_end_");
static const unsigned char *const data_things_ring5_start =
    (const unsigned char *const) (char*)&data_things_ring5_start_;
static const unsigned char *const data_things_ring5_end   =
    (const unsigned char *const) (char*)&data_things_ring5_end_;

extern unsigned char *data_things_ring6_start_ asm("data_things_ring6_start_");
extern unsigned char *data_things_ring6_end_ asm("data_things_ring6_end_");
static const unsigned char *const data_things_ring6_start =
    (const unsigned char *const) (char*)&data_things_ring6_start_;
static const unsigned char *const data_things_ring6_end   =
    (const unsigned char *const) (char*)&data_things_ring6_end_;

extern unsigned char *data_things_ring_cloud_start_ asm("data_things_ring_cloud_start_");
extern unsigned char *data_things_ring_cloud_end_ asm("data_things_ring_cloud_end_");
static const unsigned char *const data_things_ring_cloud_start =
    (const unsigned char *const) (char*)&data_things_ring_cloud_start_;
static const unsigned char *const data_things_ring_cloud_end   =
    (const unsigned char *const) (char*)&data_things_ring_cloud_end_;

extern unsigned char *data_things_ring_cloud_anim_start_ asm("data_things_ring_cloud_anim_start_");
extern unsigned char *data_things_ring_cloud_anim_end_ asm("data_things_ring_cloud_anim_end_");
static const unsigned char *const data_things_ring_cloud_anim_start =
    (const unsigned char *const) (char*)&data_things_ring_cloud_anim_start_;
static const unsigned char *const data_things_ring_cloud_anim_end   =
    (const unsigned char *const) (char*)&data_things_ring_cloud_anim_end_;

extern unsigned char *data_things_rock1_start_ asm("data_things_rock1_start_");
extern unsigned char *data_things_rock1_end_ asm("data_things_rock1_end_");
static const unsigned char *const data_things_rock1_start =
    (const unsigned char *const) (char*)&data_things_rock1_start_;
static const unsigned char *const data_things_rock1_end   =
    (const unsigned char *const) (char*)&data_things_rock1_end_;

extern unsigned char *data_things_rock1a_start_ asm("data_things_rock1a_start_");
extern unsigned char *data_things_rock1a_end_ asm("data_things_rock1a_end_");
static const unsigned char *const data_things_rock1a_start =
    (const unsigned char *const) (char*)&data_things_rock1a_start_;
static const unsigned char *const data_things_rock1a_end   =
    (const unsigned char *const) (char*)&data_things_rock1a_end_;

extern unsigned char *data_things_rock2_start_ asm("data_things_rock2_start_");
extern unsigned char *data_things_rock2_end_ asm("data_things_rock2_end_");
static const unsigned char *const data_things_rock2_start =
    (const unsigned char *const) (char*)&data_things_rock2_start_;
static const unsigned char *const data_things_rock2_end   =
    (const unsigned char *const) (char*)&data_things_rock2_end_;

extern unsigned char *data_things_rock2a_start_ asm("data_things_rock2a_start_");
extern unsigned char *data_things_rock2a_end_ asm("data_things_rock2a_end_");
static const unsigned char *const data_things_rock2a_start =
    (const unsigned char *const) (char*)&data_things_rock2a_start_;
static const unsigned char *const data_things_rock2a_end   =
    (const unsigned char *const) (char*)&data_things_rock2a_end_;

extern unsigned char *data_things_rock3_start_ asm("data_things_rock3_start_");
extern unsigned char *data_things_rock3_end_ asm("data_things_rock3_end_");
static const unsigned char *const data_things_rock3_start =
    (const unsigned char *const) (char*)&data_things_rock3_start_;
static const unsigned char *const data_things_rock3_end   =
    (const unsigned char *const) (char*)&data_things_rock3_end_;

extern unsigned char *data_things_rock3a_start_ asm("data_things_rock3a_start_");
extern unsigned char *data_things_rock3a_end_ asm("data_things_rock3a_end_");
static const unsigned char *const data_things_rock3a_start =
    (const unsigned char *const) (char*)&data_things_rock3a_start_;
static const unsigned char *const data_things_rock3a_end   =
    (const unsigned char *const) (char*)&data_things_rock3a_end_;

extern unsigned char *data_things_rock4_start_ asm("data_things_rock4_start_");
extern unsigned char *data_things_rock4_end_ asm("data_things_rock4_end_");
static const unsigned char *const data_things_rock4_start =
    (const unsigned char *const) (char*)&data_things_rock4_start_;
static const unsigned char *const data_things_rock4_end   =
    (const unsigned char *const) (char*)&data_things_rock4_end_;

extern unsigned char *data_things_rock4a_start_ asm("data_things_rock4a_start_");
extern unsigned char *data_things_rock4a_end_ asm("data_things_rock4a_end_");
static const unsigned char *const data_things_rock4a_start =
    (const unsigned char *const) (char*)&data_things_rock4a_start_;
static const unsigned char *const data_things_rock4a_end   =
    (const unsigned char *const) (char*)&data_things_rock4a_end_;

extern unsigned char *data_things_rock5_start_ asm("data_things_rock5_start_");
extern unsigned char *data_things_rock5_end_ asm("data_things_rock5_end_");
static const unsigned char *const data_things_rock5_start =
    (const unsigned char *const) (char*)&data_things_rock5_start_;
static const unsigned char *const data_things_rock5_end   =
    (const unsigned char *const) (char*)&data_things_rock5_end_;

extern unsigned char *data_things_rock5a_start_ asm("data_things_rock5a_start_");
extern unsigned char *data_things_rock5a_end_ asm("data_things_rock5a_end_");
static const unsigned char *const data_things_rock5a_start =
    (const unsigned char *const) (char*)&data_things_rock5a_start_;
static const unsigned char *const data_things_rock5a_end   =
    (const unsigned char *const) (char*)&data_things_rock5a_end_;

extern unsigned char *data_things_rock6_start_ asm("data_things_rock6_start_");
extern unsigned char *data_things_rock6_end_ asm("data_things_rock6_end_");
static const unsigned char *const data_things_rock6_start =
    (const unsigned char *const) (char*)&data_things_rock6_start_;
static const unsigned char *const data_things_rock6_end   =
    (const unsigned char *const) (char*)&data_things_rock6_end_;

extern unsigned char *data_things_rock6a_start_ asm("data_things_rock6a_start_");
extern unsigned char *data_things_rock6a_end_ asm("data_things_rock6a_end_");
static const unsigned char *const data_things_rock6a_start =
    (const unsigned char *const) (char*)&data_things_rock6a_start_;
static const unsigned char *const data_things_rock6a_end   =
    (const unsigned char *const) (char*)&data_things_rock6a_end_;

extern unsigned char *data_things_rock7_start_ asm("data_things_rock7_start_");
extern unsigned char *data_things_rock7_end_ asm("data_things_rock7_end_");
static const unsigned char *const data_things_rock7_start =
    (const unsigned char *const) (char*)&data_things_rock7_start_;
static const unsigned char *const data_things_rock7_end   =
    (const unsigned char *const) (char*)&data_things_rock7_end_;

extern unsigned char *data_things_rock7a_start_ asm("data_things_rock7a_start_");
extern unsigned char *data_things_rock7a_end_ asm("data_things_rock7a_end_");
static const unsigned char *const data_things_rock7a_start =
    (const unsigned char *const) (char*)&data_things_rock7a_start_;
static const unsigned char *const data_things_rock7a_end   =
    (const unsigned char *const) (char*)&data_things_rock7a_end_;

extern unsigned char *data_things_sawblade1_start_ asm("data_things_sawblade1_start_");
extern unsigned char *data_things_sawblade1_end_ asm("data_things_sawblade1_end_");
static const unsigned char *const data_things_sawblade1_start =
    (const unsigned char *const) (char*)&data_things_sawblade1_start_;
static const unsigned char *const data_things_sawblade1_end   =
    (const unsigned char *const) (char*)&data_things_sawblade1_end_;

extern unsigned char *data_things_sawblade2_start_ asm("data_things_sawblade2_start_");
extern unsigned char *data_things_sawblade2_end_ asm("data_things_sawblade2_end_");
static const unsigned char *const data_things_sawblade2_start =
    (const unsigned char *const) (char*)&data_things_sawblade2_start_;
static const unsigned char *const data_things_sawblade2_end   =
    (const unsigned char *const) (char*)&data_things_sawblade2_end_;

extern unsigned char *data_things_sawblade3_start_ asm("data_things_sawblade3_start_");
extern unsigned char *data_things_sawblade3_end_ asm("data_things_sawblade3_end_");
static const unsigned char *const data_things_sawblade3_start =
    (const unsigned char *const) (char*)&data_things_sawblade3_start_;
static const unsigned char *const data_things_sawblade3_end   =
    (const unsigned char *const) (char*)&data_things_sawblade3_end_;

extern unsigned char *data_things_sawblade4_start_ asm("data_things_sawblade4_start_");
extern unsigned char *data_things_sawblade4_end_ asm("data_things_sawblade4_end_");
static const unsigned char *const data_things_sawblade4_start =
    (const unsigned char *const) (char*)&data_things_sawblade4_start_;
static const unsigned char *const data_things_sawblade4_end   =
    (const unsigned char *const) (char*)&data_things_sawblade4_end_;

extern unsigned char *data_things_sawblade5_start_ asm("data_things_sawblade5_start_");
extern unsigned char *data_things_sawblade5_end_ asm("data_things_sawblade5_end_");
static const unsigned char *const data_things_sawblade5_start =
    (const unsigned char *const) (char*)&data_things_sawblade5_start_;
static const unsigned char *const data_things_sawblade5_end   =
    (const unsigned char *const) (char*)&data_things_sawblade5_end_;

extern unsigned char *data_things_scythe1_start_ asm("data_things_scythe1_start_");
extern unsigned char *data_things_scythe1_end_ asm("data_things_scythe1_end_");
static const unsigned char *const data_things_scythe1_start =
    (const unsigned char *const) (char*)&data_things_scythe1_start_;
static const unsigned char *const data_things_scythe1_end   =
    (const unsigned char *const) (char*)&data_things_scythe1_end_;

extern unsigned char *data_things_scythe1_anim_start_ asm("data_things_scythe1_anim_start_");
extern unsigned char *data_things_scythe1_anim_end_ asm("data_things_scythe1_anim_end_");
static const unsigned char *const data_things_scythe1_anim_start =
    (const unsigned char *const) (char*)&data_things_scythe1_anim_start_;
static const unsigned char *const data_things_scythe1_anim_end   =
    (const unsigned char *const) (char*)&data_things_scythe1_anim_end_;

extern unsigned char *data_things_shield1_start_ asm("data_things_shield1_start_");
extern unsigned char *data_things_shield1_end_ asm("data_things_shield1_end_");
static const unsigned char *const data_things_shield1_start =
    (const unsigned char *const) (char*)&data_things_shield1_start_;
static const unsigned char *const data_things_shield1_end   =
    (const unsigned char *const) (char*)&data_things_shield1_end_;

extern unsigned char *data_things_shield1_anim_start_ asm("data_things_shield1_anim_start_");
extern unsigned char *data_things_shield1_anim_end_ asm("data_things_shield1_anim_end_");
static const unsigned char *const data_things_shield1_anim_start =
    (const unsigned char *const) (char*)&data_things_shield1_anim_start_;
static const unsigned char *const data_things_shield1_anim_end   =
    (const unsigned char *const) (char*)&data_things_shield1_anim_end_;

extern unsigned char *data_things_shop_floor1_start_ asm("data_things_shop_floor1_start_");
extern unsigned char *data_things_shop_floor1_end_ asm("data_things_shop_floor1_end_");
static const unsigned char *const data_things_shop_floor1_start =
    (const unsigned char *const) (char*)&data_things_shop_floor1_start_;
static const unsigned char *const data_things_shop_floor1_end   =
    (const unsigned char *const) (char*)&data_things_shop_floor1_end_;

extern unsigned char *data_things_shopkeeper_start_ asm("data_things_shopkeeper_start_");
extern unsigned char *data_things_shopkeeper_end_ asm("data_things_shopkeeper_end_");
static const unsigned char *const data_things_shopkeeper_start =
    (const unsigned char *const) (char*)&data_things_shopkeeper_start_;
static const unsigned char *const data_things_shopkeeper_end   =
    (const unsigned char *const) (char*)&data_things_shopkeeper_end_;

extern unsigned char *data_things_shotgun_start_ asm("data_things_shotgun_start_");
extern unsigned char *data_things_shotgun_end_ asm("data_things_shotgun_end_");
static const unsigned char *const data_things_shotgun_start =
    (const unsigned char *const) (char*)&data_things_shotgun_start_;
static const unsigned char *const data_things_shotgun_end   =
    (const unsigned char *const) (char*)&data_things_shotgun_end_;

extern unsigned char *data_things_shotgun_anim_start_ asm("data_things_shotgun_anim_start_");
extern unsigned char *data_things_shotgun_anim_end_ asm("data_things_shotgun_anim_end_");
static const unsigned char *const data_things_shotgun_anim_start =
    (const unsigned char *const) (char*)&data_things_shotgun_anim_start_;
static const unsigned char *const data_things_shotgun_anim_end   =
    (const unsigned char *const) (char*)&data_things_shotgun_anim_end_;

extern unsigned char *data_things_silkball_start_ asm("data_things_silkball_start_");
extern unsigned char *data_things_silkball_end_ asm("data_things_silkball_end_");
static const unsigned char *const data_things_silkball_start =
    (const unsigned char *const) (char*)&data_things_silkball_start_;
static const unsigned char *const data_things_silkball_end   =
    (const unsigned char *const) (char*)&data_things_silkball_end_;

extern unsigned char *data_things_skeleton1_start_ asm("data_things_skeleton1_start_");
extern unsigned char *data_things_skeleton1_end_ asm("data_things_skeleton1_end_");
static const unsigned char *const data_things_skeleton1_start =
    (const unsigned char *const) (char*)&data_things_skeleton1_start_;
static const unsigned char *const data_things_skeleton1_end   =
    (const unsigned char *const) (char*)&data_things_skeleton1_end_;

extern unsigned char *data_things_skull1_start_ asm("data_things_skull1_start_");
extern unsigned char *data_things_skull1_end_ asm("data_things_skull1_end_");
static const unsigned char *const data_things_skull1_start =
    (const unsigned char *const) (char*)&data_things_skull1_start_;
static const unsigned char *const data_things_skull1_end   =
    (const unsigned char *const) (char*)&data_things_skull1_end_;

extern unsigned char *data_things_skull2_start_ asm("data_things_skull2_start_");
extern unsigned char *data_things_skull2_end_ asm("data_things_skull2_end_");
static const unsigned char *const data_things_skull2_start =
    (const unsigned char *const) (char*)&data_things_skull2_start_;
static const unsigned char *const data_things_skull2_end   =
    (const unsigned char *const) (char*)&data_things_skull2_end_;

extern unsigned char *data_things_slime1_start_ asm("data_things_slime1_start_");
extern unsigned char *data_things_slime1_end_ asm("data_things_slime1_end_");
static const unsigned char *const data_things_slime1_start =
    (const unsigned char *const) (char*)&data_things_slime1_start_;
static const unsigned char *const data_things_slime1_end   =
    (const unsigned char *const) (char*)&data_things_slime1_end_;

extern unsigned char *data_things_slime2_start_ asm("data_things_slime2_start_");
extern unsigned char *data_things_slime2_end_ asm("data_things_slime2_end_");
static const unsigned char *const data_things_slime2_start =
    (const unsigned char *const) (char*)&data_things_slime2_start_;
static const unsigned char *const data_things_slime2_end   =
    (const unsigned char *const) (char*)&data_things_slime2_end_;

extern unsigned char *data_things_slime3_start_ asm("data_things_slime3_start_");
extern unsigned char *data_things_slime3_end_ asm("data_things_slime3_end_");
static const unsigned char *const data_things_slime3_start =
    (const unsigned char *const) (char*)&data_things_slime3_start_;
static const unsigned char *const data_things_slime3_end   =
    (const unsigned char *const) (char*)&data_things_slime3_end_;

extern unsigned char *data_things_slime4_start_ asm("data_things_slime4_start_");
extern unsigned char *data_things_slime4_end_ asm("data_things_slime4_end_");
static const unsigned char *const data_things_slime4_start =
    (const unsigned char *const) (char*)&data_things_slime4_start_;
static const unsigned char *const data_things_slime4_end   =
    (const unsigned char *const) (char*)&data_things_slime4_end_;

extern unsigned char *data_things_slimeball_start_ asm("data_things_slimeball_start_");
extern unsigned char *data_things_slimeball_end_ asm("data_things_slimeball_end_");
static const unsigned char *const data_things_slimeball_start =
    (const unsigned char *const) (char*)&data_things_slimeball_start_;
static const unsigned char *const data_things_slimeball_end   =
    (const unsigned char *const) (char*)&data_things_slimeball_end_;

extern unsigned char *data_things_small_explosion1_start_ asm("data_things_small_explosion1_start_");
extern unsigned char *data_things_small_explosion1_end_ asm("data_things_small_explosion1_end_");
static const unsigned char *const data_things_small_explosion1_start =
    (const unsigned char *const) (char*)&data_things_small_explosion1_start_;
static const unsigned char *const data_things_small_explosion1_end   =
    (const unsigned char *const) (char*)&data_things_small_explosion1_end_;

extern unsigned char *data_things_small_explosion2_start_ asm("data_things_small_explosion2_start_");
extern unsigned char *data_things_small_explosion2_end_ asm("data_things_small_explosion2_end_");
static const unsigned char *const data_things_small_explosion2_start =
    (const unsigned char *const) (char*)&data_things_small_explosion2_start_;
static const unsigned char *const data_things_small_explosion2_end   =
    (const unsigned char *const) (char*)&data_things_small_explosion2_end_;

extern unsigned char *data_things_small_explosion3_start_ asm("data_things_small_explosion3_start_");
extern unsigned char *data_things_small_explosion3_end_ asm("data_things_small_explosion3_end_");
static const unsigned char *const data_things_small_explosion3_start =
    (const unsigned char *const) (char*)&data_things_small_explosion3_start_;
static const unsigned char *const data_things_small_explosion3_end   =
    (const unsigned char *const) (char*)&data_things_small_explosion3_end_;

extern unsigned char *data_things_small_explosion4_start_ asm("data_things_small_explosion4_start_");
extern unsigned char *data_things_small_explosion4_end_ asm("data_things_small_explosion4_end_");
static const unsigned char *const data_things_small_explosion4_start =
    (const unsigned char *const) (char*)&data_things_small_explosion4_start_;
static const unsigned char *const data_things_small_explosion4_end   =
    (const unsigned char *const) (char*)&data_things_small_explosion4_end_;

extern unsigned char *data_things_sorceror_start_ asm("data_things_sorceror_start_");
extern unsigned char *data_things_sorceror_end_ asm("data_things_sorceror_end_");
static const unsigned char *const data_things_sorceror_start =
    (const unsigned char *const) (char*)&data_things_sorceror_start_;
static const unsigned char *const data_things_sorceror_end   =
    (const unsigned char *const) (char*)&data_things_sorceror_end_;

extern unsigned char *data_things_sorcerormob_start_ asm("data_things_sorcerormob_start_");
extern unsigned char *data_things_sorcerormob_end_ asm("data_things_sorcerormob_end_");
static const unsigned char *const data_things_sorcerormob_start =
    (const unsigned char *const) (char*)&data_things_sorcerormob_start_;
static const unsigned char *const data_things_sorcerormob_end   =
    (const unsigned char *const) (char*)&data_things_sorcerormob_end_;

extern unsigned char *data_things_spam_start_ asm("data_things_spam_start_");
extern unsigned char *data_things_spam_end_ asm("data_things_spam_end_");
static const unsigned char *const data_things_spam_start =
    (const unsigned char *const) (char*)&data_things_spam_start_;
static const unsigned char *const data_things_spam_end   =
    (const unsigned char *const) (char*)&data_things_spam_end_;

extern unsigned char *data_things_sparkle_start_ asm("data_things_sparkle_start_");
extern unsigned char *data_things_sparkle_end_ asm("data_things_sparkle_end_");
static const unsigned char *const data_things_sparkle_start =
    (const unsigned char *const) (char*)&data_things_sparkle_start_;
static const unsigned char *const data_things_sparkle_end   =
    (const unsigned char *const) (char*)&data_things_sparkle_end_;

extern unsigned char *data_things_spider1_start_ asm("data_things_spider1_start_");
extern unsigned char *data_things_spider1_end_ asm("data_things_spider1_end_");
static const unsigned char *const data_things_spider1_start =
    (const unsigned char *const) (char*)&data_things_spider1_start_;
static const unsigned char *const data_things_spider1_end   =
    (const unsigned char *const) (char*)&data_things_spider1_end_;

extern unsigned char *data_things_spider2_start_ asm("data_things_spider2_start_");
extern unsigned char *data_things_spider2_end_ asm("data_things_spider2_end_");
static const unsigned char *const data_things_spider2_start =
    (const unsigned char *const) (char*)&data_things_spider2_start_;
static const unsigned char *const data_things_spider2_end   =
    (const unsigned char *const) (char*)&data_things_spider2_end_;

extern unsigned char *data_things_squidling1_start_ asm("data_things_squidling1_start_");
extern unsigned char *data_things_squidling1_end_ asm("data_things_squidling1_end_");
static const unsigned char *const data_things_squidling1_start =
    (const unsigned char *const) (char*)&data_things_squidling1_start_;
static const unsigned char *const data_things_squidling1_end   =
    (const unsigned char *const) (char*)&data_things_squidling1_end_;

extern unsigned char *data_things_squidling2_start_ asm("data_things_squidling2_start_");
extern unsigned char *data_things_squidling2_end_ asm("data_things_squidling2_end_");
static const unsigned char *const data_things_squidling2_start =
    (const unsigned char *const) (char*)&data_things_squidling2_start_;
static const unsigned char *const data_things_squidling2_end   =
    (const unsigned char *const) (char*)&data_things_squidling2_end_;

extern unsigned char *data_things_stick1_start_ asm("data_things_stick1_start_");
extern unsigned char *data_things_stick1_end_ asm("data_things_stick1_end_");
static const unsigned char *const data_things_stick1_start =
    (const unsigned char *const) (char*)&data_things_stick1_start_;
static const unsigned char *const data_things_stick1_end   =
    (const unsigned char *const) (char*)&data_things_stick1_end_;

extern unsigned char *data_things_stick1_anim_start_ asm("data_things_stick1_anim_start_");
extern unsigned char *data_things_stick1_anim_end_ asm("data_things_stick1_anim_end_");
static const unsigned char *const data_things_stick1_anim_start =
    (const unsigned char *const) (char*)&data_things_stick1_anim_start_;
static const unsigned char *const data_things_stick1_anim_end   =
    (const unsigned char *const) (char*)&data_things_stick1_anim_end_;

extern unsigned char *data_things_stick2_start_ asm("data_things_stick2_start_");
extern unsigned char *data_things_stick2_end_ asm("data_things_stick2_end_");
static const unsigned char *const data_things_stick2_start =
    (const unsigned char *const) (char*)&data_things_stick2_start_;
static const unsigned char *const data_things_stick2_end   =
    (const unsigned char *const) (char*)&data_things_stick2_end_;

extern unsigned char *data_things_stick2_anim_start_ asm("data_things_stick2_anim_start_");
extern unsigned char *data_things_stick2_anim_end_ asm("data_things_stick2_anim_end_");
static const unsigned char *const data_things_stick2_anim_start =
    (const unsigned char *const) (char*)&data_things_stick2_anim_start_;
static const unsigned char *const data_things_stick2_anim_end   =
    (const unsigned char *const) (char*)&data_things_stick2_anim_end_;

extern unsigned char *data_things_stickyslime_start_ asm("data_things_stickyslime_start_");
extern unsigned char *data_things_stickyslime_end_ asm("data_things_stickyslime_end_");
static const unsigned char *const data_things_stickyslime_start =
    (const unsigned char *const) (char*)&data_things_stickyslime_start_;
static const unsigned char *const data_things_stickyslime_end   =
    (const unsigned char *const) (char*)&data_things_stickyslime_end_;

extern unsigned char *data_things_sword1_start_ asm("data_things_sword1_start_");
extern unsigned char *data_things_sword1_end_ asm("data_things_sword1_end_");
static const unsigned char *const data_things_sword1_start =
    (const unsigned char *const) (char*)&data_things_sword1_start_;
static const unsigned char *const data_things_sword1_end   =
    (const unsigned char *const) (char*)&data_things_sword1_end_;

extern unsigned char *data_things_sword10_start_ asm("data_things_sword10_start_");
extern unsigned char *data_things_sword10_end_ asm("data_things_sword10_end_");
static const unsigned char *const data_things_sword10_start =
    (const unsigned char *const) (char*)&data_things_sword10_start_;
static const unsigned char *const data_things_sword10_end   =
    (const unsigned char *const) (char*)&data_things_sword10_end_;

extern unsigned char *data_things_sword10_anim_start_ asm("data_things_sword10_anim_start_");
extern unsigned char *data_things_sword10_anim_end_ asm("data_things_sword10_anim_end_");
static const unsigned char *const data_things_sword10_anim_start =
    (const unsigned char *const) (char*)&data_things_sword10_anim_start_;
static const unsigned char *const data_things_sword10_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword10_anim_end_;

extern unsigned char *data_things_sword1_anim_start_ asm("data_things_sword1_anim_start_");
extern unsigned char *data_things_sword1_anim_end_ asm("data_things_sword1_anim_end_");
static const unsigned char *const data_things_sword1_anim_start =
    (const unsigned char *const) (char*)&data_things_sword1_anim_start_;
static const unsigned char *const data_things_sword1_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword1_anim_end_;

extern unsigned char *data_things_sword2_start_ asm("data_things_sword2_start_");
extern unsigned char *data_things_sword2_end_ asm("data_things_sword2_end_");
static const unsigned char *const data_things_sword2_start =
    (const unsigned char *const) (char*)&data_things_sword2_start_;
static const unsigned char *const data_things_sword2_end   =
    (const unsigned char *const) (char*)&data_things_sword2_end_;

extern unsigned char *data_things_sword2_anim_start_ asm("data_things_sword2_anim_start_");
extern unsigned char *data_things_sword2_anim_end_ asm("data_things_sword2_anim_end_");
static const unsigned char *const data_things_sword2_anim_start =
    (const unsigned char *const) (char*)&data_things_sword2_anim_start_;
static const unsigned char *const data_things_sword2_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword2_anim_end_;

extern unsigned char *data_things_sword3_start_ asm("data_things_sword3_start_");
extern unsigned char *data_things_sword3_end_ asm("data_things_sword3_end_");
static const unsigned char *const data_things_sword3_start =
    (const unsigned char *const) (char*)&data_things_sword3_start_;
static const unsigned char *const data_things_sword3_end   =
    (const unsigned char *const) (char*)&data_things_sword3_end_;

extern unsigned char *data_things_sword3_anim_start_ asm("data_things_sword3_anim_start_");
extern unsigned char *data_things_sword3_anim_end_ asm("data_things_sword3_anim_end_");
static const unsigned char *const data_things_sword3_anim_start =
    (const unsigned char *const) (char*)&data_things_sword3_anim_start_;
static const unsigned char *const data_things_sword3_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword3_anim_end_;

extern unsigned char *data_things_sword4_start_ asm("data_things_sword4_start_");
extern unsigned char *data_things_sword4_end_ asm("data_things_sword4_end_");
static const unsigned char *const data_things_sword4_start =
    (const unsigned char *const) (char*)&data_things_sword4_start_;
static const unsigned char *const data_things_sword4_end   =
    (const unsigned char *const) (char*)&data_things_sword4_end_;

extern unsigned char *data_things_sword4_anim_start_ asm("data_things_sword4_anim_start_");
extern unsigned char *data_things_sword4_anim_end_ asm("data_things_sword4_anim_end_");
static const unsigned char *const data_things_sword4_anim_start =
    (const unsigned char *const) (char*)&data_things_sword4_anim_start_;
static const unsigned char *const data_things_sword4_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword4_anim_end_;

extern unsigned char *data_things_sword5_start_ asm("data_things_sword5_start_");
extern unsigned char *data_things_sword5_end_ asm("data_things_sword5_end_");
static const unsigned char *const data_things_sword5_start =
    (const unsigned char *const) (char*)&data_things_sword5_start_;
static const unsigned char *const data_things_sword5_end   =
    (const unsigned char *const) (char*)&data_things_sword5_end_;

extern unsigned char *data_things_sword5_anim_start_ asm("data_things_sword5_anim_start_");
extern unsigned char *data_things_sword5_anim_end_ asm("data_things_sword5_anim_end_");
static const unsigned char *const data_things_sword5_anim_start =
    (const unsigned char *const) (char*)&data_things_sword5_anim_start_;
static const unsigned char *const data_things_sword5_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword5_anim_end_;

extern unsigned char *data_things_sword6_start_ asm("data_things_sword6_start_");
extern unsigned char *data_things_sword6_end_ asm("data_things_sword6_end_");
static const unsigned char *const data_things_sword6_start =
    (const unsigned char *const) (char*)&data_things_sword6_start_;
static const unsigned char *const data_things_sword6_end   =
    (const unsigned char *const) (char*)&data_things_sword6_end_;

extern unsigned char *data_things_sword6_anim_start_ asm("data_things_sword6_anim_start_");
extern unsigned char *data_things_sword6_anim_end_ asm("data_things_sword6_anim_end_");
static const unsigned char *const data_things_sword6_anim_start =
    (const unsigned char *const) (char*)&data_things_sword6_anim_start_;
static const unsigned char *const data_things_sword6_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword6_anim_end_;

extern unsigned char *data_things_sword7_start_ asm("data_things_sword7_start_");
extern unsigned char *data_things_sword7_end_ asm("data_things_sword7_end_");
static const unsigned char *const data_things_sword7_start =
    (const unsigned char *const) (char*)&data_things_sword7_start_;
static const unsigned char *const data_things_sword7_end   =
    (const unsigned char *const) (char*)&data_things_sword7_end_;

extern unsigned char *data_things_sword7_anim_start_ asm("data_things_sword7_anim_start_");
extern unsigned char *data_things_sword7_anim_end_ asm("data_things_sword7_anim_end_");
static const unsigned char *const data_things_sword7_anim_start =
    (const unsigned char *const) (char*)&data_things_sword7_anim_start_;
static const unsigned char *const data_things_sword7_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword7_anim_end_;

extern unsigned char *data_things_sword8_start_ asm("data_things_sword8_start_");
extern unsigned char *data_things_sword8_end_ asm("data_things_sword8_end_");
static const unsigned char *const data_things_sword8_start =
    (const unsigned char *const) (char*)&data_things_sword8_start_;
static const unsigned char *const data_things_sword8_end   =
    (const unsigned char *const) (char*)&data_things_sword8_end_;

extern unsigned char *data_things_sword8_anim_start_ asm("data_things_sword8_anim_start_");
extern unsigned char *data_things_sword8_anim_end_ asm("data_things_sword8_anim_end_");
static const unsigned char *const data_things_sword8_anim_start =
    (const unsigned char *const) (char*)&data_things_sword8_anim_start_;
static const unsigned char *const data_things_sword8_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword8_anim_end_;

extern unsigned char *data_things_sword9_start_ asm("data_things_sword9_start_");
extern unsigned char *data_things_sword9_end_ asm("data_things_sword9_end_");
static const unsigned char *const data_things_sword9_start =
    (const unsigned char *const) (char*)&data_things_sword9_start_;
static const unsigned char *const data_things_sword9_end   =
    (const unsigned char *const) (char*)&data_things_sword9_end_;

extern unsigned char *data_things_sword9_anim_start_ asm("data_things_sword9_anim_start_");
extern unsigned char *data_things_sword9_anim_end_ asm("data_things_sword9_anim_end_");
static const unsigned char *const data_things_sword9_anim_start =
    (const unsigned char *const) (char*)&data_things_sword9_anim_start_;
static const unsigned char *const data_things_sword9_anim_end   =
    (const unsigned char *const) (char*)&data_things_sword9_anim_end_;

extern unsigned char *data_things_teleport1_start_ asm("data_things_teleport1_start_");
extern unsigned char *data_things_teleport1_end_ asm("data_things_teleport1_end_");
static const unsigned char *const data_things_teleport1_start =
    (const unsigned char *const) (char*)&data_things_teleport1_start_;
static const unsigned char *const data_things_teleport1_end   =
    (const unsigned char *const) (char*)&data_things_teleport1_end_;

extern unsigned char *data_things_torch_start_ asm("data_things_torch_start_");
extern unsigned char *data_things_torch_end_ asm("data_things_torch_end_");
static const unsigned char *const data_things_torch_start =
    (const unsigned char *const) (char*)&data_things_torch_start_;
static const unsigned char *const data_things_torch_end   =
    (const unsigned char *const) (char*)&data_things_torch_end_;

extern unsigned char *data_things_torches_start_ asm("data_things_torches_start_");
extern unsigned char *data_things_torches_end_ asm("data_things_torches_end_");
static const unsigned char *const data_things_torches_start =
    (const unsigned char *const) (char*)&data_things_torches_start_;
static const unsigned char *const data_things_torches_end   =
    (const unsigned char *const) (char*)&data_things_torches_end_;

extern unsigned char *data_things_trap1_start_ asm("data_things_trap1_start_");
extern unsigned char *data_things_trap1_end_ asm("data_things_trap1_end_");
static const unsigned char *const data_things_trap1_start =
    (const unsigned char *const) (char*)&data_things_trap1_start_;
static const unsigned char *const data_things_trap1_end   =
    (const unsigned char *const) (char*)&data_things_trap1_end_;

extern unsigned char *data_things_trap2_start_ asm("data_things_trap2_start_");
extern unsigned char *data_things_trap2_end_ asm("data_things_trap2_end_");
static const unsigned char *const data_things_trap2_start =
    (const unsigned char *const) (char*)&data_things_trap2_start_;
static const unsigned char *const data_things_trap2_end   =
    (const unsigned char *const) (char*)&data_things_trap2_end_;

extern unsigned char *data_things_trap3_start_ asm("data_things_trap3_start_");
extern unsigned char *data_things_trap3_end_ asm("data_things_trap3_end_");
static const unsigned char *const data_things_trap3_start =
    (const unsigned char *const) (char*)&data_things_trap3_start_;
static const unsigned char *const data_things_trap3_end   =
    (const unsigned char *const) (char*)&data_things_trap3_end_;

extern unsigned char *data_things_treasure_any_start_ asm("data_things_treasure_any_start_");
extern unsigned char *data_things_treasure_any_end_ asm("data_things_treasure_any_end_");
static const unsigned char *const data_things_treasure_any_start =
    (const unsigned char *const) (char*)&data_things_treasure_any_start_;
static const unsigned char *const data_things_treasure_any_end   =
    (const unsigned char *const) (char*)&data_things_treasure_any_end_;

extern unsigned char *data_things_valkyrie_start_ asm("data_things_valkyrie_start_");
extern unsigned char *data_things_valkyrie_end_ asm("data_things_valkyrie_end_");
static const unsigned char *const data_things_valkyrie_start =
    (const unsigned char *const) (char*)&data_things_valkyrie_start_;
static const unsigned char *const data_things_valkyrie_end   =
    (const unsigned char *const) (char*)&data_things_valkyrie_end_;

extern unsigned char *data_things_wall1_start_ asm("data_things_wall1_start_");
extern unsigned char *data_things_wall1_end_ asm("data_things_wall1_end_");
static const unsigned char *const data_things_wall1_start =
    (const unsigned char *const) (char*)&data_things_wall1_start_;
static const unsigned char *const data_things_wall1_end   =
    (const unsigned char *const) (char*)&data_things_wall1_end_;

extern unsigned char *data_things_wall10_start_ asm("data_things_wall10_start_");
extern unsigned char *data_things_wall10_end_ asm("data_things_wall10_end_");
static const unsigned char *const data_things_wall10_start =
    (const unsigned char *const) (char*)&data_things_wall10_start_;
static const unsigned char *const data_things_wall10_end   =
    (const unsigned char *const) (char*)&data_things_wall10_end_;

extern unsigned char *data_things_wall11_start_ asm("data_things_wall11_start_");
extern unsigned char *data_things_wall11_end_ asm("data_things_wall11_end_");
static const unsigned char *const data_things_wall11_start =
    (const unsigned char *const) (char*)&data_things_wall11_start_;
static const unsigned char *const data_things_wall11_end   =
    (const unsigned char *const) (char*)&data_things_wall11_end_;

extern unsigned char *data_things_wall2_start_ asm("data_things_wall2_start_");
extern unsigned char *data_things_wall2_end_ asm("data_things_wall2_end_");
static const unsigned char *const data_things_wall2_start =
    (const unsigned char *const) (char*)&data_things_wall2_start_;
static const unsigned char *const data_things_wall2_end   =
    (const unsigned char *const) (char*)&data_things_wall2_end_;

extern unsigned char *data_things_wall3_start_ asm("data_things_wall3_start_");
extern unsigned char *data_things_wall3_end_ asm("data_things_wall3_end_");
static const unsigned char *const data_things_wall3_start =
    (const unsigned char *const) (char*)&data_things_wall3_start_;
static const unsigned char *const data_things_wall3_end   =
    (const unsigned char *const) (char*)&data_things_wall3_end_;

extern unsigned char *data_things_wall4_start_ asm("data_things_wall4_start_");
extern unsigned char *data_things_wall4_end_ asm("data_things_wall4_end_");
static const unsigned char *const data_things_wall4_start =
    (const unsigned char *const) (char*)&data_things_wall4_start_;
static const unsigned char *const data_things_wall4_end   =
    (const unsigned char *const) (char*)&data_things_wall4_end_;

extern unsigned char *data_things_wall5_start_ asm("data_things_wall5_start_");
extern unsigned char *data_things_wall5_end_ asm("data_things_wall5_end_");
static const unsigned char *const data_things_wall5_start =
    (const unsigned char *const) (char*)&data_things_wall5_start_;
static const unsigned char *const data_things_wall5_end   =
    (const unsigned char *const) (char*)&data_things_wall5_end_;

extern unsigned char *data_things_wall6_start_ asm("data_things_wall6_start_");
extern unsigned char *data_things_wall6_end_ asm("data_things_wall6_end_");
static const unsigned char *const data_things_wall6_start =
    (const unsigned char *const) (char*)&data_things_wall6_start_;
static const unsigned char *const data_things_wall6_end   =
    (const unsigned char *const) (char*)&data_things_wall6_end_;

extern unsigned char *data_things_wall7_start_ asm("data_things_wall7_start_");
extern unsigned char *data_things_wall7_end_ asm("data_things_wall7_end_");
static const unsigned char *const data_things_wall7_start =
    (const unsigned char *const) (char*)&data_things_wall7_start_;
static const unsigned char *const data_things_wall7_end   =
    (const unsigned char *const) (char*)&data_things_wall7_end_;

extern unsigned char *data_things_wall8_start_ asm("data_things_wall8_start_");
extern unsigned char *data_things_wall8_end_ asm("data_things_wall8_end_");
static const unsigned char *const data_things_wall8_start =
    (const unsigned char *const) (char*)&data_things_wall8_start_;
static const unsigned char *const data_things_wall8_end   =
    (const unsigned char *const) (char*)&data_things_wall8_end_;

extern unsigned char *data_things_wall9_start_ asm("data_things_wall9_start_");
extern unsigned char *data_things_wall9_end_ asm("data_things_wall9_end_");
static const unsigned char *const data_things_wall9_start =
    (const unsigned char *const) (char*)&data_things_wall9_start_;
static const unsigned char *const data_things_wall9_end   =
    (const unsigned char *const) (char*)&data_things_wall9_end_;

extern unsigned char *data_things_wall_lit1_start_ asm("data_things_wall_lit1_start_");
extern unsigned char *data_things_wall_lit1_end_ asm("data_things_wall_lit1_end_");
static const unsigned char *const data_things_wall_lit1_start =
    (const unsigned char *const) (char*)&data_things_wall_lit1_start_;
static const unsigned char *const data_things_wall_lit1_end   =
    (const unsigned char *const) (char*)&data_things_wall_lit1_end_;

extern unsigned char *data_things_wand1_start_ asm("data_things_wand1_start_");
extern unsigned char *data_things_wand1_end_ asm("data_things_wand1_end_");
static const unsigned char *const data_things_wand1_start =
    (const unsigned char *const) (char*)&data_things_wand1_start_;
static const unsigned char *const data_things_wand1_end   =
    (const unsigned char *const) (char*)&data_things_wand1_end_;

extern unsigned char *data_things_wand1_anim_start_ asm("data_things_wand1_anim_start_");
extern unsigned char *data_things_wand1_anim_end_ asm("data_things_wand1_anim_end_");
static const unsigned char *const data_things_wand1_anim_start =
    (const unsigned char *const) (char*)&data_things_wand1_anim_start_;
static const unsigned char *const data_things_wand1_anim_end   =
    (const unsigned char *const) (char*)&data_things_wand1_anim_end_;

extern unsigned char *data_things_wand2_start_ asm("data_things_wand2_start_");
extern unsigned char *data_things_wand2_end_ asm("data_things_wand2_end_");
static const unsigned char *const data_things_wand2_start =
    (const unsigned char *const) (char*)&data_things_wand2_start_;
static const unsigned char *const data_things_wand2_end   =
    (const unsigned char *const) (char*)&data_things_wand2_end_;

extern unsigned char *data_things_wand2_anim_start_ asm("data_things_wand2_anim_start_");
extern unsigned char *data_things_wand2_anim_end_ asm("data_things_wand2_anim_end_");
static const unsigned char *const data_things_wand2_anim_start =
    (const unsigned char *const) (char*)&data_things_wand2_anim_start_;
static const unsigned char *const data_things_wand2_anim_end   =
    (const unsigned char *const) (char*)&data_things_wand2_anim_end_;

extern unsigned char *data_things_wand3_start_ asm("data_things_wand3_start_");
extern unsigned char *data_things_wand3_end_ asm("data_things_wand3_end_");
static const unsigned char *const data_things_wand3_start =
    (const unsigned char *const) (char*)&data_things_wand3_start_;
static const unsigned char *const data_things_wand3_end   =
    (const unsigned char *const) (char*)&data_things_wand3_end_;

extern unsigned char *data_things_wand3_anim_start_ asm("data_things_wand3_anim_start_");
extern unsigned char *data_things_wand3_anim_end_ asm("data_things_wand3_anim_end_");
static const unsigned char *const data_things_wand3_anim_start =
    (const unsigned char *const) (char*)&data_things_wand3_anim_start_;
static const unsigned char *const data_things_wand3_anim_end   =
    (const unsigned char *const) (char*)&data_things_wand3_anim_end_;

extern unsigned char *data_things_wand4_start_ asm("data_things_wand4_start_");
extern unsigned char *data_things_wand4_end_ asm("data_things_wand4_end_");
static const unsigned char *const data_things_wand4_start =
    (const unsigned char *const) (char*)&data_things_wand4_start_;
static const unsigned char *const data_things_wand4_end   =
    (const unsigned char *const) (char*)&data_things_wand4_end_;

extern unsigned char *data_things_wand4_anim_start_ asm("data_things_wand4_anim_start_");
extern unsigned char *data_things_wand4_anim_end_ asm("data_things_wand4_anim_end_");
static const unsigned char *const data_things_wand4_anim_start =
    (const unsigned char *const) (char*)&data_things_wand4_anim_start_;
static const unsigned char *const data_things_wand4_anim_end   =
    (const unsigned char *const) (char*)&data_things_wand4_anim_end_;

extern unsigned char *data_things_warrior_start_ asm("data_things_warrior_start_");
extern unsigned char *data_things_warrior_end_ asm("data_things_warrior_end_");
static const unsigned char *const data_things_warrior_start =
    (const unsigned char *const) (char*)&data_things_warrior_start_;
static const unsigned char *const data_things_warrior_end   =
    (const unsigned char *const) (char*)&data_things_warrior_end_;

extern unsigned char *data_things_water_start_ asm("data_things_water_start_");
extern unsigned char *data_things_water_end_ asm("data_things_water_end_");
static const unsigned char *const data_things_water_start =
    (const unsigned char *const) (char*)&data_things_water_start_;
static const unsigned char *const data_things_water_end   =
    (const unsigned char *const) (char*)&data_things_water_end_;

extern unsigned char *data_things_water_poison_start_ asm("data_things_water_poison_start_");
extern unsigned char *data_things_water_poison_end_ asm("data_things_water_poison_end_");
static const unsigned char *const data_things_water_poison_start =
    (const unsigned char *const) (char*)&data_things_water_poison_start_;
static const unsigned char *const data_things_water_poison_end   =
    (const unsigned char *const) (char*)&data_things_water_poison_end_;

extern unsigned char *data_things_weapon_any_start_ asm("data_things_weapon_any_start_");
extern unsigned char *data_things_weapon_any_end_ asm("data_things_weapon_any_end_");
static const unsigned char *const data_things_weapon_any_start =
    (const unsigned char *const) (char*)&data_things_weapon_any_start_;
static const unsigned char *const data_things_weapon_any_end   =
    (const unsigned char *const) (char*)&data_things_weapon_any_end_;

extern unsigned char *data_things_weapon_swing1_start_ asm("data_things_weapon_swing1_start_");
extern unsigned char *data_things_weapon_swing1_end_ asm("data_things_weapon_swing1_end_");
static const unsigned char *const data_things_weapon_swing1_start =
    (const unsigned char *const) (char*)&data_things_weapon_swing1_start_;
static const unsigned char *const data_things_weapon_swing1_end   =
    (const unsigned char *const) (char*)&data_things_weapon_swing1_end_;

extern unsigned char *data_things_weapon_swing2_start_ asm("data_things_weapon_swing2_start_");
extern unsigned char *data_things_weapon_swing2_end_ asm("data_things_weapon_swing2_end_");
static const unsigned char *const data_things_weapon_swing2_start =
    (const unsigned char *const) (char*)&data_things_weapon_swing2_start_;
static const unsigned char *const data_things_weapon_swing2_end   =
    (const unsigned char *const) (char*)&data_things_weapon_swing2_end_;

extern unsigned char *data_things_wizard_start_ asm("data_things_wizard_start_");
extern unsigned char *data_things_wizard_end_ asm("data_things_wizard_end_");
static const unsigned char *const data_things_wizard_start =
    (const unsigned char *const) (char*)&data_things_wizard_start_;
static const unsigned char *const data_things_wizard_end   =
    (const unsigned char *const) (char*)&data_things_wizard_end_;

extern unsigned char *data_things_zombie1_start_ asm("data_things_zombie1_start_");
extern unsigned char *data_things_zombie1_end_ asm("data_things_zombie1_end_");
static const unsigned char *const data_things_zombie1_start =
    (const unsigned char *const) (char*)&data_things_zombie1_start_;
static const unsigned char *const data_things_zombie1_end   =
    (const unsigned char *const) (char*)&data_things_zombie1_end_;

extern unsigned char *data_things_zombie2_start_ asm("data_things_zombie2_start_");
extern unsigned char *data_things_zombie2_end_ asm("data_things_zombie2_end_");
static const unsigned char *const data_things_zombie2_start =
    (const unsigned char *const) (char*)&data_things_zombie2_start_;
static const unsigned char *const data_things_zombie2_end   =
    (const unsigned char *const) (char*)&data_things_zombie2_end_;

extern unsigned char *data_things_zombie3_start_ asm("data_things_zombie3_start_");
extern unsigned char *data_things_zombie3_end_ asm("data_things_zombie3_end_");
static const unsigned char *const data_things_zombie3_start =
    (const unsigned char *const) (char*)&data_things_zombie3_start_;
static const unsigned char *const data_things_zombie3_end   =
    (const unsigned char *const) (char*)&data_things_zombie3_end_;

extern unsigned char *data_things_zombie4_start_ asm("data_things_zombie4_start_");
extern unsigned char *data_things_zombie4_end_ asm("data_things_zombie4_end_");
static const unsigned char *const data_things_zombie4_start =
    (const unsigned char *const) (char*)&data_things_zombie4_start_;
static const unsigned char *const data_things_zombie4_end   =
    (const unsigned char *const) (char*)&data_things_zombie4_end_;

extern unsigned char *data_things_zombie5_start_ asm("data_things_zombie5_start_");
extern unsigned char *data_things_zombie5_end_ asm("data_things_zombie5_end_");
static const unsigned char *const data_things_zombie5_start =
    (const unsigned char *const) (char*)&data_things_zombie5_start_;
static const unsigned char *const data_things_zombie5_end   =
    (const unsigned char *const) (char*)&data_things_zombie5_end_;

extern unsigned char *data_things_zombie_corpse1_start_ asm("data_things_zombie_corpse1_start_");
extern unsigned char *data_things_zombie_corpse1_end_ asm("data_things_zombie_corpse1_end_");
static const unsigned char *const data_things_zombie_corpse1_start =
    (const unsigned char *const) (char*)&data_things_zombie_corpse1_start_;
static const unsigned char *const data_things_zombie_corpse1_end   =
    (const unsigned char *const) (char*)&data_things_zombie_corpse1_end_;

extern unsigned char *data_things_zombie_corpse2_start_ asm("data_things_zombie_corpse2_start_");
extern unsigned char *data_things_zombie_corpse2_end_ asm("data_things_zombie_corpse2_end_");
static const unsigned char *const data_things_zombie_corpse2_start =
    (const unsigned char *const) (char*)&data_things_zombie_corpse2_start_;
static const unsigned char *const data_things_zombie_corpse2_end   =
    (const unsigned char *const) (char*)&data_things_zombie_corpse2_end_;

extern unsigned char *data_things_zombie_corpse3_start_ asm("data_things_zombie_corpse3_start_");
extern unsigned char *data_things_zombie_corpse3_end_ asm("data_things_zombie_corpse3_end_");
static const unsigned char *const data_things_zombie_corpse3_start =
    (const unsigned char *const) (char*)&data_things_zombie_corpse3_start_;
static const unsigned char *const data_things_zombie_corpse3_end   =
    (const unsigned char *const) (char*)&data_things_zombie_corpse3_end_;

extern unsigned char *data_things_zombie_corpse4_start_ asm("data_things_zombie_corpse4_start_");
extern unsigned char *data_things_zombie_corpse4_end_ asm("data_things_zombie_corpse4_end_");
static const unsigned char *const data_things_zombie_corpse4_start =
    (const unsigned char *const) (char*)&data_things_zombie_corpse4_start_;
static const unsigned char *const data_things_zombie_corpse4_end   =
    (const unsigned char *const) (char*)&data_things_zombie_corpse4_end_;

extern unsigned char *data_things_zombie_corpse5_start_ asm("data_things_zombie_corpse5_start_");
extern unsigned char *data_things_zombie_corpse5_end_ asm("data_things_zombie_corpse5_end_");
static const unsigned char *const data_things_zombie_corpse5_start =
    (const unsigned char *const) (char*)&data_things_zombie_corpse5_start_;
static const unsigned char *const data_things_zombie_corpse5_end   =
    (const unsigned char *const) (char*)&data_things_zombie_corpse5_end_;

extern unsigned char *data_things_zombiemob_start_ asm("data_things_zombiemob_start_");
extern unsigned char *data_things_zombiemob_end_ asm("data_things_zombiemob_end_");
static const unsigned char *const data_things_zombiemob_start =
    (const unsigned char *const) (char*)&data_things_zombiemob_start_;
static const unsigned char *const data_things_zombiemob_end   =
    (const unsigned char *const) (char*)&data_things_zombiemob_end_;

extern unsigned char *data_ttf_LICENSE_txt_start_ asm("data_ttf_LICENSE_txt_start_");
extern unsigned char *data_ttf_LICENSE_txt_end_ asm("data_ttf_LICENSE_txt_end_");
static const unsigned char *const data_ttf_LICENSE_txt_start =
    (const unsigned char *const) (char*)&data_ttf_LICENSE_txt_start_;
static const unsigned char *const data_ttf_LICENSE_txt_end   =
    (const unsigned char *const) (char*)&data_ttf_LICENSE_txt_end_;

extern unsigned char *data_ttf_OFL_txt_start_ asm("data_ttf_OFL_txt_start_");
extern unsigned char *data_ttf_OFL_txt_end_ asm("data_ttf_OFL_txt_end_");
static const unsigned char *const data_ttf_OFL_txt_start =
    (const unsigned char *const) (char*)&data_ttf_OFL_txt_start_;
static const unsigned char *const data_ttf_OFL_txt_end   =
    (const unsigned char *const) (char*)&data_ttf_OFL_txt_end_;

extern unsigned char *data_ttf_Readme_txt_start_ asm("data_ttf_Readme_txt_start_");
extern unsigned char *data_ttf_Readme_txt_end_ asm("data_ttf_Readme_txt_end_");
static const unsigned char *const data_ttf_Readme_txt_start =
    (const unsigned char *const) (char*)&data_ttf_Readme_txt_start_;
static const unsigned char *const data_ttf_Readme_txt_end   =
    (const unsigned char *const) (char*)&data_ttf_Readme_txt_end_;

extern unsigned char *data_ttf_emulogic_gif_start_ asm("data_ttf_emulogic_gif_start_");
extern unsigned char *data_ttf_emulogic_gif_end_ asm("data_ttf_emulogic_gif_end_");
static const unsigned char *const data_ttf_emulogic_gif_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_gif_start_;
static const unsigned char *const data_ttf_emulogic_gif_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_gif_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize10_data_start_ asm("data_ttf_emulogic_ttf_pointsize10_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize10_data_end_ asm("data_ttf_emulogic_ttf_pointsize10_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize10_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize10_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize10_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize10_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize10_tga_start_ asm("data_ttf_emulogic_ttf_pointsize10_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize10_tga_end_ asm("data_ttf_emulogic_ttf_pointsize10_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize10_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize10_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize10_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize10_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize12_data_start_ asm("data_ttf_emulogic_ttf_pointsize12_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize12_data_end_ asm("data_ttf_emulogic_ttf_pointsize12_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize12_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize12_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize12_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize12_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize12_tga_start_ asm("data_ttf_emulogic_ttf_pointsize12_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize12_tga_end_ asm("data_ttf_emulogic_ttf_pointsize12_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize12_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize12_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize12_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize12_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize14_data_start_ asm("data_ttf_emulogic_ttf_pointsize14_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize14_data_end_ asm("data_ttf_emulogic_ttf_pointsize14_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize14_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize14_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize14_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize14_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize14_tga_start_ asm("data_ttf_emulogic_ttf_pointsize14_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize14_tga_end_ asm("data_ttf_emulogic_ttf_pointsize14_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize14_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize14_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize14_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize14_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize16_data_start_ asm("data_ttf_emulogic_ttf_pointsize16_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize16_data_end_ asm("data_ttf_emulogic_ttf_pointsize16_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize16_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize16_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize16_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize16_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize16_tga_start_ asm("data_ttf_emulogic_ttf_pointsize16_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize16_tga_end_ asm("data_ttf_emulogic_ttf_pointsize16_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize16_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize16_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize16_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize16_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize18_data_start_ asm("data_ttf_emulogic_ttf_pointsize18_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize18_data_end_ asm("data_ttf_emulogic_ttf_pointsize18_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize18_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize18_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize18_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize18_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize18_tga_start_ asm("data_ttf_emulogic_ttf_pointsize18_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize18_tga_end_ asm("data_ttf_emulogic_ttf_pointsize18_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize18_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize18_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize18_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize18_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize2_data_start_ asm("data_ttf_emulogic_ttf_pointsize2_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize2_data_end_ asm("data_ttf_emulogic_ttf_pointsize2_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize2_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize2_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize2_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize2_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize2_tga_start_ asm("data_ttf_emulogic_ttf_pointsize2_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize2_tga_end_ asm("data_ttf_emulogic_ttf_pointsize2_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize2_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize2_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize2_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize2_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize20_data_start_ asm("data_ttf_emulogic_ttf_pointsize20_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize20_data_end_ asm("data_ttf_emulogic_ttf_pointsize20_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize20_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize20_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize20_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize20_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize20_tga_start_ asm("data_ttf_emulogic_ttf_pointsize20_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize20_tga_end_ asm("data_ttf_emulogic_ttf_pointsize20_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize20_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize20_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize20_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize20_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize22_data_start_ asm("data_ttf_emulogic_ttf_pointsize22_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize22_data_end_ asm("data_ttf_emulogic_ttf_pointsize22_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize22_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize22_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize22_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize22_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize22_tga_start_ asm("data_ttf_emulogic_ttf_pointsize22_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize22_tga_end_ asm("data_ttf_emulogic_ttf_pointsize22_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize22_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize22_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize22_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize22_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize24_data_start_ asm("data_ttf_emulogic_ttf_pointsize24_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize24_data_end_ asm("data_ttf_emulogic_ttf_pointsize24_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize24_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize24_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize24_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize24_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize24_tga_start_ asm("data_ttf_emulogic_ttf_pointsize24_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize24_tga_end_ asm("data_ttf_emulogic_ttf_pointsize24_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize24_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize24_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize24_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize24_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize26_data_start_ asm("data_ttf_emulogic_ttf_pointsize26_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize26_data_end_ asm("data_ttf_emulogic_ttf_pointsize26_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize26_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize26_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize26_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize26_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize26_tga_start_ asm("data_ttf_emulogic_ttf_pointsize26_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize26_tga_end_ asm("data_ttf_emulogic_ttf_pointsize26_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize26_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize26_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize26_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize26_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize28_data_start_ asm("data_ttf_emulogic_ttf_pointsize28_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize28_data_end_ asm("data_ttf_emulogic_ttf_pointsize28_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize28_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize28_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize28_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize28_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize28_tga_start_ asm("data_ttf_emulogic_ttf_pointsize28_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize28_tga_end_ asm("data_ttf_emulogic_ttf_pointsize28_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize28_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize28_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize28_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize28_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize30_data_start_ asm("data_ttf_emulogic_ttf_pointsize30_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize30_data_end_ asm("data_ttf_emulogic_ttf_pointsize30_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize30_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize30_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize30_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize30_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize30_tga_start_ asm("data_ttf_emulogic_ttf_pointsize30_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize30_tga_end_ asm("data_ttf_emulogic_ttf_pointsize30_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize30_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize30_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize30_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize30_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize32_data_start_ asm("data_ttf_emulogic_ttf_pointsize32_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize32_data_end_ asm("data_ttf_emulogic_ttf_pointsize32_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize32_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize32_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize32_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize32_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize32_tga_start_ asm("data_ttf_emulogic_ttf_pointsize32_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize32_tga_end_ asm("data_ttf_emulogic_ttf_pointsize32_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize32_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize32_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize32_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize32_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize34_data_start_ asm("data_ttf_emulogic_ttf_pointsize34_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize34_data_end_ asm("data_ttf_emulogic_ttf_pointsize34_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize34_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize34_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize34_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize34_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize34_tga_start_ asm("data_ttf_emulogic_ttf_pointsize34_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize34_tga_end_ asm("data_ttf_emulogic_ttf_pointsize34_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize34_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize34_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize34_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize34_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize36_data_start_ asm("data_ttf_emulogic_ttf_pointsize36_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize36_data_end_ asm("data_ttf_emulogic_ttf_pointsize36_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize36_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize36_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize36_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize36_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize36_tga_start_ asm("data_ttf_emulogic_ttf_pointsize36_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize36_tga_end_ asm("data_ttf_emulogic_ttf_pointsize36_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize36_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize36_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize36_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize36_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize38_data_start_ asm("data_ttf_emulogic_ttf_pointsize38_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize38_data_end_ asm("data_ttf_emulogic_ttf_pointsize38_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize38_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize38_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize38_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize38_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize38_tga_start_ asm("data_ttf_emulogic_ttf_pointsize38_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize38_tga_end_ asm("data_ttf_emulogic_ttf_pointsize38_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize38_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize38_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize38_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize38_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize4_data_start_ asm("data_ttf_emulogic_ttf_pointsize4_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize4_data_end_ asm("data_ttf_emulogic_ttf_pointsize4_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize4_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize4_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize4_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize4_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize4_tga_start_ asm("data_ttf_emulogic_ttf_pointsize4_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize4_tga_end_ asm("data_ttf_emulogic_ttf_pointsize4_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize4_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize4_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize4_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize4_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize40_data_start_ asm("data_ttf_emulogic_ttf_pointsize40_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize40_data_end_ asm("data_ttf_emulogic_ttf_pointsize40_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize40_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize40_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize40_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize40_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize40_tga_start_ asm("data_ttf_emulogic_ttf_pointsize40_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize40_tga_end_ asm("data_ttf_emulogic_ttf_pointsize40_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize40_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize40_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize40_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize40_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize42_data_start_ asm("data_ttf_emulogic_ttf_pointsize42_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize42_data_end_ asm("data_ttf_emulogic_ttf_pointsize42_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize42_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize42_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize42_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize42_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize42_tga_start_ asm("data_ttf_emulogic_ttf_pointsize42_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize42_tga_end_ asm("data_ttf_emulogic_ttf_pointsize42_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize42_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize42_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize42_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize42_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize44_data_start_ asm("data_ttf_emulogic_ttf_pointsize44_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize44_data_end_ asm("data_ttf_emulogic_ttf_pointsize44_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize44_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize44_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize44_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize44_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize44_tga_start_ asm("data_ttf_emulogic_ttf_pointsize44_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize44_tga_end_ asm("data_ttf_emulogic_ttf_pointsize44_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize44_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize44_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize44_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize44_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize46_data_start_ asm("data_ttf_emulogic_ttf_pointsize46_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize46_data_end_ asm("data_ttf_emulogic_ttf_pointsize46_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize46_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize46_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize46_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize46_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize46_tga_start_ asm("data_ttf_emulogic_ttf_pointsize46_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize46_tga_end_ asm("data_ttf_emulogic_ttf_pointsize46_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize46_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize46_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize46_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize46_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize48_data_start_ asm("data_ttf_emulogic_ttf_pointsize48_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize48_data_end_ asm("data_ttf_emulogic_ttf_pointsize48_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize48_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize48_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize48_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize48_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize48_tga_start_ asm("data_ttf_emulogic_ttf_pointsize48_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize48_tga_end_ asm("data_ttf_emulogic_ttf_pointsize48_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize48_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize48_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize48_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize48_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize50_data_start_ asm("data_ttf_emulogic_ttf_pointsize50_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize50_data_end_ asm("data_ttf_emulogic_ttf_pointsize50_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize50_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize50_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize50_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize50_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize50_tga_start_ asm("data_ttf_emulogic_ttf_pointsize50_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize50_tga_end_ asm("data_ttf_emulogic_ttf_pointsize50_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize50_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize50_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize50_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize50_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize52_data_start_ asm("data_ttf_emulogic_ttf_pointsize52_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize52_data_end_ asm("data_ttf_emulogic_ttf_pointsize52_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize52_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize52_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize52_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize52_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize52_tga_start_ asm("data_ttf_emulogic_ttf_pointsize52_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize52_tga_end_ asm("data_ttf_emulogic_ttf_pointsize52_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize52_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize52_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize52_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize52_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize54_data_start_ asm("data_ttf_emulogic_ttf_pointsize54_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize54_data_end_ asm("data_ttf_emulogic_ttf_pointsize54_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize54_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize54_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize54_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize54_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize54_tga_start_ asm("data_ttf_emulogic_ttf_pointsize54_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize54_tga_end_ asm("data_ttf_emulogic_ttf_pointsize54_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize54_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize54_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize54_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize54_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize56_data_start_ asm("data_ttf_emulogic_ttf_pointsize56_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize56_data_end_ asm("data_ttf_emulogic_ttf_pointsize56_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize56_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize56_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize56_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize56_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize56_tga_start_ asm("data_ttf_emulogic_ttf_pointsize56_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize56_tga_end_ asm("data_ttf_emulogic_ttf_pointsize56_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize56_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize56_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize56_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize56_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize58_data_start_ asm("data_ttf_emulogic_ttf_pointsize58_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize58_data_end_ asm("data_ttf_emulogic_ttf_pointsize58_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize58_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize58_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize58_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize58_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize58_tga_start_ asm("data_ttf_emulogic_ttf_pointsize58_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize58_tga_end_ asm("data_ttf_emulogic_ttf_pointsize58_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize58_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize58_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize58_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize58_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize6_data_start_ asm("data_ttf_emulogic_ttf_pointsize6_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize6_data_end_ asm("data_ttf_emulogic_ttf_pointsize6_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize6_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize6_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize6_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize6_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize6_tga_start_ asm("data_ttf_emulogic_ttf_pointsize6_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize6_tga_end_ asm("data_ttf_emulogic_ttf_pointsize6_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize6_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize6_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize6_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize6_tga_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize8_data_start_ asm("data_ttf_emulogic_ttf_pointsize8_data_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize8_data_end_ asm("data_ttf_emulogic_ttf_pointsize8_data_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize8_data_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize8_data_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize8_data_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize8_data_end_;

extern unsigned char *data_ttf_emulogic_ttf_pointsize8_tga_start_ asm("data_ttf_emulogic_ttf_pointsize8_tga_start_");
extern unsigned char *data_ttf_emulogic_ttf_pointsize8_tga_end_ asm("data_ttf_emulogic_ttf_pointsize8_tga_end_");
static const unsigned char *const data_ttf_emulogic_ttf_pointsize8_tga_start =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize8_tga_start_;
static const unsigned char *const data_ttf_emulogic_ttf_pointsize8_tga_end   =
    (const unsigned char *const) (char*)&data_ttf_emulogic_ttf_pointsize8_tga_end_;
#endif
ramdisk_t ramdisk_data[] = {
{
    /* filename */ "data/gfx/anim_eyes.tga",
},
{
    /* filename */ "data/gfx/anim_treasure_chest.tga",
},
{
    /* filename */ "data/gfx/axe.tga",
},
{
    /* filename */ "data/gfx/button_black.tga",
},
{
    /* filename */ "data/gfx/cloudkill.tga",
},
{
    /* filename */ "data/gfx/crystal.tga",
},
{
    /* filename */ "data/gfx/crystalball.tga",
},
{
    /* filename */ "data/gfx/crystalball_purple.tga",
},
{
    /* filename */ "data/gfx/death_cloud.tga",
},
{
    /* filename */ "data/gfx/dragon.tga",
},
{
    /* filename */ "data/gfx/explosion.tga",
},
{
    /* filename */ "data/gfx/giant_rock.tga",
},
{
    /* filename */ "data/gfx/gorynlich.tga",
},
{
    /* filename */ "data/gfx/gothic_full_screen.tga",
},
{
    /* filename */ "data/gfx/gothic_tall_axe.tga",
},
{
    /* filename */ "data/gfx/gothic_tall_chest.tga",
},
{
    /* filename */ "data/gfx/gothic_tall_skull.tga",
},
{
    /* filename */ "data/gfx/gothic_wide.tga",
},
{
    /* filename */ "data/gfx/gravestone.tga",
},
{
    /* filename */ "data/gfx/gravestone2.tga",
},
{
    /* filename */ "data/gfx/intro1.tga",
},
{
    /* filename */ "data/gfx/intro2.tga",
},
{
    /* filename */ "data/gfx/intro3.tga",
},
{
    /* filename */ "data/gfx/intro4.tga",
},
{
    /* filename */ "data/gfx/intro5.tga",
},
{
    /* filename */ "data/gfx/itembar.tga",
},
{
    /* filename */ "data/gfx/jesus.tga",
},
{
    /* filename */ "data/gfx/magic.tga",
},
{
    /* filename */ "data/gfx/magic_cloud.tga",
},
{
    /* filename */ "data/gfx/main_title.tga",
},
{
    /* filename */ "data/gfx/player1.tga",
},
{
    /* filename */ "data/gfx/player2.tga",
},
{
    /* filename */ "data/gfx/player3.tga",
},
{
    /* filename */ "data/gfx/player4.tga",
},
{
    /* filename */ "data/gfx/player5.tga",
},
{
    /* filename */ "data/gfx/players.tga",
},
{
    /* filename */ "data/gfx/poison.tga",
},
{
    /* filename */ "data/gfx/powerup1.tga",
},
{
    /* filename */ "data/gfx/ring.tga",
},
{
    /* filename */ "data/gfx/sawblade.tga",
},
{
    /* filename */ "data/gfx/sawblade2.tga",
},
{
    /* filename */ "data/gfx/sawblade3.tga",
},
{
    /* filename */ "data/gfx/sawblade4.tga",
},
{
    /* filename */ "data/gfx/sawblade5.tga",
},
{
    /* filename */ "data/gfx/shield1.tga",
},
{
    /* filename */ "data/gfx/sprites.tga",
},
{
    /* filename */ "data/gfx/sprites_large.tga",
},
{
    /* filename */ "data/gfx/squiggles.tga",
},
{
    /* filename */ "data/gfx/tall.tga",
},
{
    /* filename */ "data/gfx/teleport.tga",
},
{
    /* filename */ "data/gfx/title.tga",
},
{
    /* filename */ "data/gfx/title2.tga",
},
{
    /* filename */ "data/gfx/title3.tga",
},
{
    /* filename */ "data/gfx/title4.tga",
},
{
    /* filename */ "data/gfx/title5.tga",
},
{
    /* filename */ "data/gfx/title6.tga",
},
{
    /* filename */ "data/gfx/title_small.tga",
},
{
    /* filename */ "data/gfx/wall_floor.tga",
},
{
    /* filename */ "data/gfx/window_gothic_wide.tga",
},
{
    /* filename */ "data/levels/1.1",
},
{
    /* filename */ "data/levels/1.10",
},
{
    /* filename */ "data/levels/1.2",
},
{
    /* filename */ "data/levels/1.3",
},
{
    /* filename */ "data/levels/1.4",
},
{
    /* filename */ "data/levels/1.5",
},
{
    /* filename */ "data/levels/1.6",
},
{
    /* filename */ "data/levels/1.7",
},
{
    /* filename */ "data/levels/1.8",
},
{
    /* filename */ "data/levels/1.9",
},
{
    /* filename */ "data/levels/10.1",
},
{
    /* filename */ "data/levels/10.10",
},
{
    /* filename */ "data/levels/10.2",
},
{
    /* filename */ "data/levels/10.3",
},
{
    /* filename */ "data/levels/10.4",
},
{
    /* filename */ "data/levels/10.5",
},
{
    /* filename */ "data/levels/10.6",
},
{
    /* filename */ "data/levels/10.7",
},
{
    /* filename */ "data/levels/10.8",
},
{
    /* filename */ "data/levels/10.9",
},
{
    /* filename */ "data/levels/2.1",
},
{
    /* filename */ "data/levels/2.10",
},
{
    /* filename */ "data/levels/2.2",
},
{
    /* filename */ "data/levels/2.3",
},
{
    /* filename */ "data/levels/2.4",
},
{
    /* filename */ "data/levels/2.5",
},
{
    /* filename */ "data/levels/2.6",
},
{
    /* filename */ "data/levels/2.7",
},
{
    /* filename */ "data/levels/2.8",
},
{
    /* filename */ "data/levels/2.9",
},
{
    /* filename */ "data/levels/3.1",
},
{
    /* filename */ "data/levels/3.10",
},
{
    /* filename */ "data/levels/3.2",
},
{
    /* filename */ "data/levels/3.3",
},
{
    /* filename */ "data/levels/3.4",
},
{
    /* filename */ "data/levels/3.5",
},
{
    /* filename */ "data/levels/3.6",
},
{
    /* filename */ "data/levels/3.7",
},
{
    /* filename */ "data/levels/3.8",
},
{
    /* filename */ "data/levels/3.9",
},
{
    /* filename */ "data/levels/4.1",
},
{
    /* filename */ "data/levels/4.10",
},
{
    /* filename */ "data/levels/4.2",
},
{
    /* filename */ "data/levels/4.3",
},
{
    /* filename */ "data/levels/4.4",
},
{
    /* filename */ "data/levels/4.5",
},
{
    /* filename */ "data/levels/4.6",
},
{
    /* filename */ "data/levels/4.7",
},
{
    /* filename */ "data/levels/4.8",
},
{
    /* filename */ "data/levels/4.9",
},
{
    /* filename */ "data/levels/5.1",
},
{
    /* filename */ "data/levels/5.10",
},
{
    /* filename */ "data/levels/5.2",
},
{
    /* filename */ "data/levels/5.3",
},
{
    /* filename */ "data/levels/5.4",
},
{
    /* filename */ "data/levels/5.5",
},
{
    /* filename */ "data/levels/5.6",
},
{
    /* filename */ "data/levels/5.7",
},
{
    /* filename */ "data/levels/5.8",
},
{
    /* filename */ "data/levels/5.9",
},
{
    /* filename */ "data/levels/6.1",
},
{
    /* filename */ "data/levels/6.10",
},
{
    /* filename */ "data/levels/6.2",
},
{
    /* filename */ "data/levels/6.3",
},
{
    /* filename */ "data/levels/6.4",
},
{
    /* filename */ "data/levels/6.5",
},
{
    /* filename */ "data/levels/6.6",
},
{
    /* filename */ "data/levels/6.7",
},
{
    /* filename */ "data/levels/6.8",
},
{
    /* filename */ "data/levels/6.9",
},
{
    /* filename */ "data/levels/7.1",
},
{
    /* filename */ "data/levels/7.10",
},
{
    /* filename */ "data/levels/7.2",
},
{
    /* filename */ "data/levels/7.3",
},
{
    /* filename */ "data/levels/7.4",
},
{
    /* filename */ "data/levels/7.5",
},
{
    /* filename */ "data/levels/7.6",
},
{
    /* filename */ "data/levels/7.7",
},
{
    /* filename */ "data/levels/7.8",
},
{
    /* filename */ "data/levels/7.9",
},
{
    /* filename */ "data/levels/8.1",
},
{
    /* filename */ "data/levels/8.10",
},
{
    /* filename */ "data/levels/8.2",
},
{
    /* filename */ "data/levels/8.3",
},
{
    /* filename */ "data/levels/8.4",
},
{
    /* filename */ "data/levels/8.5",
},
{
    /* filename */ "data/levels/8.6",
},
{
    /* filename */ "data/levels/8.7",
},
{
    /* filename */ "data/levels/8.8",
},
{
    /* filename */ "data/levels/8.9",
},
{
    /* filename */ "data/levels/9.1",
},
{
    /* filename */ "data/levels/9.10",
},
{
    /* filename */ "data/levels/9.2",
},
{
    /* filename */ "data/levels/9.3",
},
{
    /* filename */ "data/levels/9.4",
},
{
    /* filename */ "data/levels/9.5",
},
{
    /* filename */ "data/levels/9.6",
},
{
    /* filename */ "data/levels/9.7",
},
{
    /* filename */ "data/levels/9.8",
},
{
    /* filename */ "data/levels/9.9",
},
{
    /* filename */ "data/map/jigsaw.map",
},
{
    /* filename */ "data/music/DST_Alters.ogg",
},
{
    /* filename */ "data/music/DST_AncientCurse_II.ogg",
},
{
    /* filename */ "data/music/DST_Arch_Delerium.ogg",
},
{
    /* filename */ "data/music/DST_Arches.ogg",
},
{
    /* filename */ "data/music/DST_Aronara.ogg",
},
{
    /* filename */ "data/music/DST_BattleLands.ogg",
},
{
    /* filename */ "data/music/DST_Beneathere.ogg",
},
{
    /* filename */ "data/music/DST_BlackRiver.ogg",
},
{
    /* filename */ "data/music/DST_BloodAndIron.ogg",
},
{
    /* filename */ "data/music/DST_BoneTower.ogg",
},
{
    /* filename */ "data/music/DST_ClockTower.ogg",
},
{
    /* filename */ "data/music/DST_DarkDance.ogg",
},
{
    /* filename */ "data/music/DST_Darkening.ogg",
},
{
    /* filename */ "data/music/DST_DarkestKnight.ogg",
},
{
    /* filename */ "data/music/DST_DoomCity.ogg",
},
{
    /* filename */ "data/music/DST_ExInfernus.ogg",
},
{
    /* filename */ "data/music/DST_GhostHouse.ogg",
},
{
    /* filename */ "data/music/DST_H2O.ogg",
},
{
    /* filename */ "data/music/DST_LeDanse.ogg",
},
{
    /* filename */ "data/music/DST_Legends.ogg",
},
{
    /* filename */ "data/music/DST_MechaSelect.ogg",
},
{
    /* filename */ "data/music/DST_OldCavern.ogg",
},
{
    /* filename */ "data/music/DST_Ornament.ogg",
},
{
    /* filename */ "data/music/DST_OverlandTheme.ogg",
},
{
    /* filename */ "data/music/DST_ReflectingPool.ogg",
},
{
    /* filename */ "data/music/DST_Sarcophage.ogg",
},
{
    /* filename */ "data/music/DST_SnowMode.ogg",
},
{
    /* filename */ "data/music/DST_StarryBook.ogg",
},
{
    /* filename */ "data/music/DST_SuperWin.ogg",
},
{
    /* filename */ "data/music/DST_TheHauntedChapel.ogg",
},
{
    /* filename */ "data/music/DST_TwoHeaded.ogg",
},
{
    /* filename */ "data/music/charlotte.ogg",
},
{
    /* filename */ "data/music/charlotte8bit.ogg",
},
{
    /* filename */ "data/music/charlotte_slow.ogg",
},
{
    /* filename */ "data/music/oggconv.sh",
},
{
    /* filename */ "data/music/resample.sh",
},
{
    /* filename */ "data/sound/105016__julien_matthey__jm_fx_fireball_01.wav",
},
{
    /* filename */ "data/sound/146733__fins__energy.wav",
},
{
    /* filename */ "data/sound/148975__adam_n__squelch_1.wav",
},
{
    /* filename */ "data/sound/170243__beatsbycasper__car_horn.wav",
},
{
    /* filename */ "data/sound/188363__darkalicenite__grunt.wav",
},
{
    /* filename */ "data/sound/188712__oceanictrancer__happy_effect.wav",
},
{
    /* filename */ "data/sound/205563__everheat__arrow.wav",
},
{
    /* filename */ "data/sound/207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode.ogg",
},
{
    /* filename */ "data/sound/207809__exsomniel__dark_choir_01.wav",
},
{
    /* filename */ "data/sound/212764__qubodup__lion_roar.ogg",
},
{
    /* filename */ "data/sound/219566__qubodup__poison_spell_magic.ogg",
},
{
    /* filename */ "data/sound/238855__limetoe__collected_item.wav",
},
{
    /* filename */ "data/sound/244745__reitanna__egg_crack19.wav",
},
{
    /* filename */ "data/sound/317827__blockfighter298__weapon_pickup.wav",
},
{
    /* filename */ "data/sound/39016__wildweasel__dsfirxpl.wav",
},
{
    /* filename */ "data/sound/45137__dj_chronos__dark_church_bell.wav",
},
{
    /* filename */ "data/sound/49676__ejfortin__energy_short_sword_5.wav",
},
{
    /* filename */ "data/sound/60009__qubodup__swosh_22.ogg",
},
{
    /* filename */ "data/sound/65195__uair01__chamber_choir_chord_o.wav",
},
{
    /* filename */ "data/sound/82388__robinhood76__01308_man_hit_9.wav",
},
{
    /* filename */ "data/sound/85568__joelaudio__dragon_roar.wav",
},
{
    /* filename */ "data/sound/Bite_SoundBible.com_2056759375.wav",
},
{
    /* filename */ "data/sound/Door_Latch_002.wav",
},
{
    /* filename */ "data/sound/Electric_Zap.wav",
},
{
    /* filename */ "data/sound/Object_Drop_001.wav",
},
{
    /* filename */ "data/sound/Red_Alert_FX_001.wav",
},
{
    /* filename */ "data/sound/bite_SoundBible.com_1625781385.wav",
},
{
    /* filename */ "data/sound/boom.wav",
},
{
    /* filename */ "data/sound/cash_register.wav",
},
{
    /* filename */ "data/sound/cash_register2.wav",
},
{
    /* filename */ "data/sound/click.wav",
},
{
    /* filename */ "data/sound/coin_roll.wav",
},
{
    /* filename */ "data/sound/demon.wav",
},
{
    /* filename */ "data/sound/demon_die.wav",
},
{
    /* filename */ "data/sound/dinosaur.wav",
},
{
    /* filename */ "data/sound/drop.wav",
},
{
    /* filename */ "data/sound/effect.wav",
},
{
    /* filename */ "data/sound/explosion.wav",
},
{
    /* filename */ "data/sound/explosion_big.wav",
},
{
    /* filename */ "data/sound/flame_Arrow_SoundBible.com_618067908.wav",
},
{
    /* filename */ "data/sound/kick.wav",
},
{
    /* filename */ "data/sound/laugh.wav",
},
{
    /* filename */ "data/sound/magic_tinkle.wav",
},
{
    /* filename */ "data/sound/powerup.wav",
},
{
    /* filename */ "data/sound/saw.wav",
},
{
    /* filename */ "data/sound/scream_male.wav",
},
{
    /* filename */ "data/sound/shotgun_by_ra_the_sun_god.wav",
},
{
    /* filename */ "data/sound/shotgun_reload_by_ra_the_sun_god.wav",
},
{
    /* filename */ "data/sound/shriek.wav",
},
{
    /* filename */ "data/sound/slime.wav",
},
{
    /* filename */ "data/sound/small_fireball_SoundBible.com_1381880822.wav",
},
{
    /* filename */ "data/sound/swoosh_3_SoundBible.com_1573211927.wav",
},
{
    /* filename */ "data/sound/swords_collide_sound_explorer_2015600826.wav",
},
{
    /* filename */ "data/sound/teleport.wav",
},
{
    /* filename */ "data/sound/treasure.wav",
},
{
    /* filename */ "data/sound/wand_dead.wav",
},
{
    /* filename */ "data/sound/zombie_SoundBible.com_1966938763.wav",
},
{
    /* filename */ "data/sound/zombie_in_painSoundBible.com_134322253.wav",
},
{
    /* filename */ "data/things/acid1",
},
{
    /* filename */ "data/things/action_down",
},
{
    /* filename */ "data/things/action_left",
},
{
    /* filename */ "data/things/action_right",
},
{
    /* filename */ "data/things/action_sleep",
},
{
    /* filename */ "data/things/action_text",
},
{
    /* filename */ "data/things/action_trigger_on_hero",
},
{
    /* filename */ "data/things/action_trigger_on_monst",
},
{
    /* filename */ "data/things/action_trigger_on_wall",
},
{
    /* filename */ "data/things/action_up",
},
{
    /* filename */ "data/things/action_zap",
},
{
    /* filename */ "data/things/all_cheese",
},
{
    /* filename */ "data/things/anim_eyes",
},
{
    /* filename */ "data/things/anim_man",
},
{
    /* filename */ "data/things/anim_treasure_chest",
},
{
    /* filename */ "data/things/apple1",
},
{
    /* filename */ "data/things/apple2",
},
{
    /* filename */ "data/things/armor1",
},
{
    /* filename */ "data/things/armor2",
},
{
    /* filename */ "data/things/armor3",
},
{
    /* filename */ "data/things/armor4",
},
{
    /* filename */ "data/things/arrow",
},
{
    /* filename */ "data/things/axe1",
},
{
    /* filename */ "data/things/axe1_anim",
},
{
    /* filename */ "data/things/axe2",
},
{
    /* filename */ "data/things/axe2_anim",
},
{
    /* filename */ "data/things/axe3",
},
{
    /* filename */ "data/things/axe4",
},
{
    /* filename */ "data/things/axe5",
},
{
    /* filename */ "data/things/baby_death",
},
{
    /* filename */ "data/things/banana",
},
{
    /* filename */ "data/things/blood1",
},
{
    /* filename */ "data/things/blood2",
},
{
    /* filename */ "data/things/bomb",
},
{
    /* filename */ "data/things/bonepile1",
},
{
    /* filename */ "data/things/bonepile2",
},
{
    /* filename */ "data/things/bonepile3",
},
{
    /* filename */ "data/things/bonepile4",
},
{
    /* filename */ "data/things/boots1",
},
{
    /* filename */ "data/things/boots2",
},
{
    /* filename */ "data/things/boots3",
},
{
    /* filename */ "data/things/boots4",
},
{
    /* filename */ "data/things/boots5",
},
{
    /* filename */ "data/things/bow1",
},
{
    /* filename */ "data/things/bow1_anim",
},
{
    /* filename */ "data/things/bow2",
},
{
    /* filename */ "data/things/bow3",
},
{
    /* filename */ "data/things/bow4",
},
{
    /* filename */ "data/things/brazier",
},
{
    /* filename */ "data/things/bread",
},
{
    /* filename */ "data/things/bubbles1",
},
{
    /* filename */ "data/things/cheese",
},
{
    /* filename */ "data/things/chest1",
},
{
    /* filename */ "data/things/chest2",
},
{
    /* filename */ "data/things/cloudkill1",
},
{
    /* filename */ "data/things/cloudkill2",
},
{
    /* filename */ "data/things/club1",
},
{
    /* filename */ "data/things/club1_anim",
},
{
    /* filename */ "data/things/cobweb",
},
{
    /* filename */ "data/things/coins1",
},
{
    /* filename */ "data/things/corridor1",
},
{
    /* filename */ "data/things/corridor2",
},
{
    /* filename */ "data/things/corridor_wall1",
},
{
    /* filename */ "data/things/crystal1",
},
{
    /* filename */ "data/things/crystal2",
},
{
    /* filename */ "data/things/crystal3",
},
{
    /* filename */ "data/things/crystal4",
},
{
    /* filename */ "data/things/crystal5",
},
{
    /* filename */ "data/things/crystal6",
},
{
    /* filename */ "data/things/crystal7",
},
{
    /* filename */ "data/things/death",
},
{
    /* filename */ "data/things/death_cloud",
},
{
    /* filename */ "data/things/death_cloud_anim",
},
{
    /* filename */ "data/things/demon1",
},
{
    /* filename */ "data/things/demon2",
},
{
    /* filename */ "data/things/dirt1",
},
{
    /* filename */ "data/things/door1",
},
{
    /* filename */ "data/things/door2",
},
{
    /* filename */ "data/things/dragon1",
},
{
    /* filename */ "data/things/dragon2",
},
{
    /* filename */ "data/things/dragon3",
},
{
    /* filename */ "data/things/dragon4",
},
{
    /* filename */ "data/things/dwarf",
},
{
    /* filename */ "data/things/elf",
},
{
    /* filename */ "data/things/energy1",
},
{
    /* filename */ "data/things/energy2",
},
{
    /* filename */ "data/things/exit1",
},
{
    /* filename */ "data/things/explosion1",
},
{
    /* filename */ "data/things/explosion2",
},
{
    /* filename */ "data/things/explosion3",
},
{
    /* filename */ "data/things/explosion4",
},
{
    /* filename */ "data/things/eyebawl",
},
{
    /* filename */ "data/things/eyebawlmob",
},
{
    /* filename */ "data/things/fireball1",
},
{
    /* filename */ "data/things/fireball2",
},
{
    /* filename */ "data/things/fireball3",
},
{
    /* filename */ "data/things/fireball4",
},
{
    /* filename */ "data/things/fireburst1",
},
{
    /* filename */ "data/things/fireburst2",
},
{
    /* filename */ "data/things/fireburst3",
},
{
    /* filename */ "data/things/fireburst4",
},
{
    /* filename */ "data/things/flames1",
},
{
    /* filename */ "data/things/floor1",
},
{
    /* filename */ "data/things/floor10",
},
{
    /* filename */ "data/things/floor11",
},
{
    /* filename */ "data/things/floor12",
},
{
    /* filename */ "data/things/floor13",
},
{
    /* filename */ "data/things/floor14",
},
{
    /* filename */ "data/things/floor15",
},
{
    /* filename */ "data/things/floor16",
},
{
    /* filename */ "data/things/floor17",
},
{
    /* filename */ "data/things/floor18",
},
{
    /* filename */ "data/things/floor19",
},
{
    /* filename */ "data/things/floor2",
},
{
    /* filename */ "data/things/floor20",
},
{
    /* filename */ "data/things/floor21",
},
{
    /* filename */ "data/things/floor22",
},
{
    /* filename */ "data/things/floor23",
},
{
    /* filename */ "data/things/floor24",
},
{
    /* filename */ "data/things/floor25",
},
{
    /* filename */ "data/things/floor26",
},
{
    /* filename */ "data/things/floor27",
},
{
    /* filename */ "data/things/floor28",
},
{
    /* filename */ "data/things/floor29",
},
{
    /* filename */ "data/things/floor3",
},
{
    /* filename */ "data/things/floor30",
},
{
    /* filename */ "data/things/floor31",
},
{
    /* filename */ "data/things/floor32",
},
{
    /* filename */ "data/things/floor33",
},
{
    /* filename */ "data/things/floor34",
},
{
    /* filename */ "data/things/floor35",
},
{
    /* filename */ "data/things/floor36",
},
{
    /* filename */ "data/things/floor37",
},
{
    /* filename */ "data/things/floor38",
},
{
    /* filename */ "data/things/floor39",
},
{
    /* filename */ "data/things/floor4",
},
{
    /* filename */ "data/things/floor40",
},
{
    /* filename */ "data/things/floor41",
},
{
    /* filename */ "data/things/floor42",
},
{
    /* filename */ "data/things/floor43",
},
{
    /* filename */ "data/things/floor44",
},
{
    /* filename */ "data/things/floor45",
},
{
    /* filename */ "data/things/floor46",
},
{
    /* filename */ "data/things/floor47",
},
{
    /* filename */ "data/things/floor48",
},
{
    /* filename */ "data/things/floor49",
},
{
    /* filename */ "data/things/floor5",
},
{
    /* filename */ "data/things/floor50",
},
{
    /* filename */ "data/things/floor51",
},
{
    /* filename */ "data/things/floor52",
},
{
    /* filename */ "data/things/floor53",
},
{
    /* filename */ "data/things/floor54",
},
{
    /* filename */ "data/things/floor55",
},
{
    /* filename */ "data/things/floor56",
},
{
    /* filename */ "data/things/floor57",
},
{
    /* filename */ "data/things/floor58",
},
{
    /* filename */ "data/things/floor59",
},
{
    /* filename */ "data/things/floor6",
},
{
    /* filename */ "data/things/floor60",
},
{
    /* filename */ "data/things/floor61",
},
{
    /* filename */ "data/things/floor62",
},
{
    /* filename */ "data/things/floor63",
},
{
    /* filename */ "data/things/floor64",
},
{
    /* filename */ "data/things/floor65",
},
{
    /* filename */ "data/things/floor66",
},
{
    /* filename */ "data/things/floor67",
},
{
    /* filename */ "data/things/floor68",
},
{
    /* filename */ "data/things/floor7",
},
{
    /* filename */ "data/things/floor8",
},
{
    /* filename */ "data/things/floor9",
},
{
    /* filename */ "data/things/food_any",
},
{
    /* filename */ "data/things/gem1",
},
{
    /* filename */ "data/things/gem2",
},
{
    /* filename */ "data/things/gem3",
},
{
    /* filename */ "data/things/gem4",
},
{
    /* filename */ "data/things/gem5",
},
{
    /* filename */ "data/things/gem6",
},
{
    /* filename */ "data/things/gem7",
},
{
    /* filename */ "data/things/generator1",
},
{
    /* filename */ "data/things/generator5",
},
{
    /* filename */ "data/things/generator6",
},
{
    /* filename */ "data/things/generator7",
},
{
    /* filename */ "data/things/ghost1",
},
{
    /* filename */ "data/things/ghost2",
},
{
    /* filename */ "data/things/ghost3",
},
{
    /* filename */ "data/things/ghost4",
},
{
    /* filename */ "data/things/gobbler",
},
{
    /* filename */ "data/things/gobblermob",
},
{
    /* filename */ "data/things/grass1",
},
{
    /* filename */ "data/things/heart",
},
{
    /* filename */ "data/things/helmet1",
},
{
    /* filename */ "data/things/helmet2",
},
{
    /* filename */ "data/things/helmet3",
},
{
    /* filename */ "data/things/helmet4",
},
{
    /* filename */ "data/things/hit_miss",
},
{
    /* filename */ "data/things/hit_success",
},
{
    /* filename */ "data/things/jesus",
},
{
    /* filename */ "data/things/jesus_cloud",
},
{
    /* filename */ "data/things/jesus_cloud_anim",
},
{
    /* filename */ "data/things/juggernaut",
},
{
    /* filename */ "data/things/key",
},
{
    /* filename */ "data/things/keys2",
},
{
    /* filename */ "data/things/keys3",
},
{
    /* filename */ "data/things/lava1",
},
{
    /* filename */ "data/things/light",
},
{
    /* filename */ "data/things/magic1",
},
{
    /* filename */ "data/things/magic_cloud",
},
{
    /* filename */ "data/things/med_explosion1",
},
{
    /* filename */ "data/things/med_explosion2",
},
{
    /* filename */ "data/things/med_explosion3",
},
{
    /* filename */ "data/things/med_explosion4",
},
{
    /* filename */ "data/things/mob_any",
},
{
    /* filename */ "data/things/monst_any",
},
{
    /* filename */ "data/things/mushman1",
},
{
    /* filename */ "data/things/mushman2",
},
{
    /* filename */ "data/things/mushman3",
},
{
    /* filename */ "data/things/noentry",
},
{
    /* filename */ "data/things/orc1",
},
{
    /* filename */ "data/things/orc2",
},
{
    /* filename */ "data/things/orc3",
},
{
    /* filename */ "data/things/orc4",
},
{
    /* filename */ "data/things/orc5",
},
{
    /* filename */ "data/things/orcmob",
},
{
    /* filename */ "data/things/pellets",
},
{
    /* filename */ "data/things/pizza",
},
{
    /* filename */ "data/things/plant",
},
{
    /* filename */ "data/things/plantpod",
},
{
    /* filename */ "data/things/plasmaball1",
},
{
    /* filename */ "data/things/plasmaball2",
},
{
    /* filename */ "data/things/poison1",
},
{
    /* filename */ "data/things/poison2",
},
{
    /* filename */ "data/things/potion_any",
},
{
    /* filename */ "data/things/potion_cloudkill",
},
{
    /* filename */ "data/things/potion_fire",
},
{
    /* filename */ "data/things/potion_jesus",
},
{
    /* filename */ "data/things/potion_life",
},
{
    /* filename */ "data/things/potion_monsticide",
},
{
    /* filename */ "data/things/potion_shield",
},
{
    /* filename */ "data/things/powerup1",
},
{
    /* filename */ "data/things/ring1",
},
{
    /* filename */ "data/things/ring2",
},
{
    /* filename */ "data/things/ring3",
},
{
    /* filename */ "data/things/ring4",
},
{
    /* filename */ "data/things/ring5",
},
{
    /* filename */ "data/things/ring6",
},
{
    /* filename */ "data/things/ring_cloud",
},
{
    /* filename */ "data/things/ring_cloud_anim",
},
{
    /* filename */ "data/things/rock1",
},
{
    /* filename */ "data/things/rock1a",
},
{
    /* filename */ "data/things/rock2",
},
{
    /* filename */ "data/things/rock2a",
},
{
    /* filename */ "data/things/rock3",
},
{
    /* filename */ "data/things/rock3a",
},
{
    /* filename */ "data/things/rock4",
},
{
    /* filename */ "data/things/rock4a",
},
{
    /* filename */ "data/things/rock5",
},
{
    /* filename */ "data/things/rock5a",
},
{
    /* filename */ "data/things/rock6",
},
{
    /* filename */ "data/things/rock6a",
},
{
    /* filename */ "data/things/rock7",
},
{
    /* filename */ "data/things/rock7a",
},
{
    /* filename */ "data/things/sawblade1",
},
{
    /* filename */ "data/things/sawblade2",
},
{
    /* filename */ "data/things/sawblade3",
},
{
    /* filename */ "data/things/sawblade4",
},
{
    /* filename */ "data/things/sawblade5",
},
{
    /* filename */ "data/things/scythe1",
},
{
    /* filename */ "data/things/scythe1_anim",
},
{
    /* filename */ "data/things/shield1",
},
{
    /* filename */ "data/things/shield1_anim",
},
{
    /* filename */ "data/things/shop_floor1",
},
{
    /* filename */ "data/things/shopkeeper",
},
{
    /* filename */ "data/things/shotgun",
},
{
    /* filename */ "data/things/shotgun_anim",
},
{
    /* filename */ "data/things/silkball",
},
{
    /* filename */ "data/things/skeleton1",
},
{
    /* filename */ "data/things/skull1",
},
{
    /* filename */ "data/things/skull2",
},
{
    /* filename */ "data/things/slime1",
},
{
    /* filename */ "data/things/slime2",
},
{
    /* filename */ "data/things/slime3",
},
{
    /* filename */ "data/things/slime4",
},
{
    /* filename */ "data/things/slimeball",
},
{
    /* filename */ "data/things/small_explosion1",
},
{
    /* filename */ "data/things/small_explosion2",
},
{
    /* filename */ "data/things/small_explosion3",
},
{
    /* filename */ "data/things/small_explosion4",
},
{
    /* filename */ "data/things/sorceror",
},
{
    /* filename */ "data/things/sorcerormob",
},
{
    /* filename */ "data/things/spam",
},
{
    /* filename */ "data/things/sparkle",
},
{
    /* filename */ "data/things/spider1",
},
{
    /* filename */ "data/things/spider2",
},
{
    /* filename */ "data/things/squidling1",
},
{
    /* filename */ "data/things/squidling2",
},
{
    /* filename */ "data/things/stick1",
},
{
    /* filename */ "data/things/stick1_anim",
},
{
    /* filename */ "data/things/stick2",
},
{
    /* filename */ "data/things/stick2_anim",
},
{
    /* filename */ "data/things/stickyslime",
},
{
    /* filename */ "data/things/sword1",
},
{
    /* filename */ "data/things/sword10",
},
{
    /* filename */ "data/things/sword10_anim",
},
{
    /* filename */ "data/things/sword1_anim",
},
{
    /* filename */ "data/things/sword2",
},
{
    /* filename */ "data/things/sword2_anim",
},
{
    /* filename */ "data/things/sword3",
},
{
    /* filename */ "data/things/sword3_anim",
},
{
    /* filename */ "data/things/sword4",
},
{
    /* filename */ "data/things/sword4_anim",
},
{
    /* filename */ "data/things/sword5",
},
{
    /* filename */ "data/things/sword5_anim",
},
{
    /* filename */ "data/things/sword6",
},
{
    /* filename */ "data/things/sword6_anim",
},
{
    /* filename */ "data/things/sword7",
},
{
    /* filename */ "data/things/sword7_anim",
},
{
    /* filename */ "data/things/sword8",
},
{
    /* filename */ "data/things/sword8_anim",
},
{
    /* filename */ "data/things/sword9",
},
{
    /* filename */ "data/things/sword9_anim",
},
{
    /* filename */ "data/things/teleport1",
},
{
    /* filename */ "data/things/torch",
},
{
    /* filename */ "data/things/torches",
},
{
    /* filename */ "data/things/trap1",
},
{
    /* filename */ "data/things/trap2",
},
{
    /* filename */ "data/things/trap3",
},
{
    /* filename */ "data/things/treasure_any",
},
{
    /* filename */ "data/things/valkyrie",
},
{
    /* filename */ "data/things/wall1",
},
{
    /* filename */ "data/things/wall10",
},
{
    /* filename */ "data/things/wall11",
},
{
    /* filename */ "data/things/wall2",
},
{
    /* filename */ "data/things/wall3",
},
{
    /* filename */ "data/things/wall4",
},
{
    /* filename */ "data/things/wall5",
},
{
    /* filename */ "data/things/wall6",
},
{
    /* filename */ "data/things/wall7",
},
{
    /* filename */ "data/things/wall8",
},
{
    /* filename */ "data/things/wall9",
},
{
    /* filename */ "data/things/wall_lit1",
},
{
    /* filename */ "data/things/wand1",
},
{
    /* filename */ "data/things/wand1_anim",
},
{
    /* filename */ "data/things/wand2",
},
{
    /* filename */ "data/things/wand2_anim",
},
{
    /* filename */ "data/things/wand3",
},
{
    /* filename */ "data/things/wand3_anim",
},
{
    /* filename */ "data/things/wand4",
},
{
    /* filename */ "data/things/wand4_anim",
},
{
    /* filename */ "data/things/warrior",
},
{
    /* filename */ "data/things/water",
},
{
    /* filename */ "data/things/water_poison",
},
{
    /* filename */ "data/things/weapon_any",
},
{
    /* filename */ "data/things/weapon_swing1",
},
{
    /* filename */ "data/things/weapon_swing2",
},
{
    /* filename */ "data/things/wizard",
},
{
    /* filename */ "data/things/zombie1",
},
{
    /* filename */ "data/things/zombie2",
},
{
    /* filename */ "data/things/zombie3",
},
{
    /* filename */ "data/things/zombie4",
},
{
    /* filename */ "data/things/zombie5",
},
{
    /* filename */ "data/things/zombie_corpse1",
},
{
    /* filename */ "data/things/zombie_corpse2",
},
{
    /* filename */ "data/things/zombie_corpse3",
},
{
    /* filename */ "data/things/zombie_corpse4",
},
{
    /* filename */ "data/things/zombie_corpse5",
},
{
    /* filename */ "data/things/zombiemob",
},
{
    /* filename */ "data/ttf/LICENSE.txt",
},
{
    /* filename */ "data/ttf/OFL.txt",
},
{
    /* filename */ "data/ttf/Readme.txt",
},
{
    /* filename */ "data/ttf/emulogic.gif",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize10.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize10.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize12.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize12.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize14.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize14.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize16.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize16.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize18.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize18.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize2.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize2.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize20.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize20.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize22.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize22.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize24.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize24.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize26.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize26.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize28.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize28.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize30.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize30.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize32.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize32.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize34.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize34.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize36.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize36.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize38.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize38.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize4.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize4.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize40.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize40.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize42.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize42.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize44.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize44.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize46.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize46.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize48.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize48.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize50.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize50.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize52.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize52.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize54.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize54.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize56.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize56.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize58.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize58.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize6.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize6.tga",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize8.data",
},
{
    /* filename */ "data/ttf/emulogic.ttf_pointsize8.tga",
},
    {0},
};

void ramdisk_init (void)
{
#ifndef NORAMDISK
    ramdisk_data[0].data = data_gfx_anim_eyes_tga_start;
    ramdisk_data[0].len = (int32_t) (data_gfx_anim_eyes_tga_end - data_gfx_anim_eyes_tga_start);
    ramdisk_data[1].data = data_gfx_anim_treasure_chest_tga_start;
    ramdisk_data[1].len = (int32_t) (data_gfx_anim_treasure_chest_tga_end - data_gfx_anim_treasure_chest_tga_start);
    ramdisk_data[2].data = data_gfx_axe_tga_start;
    ramdisk_data[2].len = (int32_t) (data_gfx_axe_tga_end - data_gfx_axe_tga_start);
    ramdisk_data[3].data = data_gfx_button_black_tga_start;
    ramdisk_data[3].len = (int32_t) (data_gfx_button_black_tga_end - data_gfx_button_black_tga_start);
    ramdisk_data[4].data = data_gfx_cloudkill_tga_start;
    ramdisk_data[4].len = (int32_t) (data_gfx_cloudkill_tga_end - data_gfx_cloudkill_tga_start);
    ramdisk_data[5].data = data_gfx_crystal_tga_start;
    ramdisk_data[5].len = (int32_t) (data_gfx_crystal_tga_end - data_gfx_crystal_tga_start);
    ramdisk_data[6].data = data_gfx_crystalball_tga_start;
    ramdisk_data[6].len = (int32_t) (data_gfx_crystalball_tga_end - data_gfx_crystalball_tga_start);
    ramdisk_data[7].data = data_gfx_crystalball_purple_tga_start;
    ramdisk_data[7].len = (int32_t) (data_gfx_crystalball_purple_tga_end - data_gfx_crystalball_purple_tga_start);
    ramdisk_data[8].data = data_gfx_death_cloud_tga_start;
    ramdisk_data[8].len = (int32_t) (data_gfx_death_cloud_tga_end - data_gfx_death_cloud_tga_start);
    ramdisk_data[9].data = data_gfx_dragon_tga_start;
    ramdisk_data[9].len = (int32_t) (data_gfx_dragon_tga_end - data_gfx_dragon_tga_start);
    ramdisk_data[10].data = data_gfx_explosion_tga_start;
    ramdisk_data[10].len = (int32_t) (data_gfx_explosion_tga_end - data_gfx_explosion_tga_start);
    ramdisk_data[11].data = data_gfx_giant_rock_tga_start;
    ramdisk_data[11].len = (int32_t) (data_gfx_giant_rock_tga_end - data_gfx_giant_rock_tga_start);
    ramdisk_data[12].data = data_gfx_gorynlich_tga_start;
    ramdisk_data[12].len = (int32_t) (data_gfx_gorynlich_tga_end - data_gfx_gorynlich_tga_start);
    ramdisk_data[13].data = data_gfx_gothic_full_screen_tga_start;
    ramdisk_data[13].len = (int32_t) (data_gfx_gothic_full_screen_tga_end - data_gfx_gothic_full_screen_tga_start);
    ramdisk_data[14].data = data_gfx_gothic_tall_axe_tga_start;
    ramdisk_data[14].len = (int32_t) (data_gfx_gothic_tall_axe_tga_end - data_gfx_gothic_tall_axe_tga_start);
    ramdisk_data[15].data = data_gfx_gothic_tall_chest_tga_start;
    ramdisk_data[15].len = (int32_t) (data_gfx_gothic_tall_chest_tga_end - data_gfx_gothic_tall_chest_tga_start);
    ramdisk_data[16].data = data_gfx_gothic_tall_skull_tga_start;
    ramdisk_data[16].len = (int32_t) (data_gfx_gothic_tall_skull_tga_end - data_gfx_gothic_tall_skull_tga_start);
    ramdisk_data[17].data = data_gfx_gothic_wide_tga_start;
    ramdisk_data[17].len = (int32_t) (data_gfx_gothic_wide_tga_end - data_gfx_gothic_wide_tga_start);
    ramdisk_data[18].data = data_gfx_gravestone_tga_start;
    ramdisk_data[18].len = (int32_t) (data_gfx_gravestone_tga_end - data_gfx_gravestone_tga_start);
    ramdisk_data[19].data = data_gfx_gravestone2_tga_start;
    ramdisk_data[19].len = (int32_t) (data_gfx_gravestone2_tga_end - data_gfx_gravestone2_tga_start);
    ramdisk_data[20].data = data_gfx_intro1_tga_start;
    ramdisk_data[20].len = (int32_t) (data_gfx_intro1_tga_end - data_gfx_intro1_tga_start);
    ramdisk_data[21].data = data_gfx_intro2_tga_start;
    ramdisk_data[21].len = (int32_t) (data_gfx_intro2_tga_end - data_gfx_intro2_tga_start);
    ramdisk_data[22].data = data_gfx_intro3_tga_start;
    ramdisk_data[22].len = (int32_t) (data_gfx_intro3_tga_end - data_gfx_intro3_tga_start);
    ramdisk_data[23].data = data_gfx_intro4_tga_start;
    ramdisk_data[23].len = (int32_t) (data_gfx_intro4_tga_end - data_gfx_intro4_tga_start);
    ramdisk_data[24].data = data_gfx_intro5_tga_start;
    ramdisk_data[24].len = (int32_t) (data_gfx_intro5_tga_end - data_gfx_intro5_tga_start);
    ramdisk_data[25].data = data_gfx_itembar_tga_start;
    ramdisk_data[25].len = (int32_t) (data_gfx_itembar_tga_end - data_gfx_itembar_tga_start);
    ramdisk_data[26].data = data_gfx_jesus_tga_start;
    ramdisk_data[26].len = (int32_t) (data_gfx_jesus_tga_end - data_gfx_jesus_tga_start);
    ramdisk_data[27].data = data_gfx_magic_tga_start;
    ramdisk_data[27].len = (int32_t) (data_gfx_magic_tga_end - data_gfx_magic_tga_start);
    ramdisk_data[28].data = data_gfx_magic_cloud_tga_start;
    ramdisk_data[28].len = (int32_t) (data_gfx_magic_cloud_tga_end - data_gfx_magic_cloud_tga_start);
    ramdisk_data[29].data = data_gfx_main_title_tga_start;
    ramdisk_data[29].len = (int32_t) (data_gfx_main_title_tga_end - data_gfx_main_title_tga_start);
    ramdisk_data[30].data = data_gfx_player1_tga_start;
    ramdisk_data[30].len = (int32_t) (data_gfx_player1_tga_end - data_gfx_player1_tga_start);
    ramdisk_data[31].data = data_gfx_player2_tga_start;
    ramdisk_data[31].len = (int32_t) (data_gfx_player2_tga_end - data_gfx_player2_tga_start);
    ramdisk_data[32].data = data_gfx_player3_tga_start;
    ramdisk_data[32].len = (int32_t) (data_gfx_player3_tga_end - data_gfx_player3_tga_start);
    ramdisk_data[33].data = data_gfx_player4_tga_start;
    ramdisk_data[33].len = (int32_t) (data_gfx_player4_tga_end - data_gfx_player4_tga_start);
    ramdisk_data[34].data = data_gfx_player5_tga_start;
    ramdisk_data[34].len = (int32_t) (data_gfx_player5_tga_end - data_gfx_player5_tga_start);
    ramdisk_data[35].data = data_gfx_players_tga_start;
    ramdisk_data[35].len = (int32_t) (data_gfx_players_tga_end - data_gfx_players_tga_start);
    ramdisk_data[36].data = data_gfx_poison_tga_start;
    ramdisk_data[36].len = (int32_t) (data_gfx_poison_tga_end - data_gfx_poison_tga_start);
    ramdisk_data[37].data = data_gfx_powerup1_tga_start;
    ramdisk_data[37].len = (int32_t) (data_gfx_powerup1_tga_end - data_gfx_powerup1_tga_start);
    ramdisk_data[38].data = data_gfx_ring_tga_start;
    ramdisk_data[38].len = (int32_t) (data_gfx_ring_tga_end - data_gfx_ring_tga_start);
    ramdisk_data[39].data = data_gfx_sawblade_tga_start;
    ramdisk_data[39].len = (int32_t) (data_gfx_sawblade_tga_end - data_gfx_sawblade_tga_start);
    ramdisk_data[40].data = data_gfx_sawblade2_tga_start;
    ramdisk_data[40].len = (int32_t) (data_gfx_sawblade2_tga_end - data_gfx_sawblade2_tga_start);
    ramdisk_data[41].data = data_gfx_sawblade3_tga_start;
    ramdisk_data[41].len = (int32_t) (data_gfx_sawblade3_tga_end - data_gfx_sawblade3_tga_start);
    ramdisk_data[42].data = data_gfx_sawblade4_tga_start;
    ramdisk_data[42].len = (int32_t) (data_gfx_sawblade4_tga_end - data_gfx_sawblade4_tga_start);
    ramdisk_data[43].data = data_gfx_sawblade5_tga_start;
    ramdisk_data[43].len = (int32_t) (data_gfx_sawblade5_tga_end - data_gfx_sawblade5_tga_start);
    ramdisk_data[44].data = data_gfx_shield1_tga_start;
    ramdisk_data[44].len = (int32_t) (data_gfx_shield1_tga_end - data_gfx_shield1_tga_start);
    ramdisk_data[45].data = data_gfx_sprites_tga_start;
    ramdisk_data[45].len = (int32_t) (data_gfx_sprites_tga_end - data_gfx_sprites_tga_start);
    ramdisk_data[46].data = data_gfx_sprites_large_tga_start;
    ramdisk_data[46].len = (int32_t) (data_gfx_sprites_large_tga_end - data_gfx_sprites_large_tga_start);
    ramdisk_data[47].data = data_gfx_squiggles_tga_start;
    ramdisk_data[47].len = (int32_t) (data_gfx_squiggles_tga_end - data_gfx_squiggles_tga_start);
    ramdisk_data[48].data = data_gfx_tall_tga_start;
    ramdisk_data[48].len = (int32_t) (data_gfx_tall_tga_end - data_gfx_tall_tga_start);
    ramdisk_data[49].data = data_gfx_teleport_tga_start;
    ramdisk_data[49].len = (int32_t) (data_gfx_teleport_tga_end - data_gfx_teleport_tga_start);
    ramdisk_data[50].data = data_gfx_title_tga_start;
    ramdisk_data[50].len = (int32_t) (data_gfx_title_tga_end - data_gfx_title_tga_start);
    ramdisk_data[51].data = data_gfx_title2_tga_start;
    ramdisk_data[51].len = (int32_t) (data_gfx_title2_tga_end - data_gfx_title2_tga_start);
    ramdisk_data[52].data = data_gfx_title3_tga_start;
    ramdisk_data[52].len = (int32_t) (data_gfx_title3_tga_end - data_gfx_title3_tga_start);
    ramdisk_data[53].data = data_gfx_title4_tga_start;
    ramdisk_data[53].len = (int32_t) (data_gfx_title4_tga_end - data_gfx_title4_tga_start);
    ramdisk_data[54].data = data_gfx_title5_tga_start;
    ramdisk_data[54].len = (int32_t) (data_gfx_title5_tga_end - data_gfx_title5_tga_start);
    ramdisk_data[55].data = data_gfx_title6_tga_start;
    ramdisk_data[55].len = (int32_t) (data_gfx_title6_tga_end - data_gfx_title6_tga_start);
    ramdisk_data[56].data = data_gfx_title_small_tga_start;
    ramdisk_data[56].len = (int32_t) (data_gfx_title_small_tga_end - data_gfx_title_small_tga_start);
    ramdisk_data[57].data = data_gfx_wall_floor_tga_start;
    ramdisk_data[57].len = (int32_t) (data_gfx_wall_floor_tga_end - data_gfx_wall_floor_tga_start);
    ramdisk_data[58].data = data_gfx_window_gothic_wide_tga_start;
    ramdisk_data[58].len = (int32_t) (data_gfx_window_gothic_wide_tga_end - data_gfx_window_gothic_wide_tga_start);
    ramdisk_data[59].data = data_levels_1_1_start;
    ramdisk_data[59].len = (int32_t) (data_levels_1_1_end - data_levels_1_1_start);
    ramdisk_data[60].data = data_levels_1_10_start;
    ramdisk_data[60].len = (int32_t) (data_levels_1_10_end - data_levels_1_10_start);
    ramdisk_data[61].data = data_levels_1_2_start;
    ramdisk_data[61].len = (int32_t) (data_levels_1_2_end - data_levels_1_2_start);
    ramdisk_data[62].data = data_levels_1_3_start;
    ramdisk_data[62].len = (int32_t) (data_levels_1_3_end - data_levels_1_3_start);
    ramdisk_data[63].data = data_levels_1_4_start;
    ramdisk_data[63].len = (int32_t) (data_levels_1_4_end - data_levels_1_4_start);
    ramdisk_data[64].data = data_levels_1_5_start;
    ramdisk_data[64].len = (int32_t) (data_levels_1_5_end - data_levels_1_5_start);
    ramdisk_data[65].data = data_levels_1_6_start;
    ramdisk_data[65].len = (int32_t) (data_levels_1_6_end - data_levels_1_6_start);
    ramdisk_data[66].data = data_levels_1_7_start;
    ramdisk_data[66].len = (int32_t) (data_levels_1_7_end - data_levels_1_7_start);
    ramdisk_data[67].data = data_levels_1_8_start;
    ramdisk_data[67].len = (int32_t) (data_levels_1_8_end - data_levels_1_8_start);
    ramdisk_data[68].data = data_levels_1_9_start;
    ramdisk_data[68].len = (int32_t) (data_levels_1_9_end - data_levels_1_9_start);
    ramdisk_data[69].data = data_levels_10_1_start;
    ramdisk_data[69].len = (int32_t) (data_levels_10_1_end - data_levels_10_1_start);
    ramdisk_data[70].data = data_levels_10_10_start;
    ramdisk_data[70].len = (int32_t) (data_levels_10_10_end - data_levels_10_10_start);
    ramdisk_data[71].data = data_levels_10_2_start;
    ramdisk_data[71].len = (int32_t) (data_levels_10_2_end - data_levels_10_2_start);
    ramdisk_data[72].data = data_levels_10_3_start;
    ramdisk_data[72].len = (int32_t) (data_levels_10_3_end - data_levels_10_3_start);
    ramdisk_data[73].data = data_levels_10_4_start;
    ramdisk_data[73].len = (int32_t) (data_levels_10_4_end - data_levels_10_4_start);
    ramdisk_data[74].data = data_levels_10_5_start;
    ramdisk_data[74].len = (int32_t) (data_levels_10_5_end - data_levels_10_5_start);
    ramdisk_data[75].data = data_levels_10_6_start;
    ramdisk_data[75].len = (int32_t) (data_levels_10_6_end - data_levels_10_6_start);
    ramdisk_data[76].data = data_levels_10_7_start;
    ramdisk_data[76].len = (int32_t) (data_levels_10_7_end - data_levels_10_7_start);
    ramdisk_data[77].data = data_levels_10_8_start;
    ramdisk_data[77].len = (int32_t) (data_levels_10_8_end - data_levels_10_8_start);
    ramdisk_data[78].data = data_levels_10_9_start;
    ramdisk_data[78].len = (int32_t) (data_levels_10_9_end - data_levels_10_9_start);
    ramdisk_data[79].data = data_levels_2_1_start;
    ramdisk_data[79].len = (int32_t) (data_levels_2_1_end - data_levels_2_1_start);
    ramdisk_data[80].data = data_levels_2_10_start;
    ramdisk_data[80].len = (int32_t) (data_levels_2_10_end - data_levels_2_10_start);
    ramdisk_data[81].data = data_levels_2_2_start;
    ramdisk_data[81].len = (int32_t) (data_levels_2_2_end - data_levels_2_2_start);
    ramdisk_data[82].data = data_levels_2_3_start;
    ramdisk_data[82].len = (int32_t) (data_levels_2_3_end - data_levels_2_3_start);
    ramdisk_data[83].data = data_levels_2_4_start;
    ramdisk_data[83].len = (int32_t) (data_levels_2_4_end - data_levels_2_4_start);
    ramdisk_data[84].data = data_levels_2_5_start;
    ramdisk_data[84].len = (int32_t) (data_levels_2_5_end - data_levels_2_5_start);
    ramdisk_data[85].data = data_levels_2_6_start;
    ramdisk_data[85].len = (int32_t) (data_levels_2_6_end - data_levels_2_6_start);
    ramdisk_data[86].data = data_levels_2_7_start;
    ramdisk_data[86].len = (int32_t) (data_levels_2_7_end - data_levels_2_7_start);
    ramdisk_data[87].data = data_levels_2_8_start;
    ramdisk_data[87].len = (int32_t) (data_levels_2_8_end - data_levels_2_8_start);
    ramdisk_data[88].data = data_levels_2_9_start;
    ramdisk_data[88].len = (int32_t) (data_levels_2_9_end - data_levels_2_9_start);
    ramdisk_data[89].data = data_levels_3_1_start;
    ramdisk_data[89].len = (int32_t) (data_levels_3_1_end - data_levels_3_1_start);
    ramdisk_data[90].data = data_levels_3_10_start;
    ramdisk_data[90].len = (int32_t) (data_levels_3_10_end - data_levels_3_10_start);
    ramdisk_data[91].data = data_levels_3_2_start;
    ramdisk_data[91].len = (int32_t) (data_levels_3_2_end - data_levels_3_2_start);
    ramdisk_data[92].data = data_levels_3_3_start;
    ramdisk_data[92].len = (int32_t) (data_levels_3_3_end - data_levels_3_3_start);
    ramdisk_data[93].data = data_levels_3_4_start;
    ramdisk_data[93].len = (int32_t) (data_levels_3_4_end - data_levels_3_4_start);
    ramdisk_data[94].data = data_levels_3_5_start;
    ramdisk_data[94].len = (int32_t) (data_levels_3_5_end - data_levels_3_5_start);
    ramdisk_data[95].data = data_levels_3_6_start;
    ramdisk_data[95].len = (int32_t) (data_levels_3_6_end - data_levels_3_6_start);
    ramdisk_data[96].data = data_levels_3_7_start;
    ramdisk_data[96].len = (int32_t) (data_levels_3_7_end - data_levels_3_7_start);
    ramdisk_data[97].data = data_levels_3_8_start;
    ramdisk_data[97].len = (int32_t) (data_levels_3_8_end - data_levels_3_8_start);
    ramdisk_data[98].data = data_levels_3_9_start;
    ramdisk_data[98].len = (int32_t) (data_levels_3_9_end - data_levels_3_9_start);
    ramdisk_data[99].data = data_levels_4_1_start;
    ramdisk_data[99].len = (int32_t) (data_levels_4_1_end - data_levels_4_1_start);
    ramdisk_data[100].data = data_levels_4_10_start;
    ramdisk_data[100].len = (int32_t) (data_levels_4_10_end - data_levels_4_10_start);
    ramdisk_data[101].data = data_levels_4_2_start;
    ramdisk_data[101].len = (int32_t) (data_levels_4_2_end - data_levels_4_2_start);
    ramdisk_data[102].data = data_levels_4_3_start;
    ramdisk_data[102].len = (int32_t) (data_levels_4_3_end - data_levels_4_3_start);
    ramdisk_data[103].data = data_levels_4_4_start;
    ramdisk_data[103].len = (int32_t) (data_levels_4_4_end - data_levels_4_4_start);
    ramdisk_data[104].data = data_levels_4_5_start;
    ramdisk_data[104].len = (int32_t) (data_levels_4_5_end - data_levels_4_5_start);
    ramdisk_data[105].data = data_levels_4_6_start;
    ramdisk_data[105].len = (int32_t) (data_levels_4_6_end - data_levels_4_6_start);
    ramdisk_data[106].data = data_levels_4_7_start;
    ramdisk_data[106].len = (int32_t) (data_levels_4_7_end - data_levels_4_7_start);
    ramdisk_data[107].data = data_levels_4_8_start;
    ramdisk_data[107].len = (int32_t) (data_levels_4_8_end - data_levels_4_8_start);
    ramdisk_data[108].data = data_levels_4_9_start;
    ramdisk_data[108].len = (int32_t) (data_levels_4_9_end - data_levels_4_9_start);
    ramdisk_data[109].data = data_levels_5_1_start;
    ramdisk_data[109].len = (int32_t) (data_levels_5_1_end - data_levels_5_1_start);
    ramdisk_data[110].data = data_levels_5_10_start;
    ramdisk_data[110].len = (int32_t) (data_levels_5_10_end - data_levels_5_10_start);
    ramdisk_data[111].data = data_levels_5_2_start;
    ramdisk_data[111].len = (int32_t) (data_levels_5_2_end - data_levels_5_2_start);
    ramdisk_data[112].data = data_levels_5_3_start;
    ramdisk_data[112].len = (int32_t) (data_levels_5_3_end - data_levels_5_3_start);
    ramdisk_data[113].data = data_levels_5_4_start;
    ramdisk_data[113].len = (int32_t) (data_levels_5_4_end - data_levels_5_4_start);
    ramdisk_data[114].data = data_levels_5_5_start;
    ramdisk_data[114].len = (int32_t) (data_levels_5_5_end - data_levels_5_5_start);
    ramdisk_data[115].data = data_levels_5_6_start;
    ramdisk_data[115].len = (int32_t) (data_levels_5_6_end - data_levels_5_6_start);
    ramdisk_data[116].data = data_levels_5_7_start;
    ramdisk_data[116].len = (int32_t) (data_levels_5_7_end - data_levels_5_7_start);
    ramdisk_data[117].data = data_levels_5_8_start;
    ramdisk_data[117].len = (int32_t) (data_levels_5_8_end - data_levels_5_8_start);
    ramdisk_data[118].data = data_levels_5_9_start;
    ramdisk_data[118].len = (int32_t) (data_levels_5_9_end - data_levels_5_9_start);
    ramdisk_data[119].data = data_levels_6_1_start;
    ramdisk_data[119].len = (int32_t) (data_levels_6_1_end - data_levels_6_1_start);
    ramdisk_data[120].data = data_levels_6_10_start;
    ramdisk_data[120].len = (int32_t) (data_levels_6_10_end - data_levels_6_10_start);
    ramdisk_data[121].data = data_levels_6_2_start;
    ramdisk_data[121].len = (int32_t) (data_levels_6_2_end - data_levels_6_2_start);
    ramdisk_data[122].data = data_levels_6_3_start;
    ramdisk_data[122].len = (int32_t) (data_levels_6_3_end - data_levels_6_3_start);
    ramdisk_data[123].data = data_levels_6_4_start;
    ramdisk_data[123].len = (int32_t) (data_levels_6_4_end - data_levels_6_4_start);
    ramdisk_data[124].data = data_levels_6_5_start;
    ramdisk_data[124].len = (int32_t) (data_levels_6_5_end - data_levels_6_5_start);
    ramdisk_data[125].data = data_levels_6_6_start;
    ramdisk_data[125].len = (int32_t) (data_levels_6_6_end - data_levels_6_6_start);
    ramdisk_data[126].data = data_levels_6_7_start;
    ramdisk_data[126].len = (int32_t) (data_levels_6_7_end - data_levels_6_7_start);
    ramdisk_data[127].data = data_levels_6_8_start;
    ramdisk_data[127].len = (int32_t) (data_levels_6_8_end - data_levels_6_8_start);
    ramdisk_data[128].data = data_levels_6_9_start;
    ramdisk_data[128].len = (int32_t) (data_levels_6_9_end - data_levels_6_9_start);
    ramdisk_data[129].data = data_levels_7_1_start;
    ramdisk_data[129].len = (int32_t) (data_levels_7_1_end - data_levels_7_1_start);
    ramdisk_data[130].data = data_levels_7_10_start;
    ramdisk_data[130].len = (int32_t) (data_levels_7_10_end - data_levels_7_10_start);
    ramdisk_data[131].data = data_levels_7_2_start;
    ramdisk_data[131].len = (int32_t) (data_levels_7_2_end - data_levels_7_2_start);
    ramdisk_data[132].data = data_levels_7_3_start;
    ramdisk_data[132].len = (int32_t) (data_levels_7_3_end - data_levels_7_3_start);
    ramdisk_data[133].data = data_levels_7_4_start;
    ramdisk_data[133].len = (int32_t) (data_levels_7_4_end - data_levels_7_4_start);
    ramdisk_data[134].data = data_levels_7_5_start;
    ramdisk_data[134].len = (int32_t) (data_levels_7_5_end - data_levels_7_5_start);
    ramdisk_data[135].data = data_levels_7_6_start;
    ramdisk_data[135].len = (int32_t) (data_levels_7_6_end - data_levels_7_6_start);
    ramdisk_data[136].data = data_levels_7_7_start;
    ramdisk_data[136].len = (int32_t) (data_levels_7_7_end - data_levels_7_7_start);
    ramdisk_data[137].data = data_levels_7_8_start;
    ramdisk_data[137].len = (int32_t) (data_levels_7_8_end - data_levels_7_8_start);
    ramdisk_data[138].data = data_levels_7_9_start;
    ramdisk_data[138].len = (int32_t) (data_levels_7_9_end - data_levels_7_9_start);
    ramdisk_data[139].data = data_levels_8_1_start;
    ramdisk_data[139].len = (int32_t) (data_levels_8_1_end - data_levels_8_1_start);
    ramdisk_data[140].data = data_levels_8_10_start;
    ramdisk_data[140].len = (int32_t) (data_levels_8_10_end - data_levels_8_10_start);
    ramdisk_data[141].data = data_levels_8_2_start;
    ramdisk_data[141].len = (int32_t) (data_levels_8_2_end - data_levels_8_2_start);
    ramdisk_data[142].data = data_levels_8_3_start;
    ramdisk_data[142].len = (int32_t) (data_levels_8_3_end - data_levels_8_3_start);
    ramdisk_data[143].data = data_levels_8_4_start;
    ramdisk_data[143].len = (int32_t) (data_levels_8_4_end - data_levels_8_4_start);
    ramdisk_data[144].data = data_levels_8_5_start;
    ramdisk_data[144].len = (int32_t) (data_levels_8_5_end - data_levels_8_5_start);
    ramdisk_data[145].data = data_levels_8_6_start;
    ramdisk_data[145].len = (int32_t) (data_levels_8_6_end - data_levels_8_6_start);
    ramdisk_data[146].data = data_levels_8_7_start;
    ramdisk_data[146].len = (int32_t) (data_levels_8_7_end - data_levels_8_7_start);
    ramdisk_data[147].data = data_levels_8_8_start;
    ramdisk_data[147].len = (int32_t) (data_levels_8_8_end - data_levels_8_8_start);
    ramdisk_data[148].data = data_levels_8_9_start;
    ramdisk_data[148].len = (int32_t) (data_levels_8_9_end - data_levels_8_9_start);
    ramdisk_data[149].data = data_levels_9_1_start;
    ramdisk_data[149].len = (int32_t) (data_levels_9_1_end - data_levels_9_1_start);
    ramdisk_data[150].data = data_levels_9_10_start;
    ramdisk_data[150].len = (int32_t) (data_levels_9_10_end - data_levels_9_10_start);
    ramdisk_data[151].data = data_levels_9_2_start;
    ramdisk_data[151].len = (int32_t) (data_levels_9_2_end - data_levels_9_2_start);
    ramdisk_data[152].data = data_levels_9_3_start;
    ramdisk_data[152].len = (int32_t) (data_levels_9_3_end - data_levels_9_3_start);
    ramdisk_data[153].data = data_levels_9_4_start;
    ramdisk_data[153].len = (int32_t) (data_levels_9_4_end - data_levels_9_4_start);
    ramdisk_data[154].data = data_levels_9_5_start;
    ramdisk_data[154].len = (int32_t) (data_levels_9_5_end - data_levels_9_5_start);
    ramdisk_data[155].data = data_levels_9_6_start;
    ramdisk_data[155].len = (int32_t) (data_levels_9_6_end - data_levels_9_6_start);
    ramdisk_data[156].data = data_levels_9_7_start;
    ramdisk_data[156].len = (int32_t) (data_levels_9_7_end - data_levels_9_7_start);
    ramdisk_data[157].data = data_levels_9_8_start;
    ramdisk_data[157].len = (int32_t) (data_levels_9_8_end - data_levels_9_8_start);
    ramdisk_data[158].data = data_levels_9_9_start;
    ramdisk_data[158].len = (int32_t) (data_levels_9_9_end - data_levels_9_9_start);
    ramdisk_data[159].data = data_map_jigsaw_map_start;
    ramdisk_data[159].len = (int32_t) (data_map_jigsaw_map_end - data_map_jigsaw_map_start);
    ramdisk_data[160].data = data_music_DST_Alters_ogg_start;
    ramdisk_data[160].len = (int32_t) (data_music_DST_Alters_ogg_end - data_music_DST_Alters_ogg_start);
    ramdisk_data[161].data = data_music_DST_AncientCurse_II_ogg_start;
    ramdisk_data[161].len = (int32_t) (data_music_DST_AncientCurse_II_ogg_end - data_music_DST_AncientCurse_II_ogg_start);
    ramdisk_data[162].data = data_music_DST_Arch_Delerium_ogg_start;
    ramdisk_data[162].len = (int32_t) (data_music_DST_Arch_Delerium_ogg_end - data_music_DST_Arch_Delerium_ogg_start);
    ramdisk_data[163].data = data_music_DST_Arches_ogg_start;
    ramdisk_data[163].len = (int32_t) (data_music_DST_Arches_ogg_end - data_music_DST_Arches_ogg_start);
    ramdisk_data[164].data = data_music_DST_Aronara_ogg_start;
    ramdisk_data[164].len = (int32_t) (data_music_DST_Aronara_ogg_end - data_music_DST_Aronara_ogg_start);
    ramdisk_data[165].data = data_music_DST_BattleLands_ogg_start;
    ramdisk_data[165].len = (int32_t) (data_music_DST_BattleLands_ogg_end - data_music_DST_BattleLands_ogg_start);
    ramdisk_data[166].data = data_music_DST_Beneathere_ogg_start;
    ramdisk_data[166].len = (int32_t) (data_music_DST_Beneathere_ogg_end - data_music_DST_Beneathere_ogg_start);
    ramdisk_data[167].data = data_music_DST_BlackRiver_ogg_start;
    ramdisk_data[167].len = (int32_t) (data_music_DST_BlackRiver_ogg_end - data_music_DST_BlackRiver_ogg_start);
    ramdisk_data[168].data = data_music_DST_BloodAndIron_ogg_start;
    ramdisk_data[168].len = (int32_t) (data_music_DST_BloodAndIron_ogg_end - data_music_DST_BloodAndIron_ogg_start);
    ramdisk_data[169].data = data_music_DST_BoneTower_ogg_start;
    ramdisk_data[169].len = (int32_t) (data_music_DST_BoneTower_ogg_end - data_music_DST_BoneTower_ogg_start);
    ramdisk_data[170].data = data_music_DST_ClockTower_ogg_start;
    ramdisk_data[170].len = (int32_t) (data_music_DST_ClockTower_ogg_end - data_music_DST_ClockTower_ogg_start);
    ramdisk_data[171].data = data_music_DST_DarkDance_ogg_start;
    ramdisk_data[171].len = (int32_t) (data_music_DST_DarkDance_ogg_end - data_music_DST_DarkDance_ogg_start);
    ramdisk_data[172].data = data_music_DST_Darkening_ogg_start;
    ramdisk_data[172].len = (int32_t) (data_music_DST_Darkening_ogg_end - data_music_DST_Darkening_ogg_start);
    ramdisk_data[173].data = data_music_DST_DarkestKnight_ogg_start;
    ramdisk_data[173].len = (int32_t) (data_music_DST_DarkestKnight_ogg_end - data_music_DST_DarkestKnight_ogg_start);
    ramdisk_data[174].data = data_music_DST_DoomCity_ogg_start;
    ramdisk_data[174].len = (int32_t) (data_music_DST_DoomCity_ogg_end - data_music_DST_DoomCity_ogg_start);
    ramdisk_data[175].data = data_music_DST_ExInfernus_ogg_start;
    ramdisk_data[175].len = (int32_t) (data_music_DST_ExInfernus_ogg_end - data_music_DST_ExInfernus_ogg_start);
    ramdisk_data[176].data = data_music_DST_GhostHouse_ogg_start;
    ramdisk_data[176].len = (int32_t) (data_music_DST_GhostHouse_ogg_end - data_music_DST_GhostHouse_ogg_start);
    ramdisk_data[177].data = data_music_DST_H2O_ogg_start;
    ramdisk_data[177].len = (int32_t) (data_music_DST_H2O_ogg_end - data_music_DST_H2O_ogg_start);
    ramdisk_data[178].data = data_music_DST_LeDanse_ogg_start;
    ramdisk_data[178].len = (int32_t) (data_music_DST_LeDanse_ogg_end - data_music_DST_LeDanse_ogg_start);
    ramdisk_data[179].data = data_music_DST_Legends_ogg_start;
    ramdisk_data[179].len = (int32_t) (data_music_DST_Legends_ogg_end - data_music_DST_Legends_ogg_start);
    ramdisk_data[180].data = data_music_DST_MechaSelect_ogg_start;
    ramdisk_data[180].len = (int32_t) (data_music_DST_MechaSelect_ogg_end - data_music_DST_MechaSelect_ogg_start);
    ramdisk_data[181].data = data_music_DST_OldCavern_ogg_start;
    ramdisk_data[181].len = (int32_t) (data_music_DST_OldCavern_ogg_end - data_music_DST_OldCavern_ogg_start);
    ramdisk_data[182].data = data_music_DST_Ornament_ogg_start;
    ramdisk_data[182].len = (int32_t) (data_music_DST_Ornament_ogg_end - data_music_DST_Ornament_ogg_start);
    ramdisk_data[183].data = data_music_DST_OverlandTheme_ogg_start;
    ramdisk_data[183].len = (int32_t) (data_music_DST_OverlandTheme_ogg_end - data_music_DST_OverlandTheme_ogg_start);
    ramdisk_data[184].data = data_music_DST_ReflectingPool_ogg_start;
    ramdisk_data[184].len = (int32_t) (data_music_DST_ReflectingPool_ogg_end - data_music_DST_ReflectingPool_ogg_start);
    ramdisk_data[185].data = data_music_DST_Sarcophage_ogg_start;
    ramdisk_data[185].len = (int32_t) (data_music_DST_Sarcophage_ogg_end - data_music_DST_Sarcophage_ogg_start);
    ramdisk_data[186].data = data_music_DST_SnowMode_ogg_start;
    ramdisk_data[186].len = (int32_t) (data_music_DST_SnowMode_ogg_end - data_music_DST_SnowMode_ogg_start);
    ramdisk_data[187].data = data_music_DST_StarryBook_ogg_start;
    ramdisk_data[187].len = (int32_t) (data_music_DST_StarryBook_ogg_end - data_music_DST_StarryBook_ogg_start);
    ramdisk_data[188].data = data_music_DST_SuperWin_ogg_start;
    ramdisk_data[188].len = (int32_t) (data_music_DST_SuperWin_ogg_end - data_music_DST_SuperWin_ogg_start);
    ramdisk_data[189].data = data_music_DST_TheHauntedChapel_ogg_start;
    ramdisk_data[189].len = (int32_t) (data_music_DST_TheHauntedChapel_ogg_end - data_music_DST_TheHauntedChapel_ogg_start);
    ramdisk_data[190].data = data_music_DST_TwoHeaded_ogg_start;
    ramdisk_data[190].len = (int32_t) (data_music_DST_TwoHeaded_ogg_end - data_music_DST_TwoHeaded_ogg_start);
    ramdisk_data[191].data = data_music_charlotte_ogg_start;
    ramdisk_data[191].len = (int32_t) (data_music_charlotte_ogg_end - data_music_charlotte_ogg_start);
    ramdisk_data[192].data = data_music_charlotte8bit_ogg_start;
    ramdisk_data[192].len = (int32_t) (data_music_charlotte8bit_ogg_end - data_music_charlotte8bit_ogg_start);
    ramdisk_data[193].data = data_music_charlotte_slow_ogg_start;
    ramdisk_data[193].len = (int32_t) (data_music_charlotte_slow_ogg_end - data_music_charlotte_slow_ogg_start);
    ramdisk_data[194].data = data_music_oggconv_sh_start;
    ramdisk_data[194].len = (int32_t) (data_music_oggconv_sh_end - data_music_oggconv_sh_start);
    ramdisk_data[195].data = data_music_resample_sh_start;
    ramdisk_data[195].len = (int32_t) (data_music_resample_sh_end - data_music_resample_sh_start);
    ramdisk_data[196].data = data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_start;
    ramdisk_data[196].len = (int32_t) (data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_end - data_sound_105016__julien_matthey__jm_fx_fireball_01_wav_start);
    ramdisk_data[197].data = data_sound_146733__fins__energy_wav_start;
    ramdisk_data[197].len = (int32_t) (data_sound_146733__fins__energy_wav_end - data_sound_146733__fins__energy_wav_start);
    ramdisk_data[198].data = data_sound_148975__adam_n__squelch_1_wav_start;
    ramdisk_data[198].len = (int32_t) (data_sound_148975__adam_n__squelch_1_wav_end - data_sound_148975__adam_n__squelch_1_wav_start);
    ramdisk_data[199].data = data_sound_170243__beatsbycasper__car_horn_wav_start;
    ramdisk_data[199].len = (int32_t) (data_sound_170243__beatsbycasper__car_horn_wav_end - data_sound_170243__beatsbycasper__car_horn_wav_start);
    ramdisk_data[200].data = data_sound_188363__darkalicenite__grunt_wav_start;
    ramdisk_data[200].len = (int32_t) (data_sound_188363__darkalicenite__grunt_wav_end - data_sound_188363__darkalicenite__grunt_wav_start);
    ramdisk_data[201].data = data_sound_188712__oceanictrancer__happy_effect_wav_start;
    ramdisk_data[201].len = (int32_t) (data_sound_188712__oceanictrancer__happy_effect_wav_end - data_sound_188712__oceanictrancer__happy_effect_wav_start);
    ramdisk_data[202].data = data_sound_205563__everheat__arrow_wav_start;
    ramdisk_data[202].len = (int32_t) (data_sound_205563__everheat__arrow_wav_end - data_sound_205563__everheat__arrow_wav_start);
    ramdisk_data[203].data = data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_start;
    ramdisk_data[203].len = (int32_t) (data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_end - data_sound_207562__jwsoundfoley__open_24oz_soda_bottle_outdoors_long_fizz_explode_ogg_start);
    ramdisk_data[204].data = data_sound_207809__exsomniel__dark_choir_01_wav_start;
    ramdisk_data[204].len = (int32_t) (data_sound_207809__exsomniel__dark_choir_01_wav_end - data_sound_207809__exsomniel__dark_choir_01_wav_start);
    ramdisk_data[205].data = data_sound_212764__qubodup__lion_roar_ogg_start;
    ramdisk_data[205].len = (int32_t) (data_sound_212764__qubodup__lion_roar_ogg_end - data_sound_212764__qubodup__lion_roar_ogg_start);
    ramdisk_data[206].data = data_sound_219566__qubodup__poison_spell_magic_ogg_start;
    ramdisk_data[206].len = (int32_t) (data_sound_219566__qubodup__poison_spell_magic_ogg_end - data_sound_219566__qubodup__poison_spell_magic_ogg_start);
    ramdisk_data[207].data = data_sound_238855__limetoe__collected_item_wav_start;
    ramdisk_data[207].len = (int32_t) (data_sound_238855__limetoe__collected_item_wav_end - data_sound_238855__limetoe__collected_item_wav_start);
    ramdisk_data[208].data = data_sound_244745__reitanna__egg_crack19_wav_start;
    ramdisk_data[208].len = (int32_t) (data_sound_244745__reitanna__egg_crack19_wav_end - data_sound_244745__reitanna__egg_crack19_wav_start);
    ramdisk_data[209].data = data_sound_317827__blockfighter298__weapon_pickup_wav_start;
    ramdisk_data[209].len = (int32_t) (data_sound_317827__blockfighter298__weapon_pickup_wav_end - data_sound_317827__blockfighter298__weapon_pickup_wav_start);
    ramdisk_data[210].data = data_sound_39016__wildweasel__dsfirxpl_wav_start;
    ramdisk_data[210].len = (int32_t) (data_sound_39016__wildweasel__dsfirxpl_wav_end - data_sound_39016__wildweasel__dsfirxpl_wav_start);
    ramdisk_data[211].data = data_sound_45137__dj_chronos__dark_church_bell_wav_start;
    ramdisk_data[211].len = (int32_t) (data_sound_45137__dj_chronos__dark_church_bell_wav_end - data_sound_45137__dj_chronos__dark_church_bell_wav_start);
    ramdisk_data[212].data = data_sound_49676__ejfortin__energy_short_sword_5_wav_start;
    ramdisk_data[212].len = (int32_t) (data_sound_49676__ejfortin__energy_short_sword_5_wav_end - data_sound_49676__ejfortin__energy_short_sword_5_wav_start);
    ramdisk_data[213].data = data_sound_60009__qubodup__swosh_22_ogg_start;
    ramdisk_data[213].len = (int32_t) (data_sound_60009__qubodup__swosh_22_ogg_end - data_sound_60009__qubodup__swosh_22_ogg_start);
    ramdisk_data[214].data = data_sound_65195__uair01__chamber_choir_chord_o_wav_start;
    ramdisk_data[214].len = (int32_t) (data_sound_65195__uair01__chamber_choir_chord_o_wav_end - data_sound_65195__uair01__chamber_choir_chord_o_wav_start);
    ramdisk_data[215].data = data_sound_82388__robinhood76__01308_man_hit_9_wav_start;
    ramdisk_data[215].len = (int32_t) (data_sound_82388__robinhood76__01308_man_hit_9_wav_end - data_sound_82388__robinhood76__01308_man_hit_9_wav_start);
    ramdisk_data[216].data = data_sound_85568__joelaudio__dragon_roar_wav_start;
    ramdisk_data[216].len = (int32_t) (data_sound_85568__joelaudio__dragon_roar_wav_end - data_sound_85568__joelaudio__dragon_roar_wav_start);
    ramdisk_data[217].data = data_sound_Bite_SoundBible_com_2056759375_wav_start;
    ramdisk_data[217].len = (int32_t) (data_sound_Bite_SoundBible_com_2056759375_wav_end - data_sound_Bite_SoundBible_com_2056759375_wav_start);
    ramdisk_data[218].data = data_sound_Door_Latch_002_wav_start;
    ramdisk_data[218].len = (int32_t) (data_sound_Door_Latch_002_wav_end - data_sound_Door_Latch_002_wav_start);
    ramdisk_data[219].data = data_sound_Electric_Zap_wav_start;
    ramdisk_data[219].len = (int32_t) (data_sound_Electric_Zap_wav_end - data_sound_Electric_Zap_wav_start);
    ramdisk_data[220].data = data_sound_Object_Drop_001_wav_start;
    ramdisk_data[220].len = (int32_t) (data_sound_Object_Drop_001_wav_end - data_sound_Object_Drop_001_wav_start);
    ramdisk_data[221].data = data_sound_Red_Alert_FX_001_wav_start;
    ramdisk_data[221].len = (int32_t) (data_sound_Red_Alert_FX_001_wav_end - data_sound_Red_Alert_FX_001_wav_start);
    ramdisk_data[222].data = data_sound_bite_SoundBible_com_1625781385_wav_start;
    ramdisk_data[222].len = (int32_t) (data_sound_bite_SoundBible_com_1625781385_wav_end - data_sound_bite_SoundBible_com_1625781385_wav_start);
    ramdisk_data[223].data = data_sound_boom_wav_start;
    ramdisk_data[223].len = (int32_t) (data_sound_boom_wav_end - data_sound_boom_wav_start);
    ramdisk_data[224].data = data_sound_cash_register_wav_start;
    ramdisk_data[224].len = (int32_t) (data_sound_cash_register_wav_end - data_sound_cash_register_wav_start);
    ramdisk_data[225].data = data_sound_cash_register2_wav_start;
    ramdisk_data[225].len = (int32_t) (data_sound_cash_register2_wav_end - data_sound_cash_register2_wav_start);
    ramdisk_data[226].data = data_sound_click_wav_start;
    ramdisk_data[226].len = (int32_t) (data_sound_click_wav_end - data_sound_click_wav_start);
    ramdisk_data[227].data = data_sound_coin_roll_wav_start;
    ramdisk_data[227].len = (int32_t) (data_sound_coin_roll_wav_end - data_sound_coin_roll_wav_start);
    ramdisk_data[228].data = data_sound_demon_wav_start;
    ramdisk_data[228].len = (int32_t) (data_sound_demon_wav_end - data_sound_demon_wav_start);
    ramdisk_data[229].data = data_sound_demon_die_wav_start;
    ramdisk_data[229].len = (int32_t) (data_sound_demon_die_wav_end - data_sound_demon_die_wav_start);
    ramdisk_data[230].data = data_sound_dinosaur_wav_start;
    ramdisk_data[230].len = (int32_t) (data_sound_dinosaur_wav_end - data_sound_dinosaur_wav_start);
    ramdisk_data[231].data = data_sound_drop_wav_start;
    ramdisk_data[231].len = (int32_t) (data_sound_drop_wav_end - data_sound_drop_wav_start);
    ramdisk_data[232].data = data_sound_effect_wav_start;
    ramdisk_data[232].len = (int32_t) (data_sound_effect_wav_end - data_sound_effect_wav_start);
    ramdisk_data[233].data = data_sound_explosion_wav_start;
    ramdisk_data[233].len = (int32_t) (data_sound_explosion_wav_end - data_sound_explosion_wav_start);
    ramdisk_data[234].data = data_sound_explosion_big_wav_start;
    ramdisk_data[234].len = (int32_t) (data_sound_explosion_big_wav_end - data_sound_explosion_big_wav_start);
    ramdisk_data[235].data = data_sound_flame_Arrow_SoundBible_com_618067908_wav_start;
    ramdisk_data[235].len = (int32_t) (data_sound_flame_Arrow_SoundBible_com_618067908_wav_end - data_sound_flame_Arrow_SoundBible_com_618067908_wav_start);
    ramdisk_data[236].data = data_sound_kick_wav_start;
    ramdisk_data[236].len = (int32_t) (data_sound_kick_wav_end - data_sound_kick_wav_start);
    ramdisk_data[237].data = data_sound_laugh_wav_start;
    ramdisk_data[237].len = (int32_t) (data_sound_laugh_wav_end - data_sound_laugh_wav_start);
    ramdisk_data[238].data = data_sound_magic_tinkle_wav_start;
    ramdisk_data[238].len = (int32_t) (data_sound_magic_tinkle_wav_end - data_sound_magic_tinkle_wav_start);
    ramdisk_data[239].data = data_sound_powerup_wav_start;
    ramdisk_data[239].len = (int32_t) (data_sound_powerup_wav_end - data_sound_powerup_wav_start);
    ramdisk_data[240].data = data_sound_saw_wav_start;
    ramdisk_data[240].len = (int32_t) (data_sound_saw_wav_end - data_sound_saw_wav_start);
    ramdisk_data[241].data = data_sound_scream_male_wav_start;
    ramdisk_data[241].len = (int32_t) (data_sound_scream_male_wav_end - data_sound_scream_male_wav_start);
    ramdisk_data[242].data = data_sound_shotgun_by_ra_the_sun_god_wav_start;
    ramdisk_data[242].len = (int32_t) (data_sound_shotgun_by_ra_the_sun_god_wav_end - data_sound_shotgun_by_ra_the_sun_god_wav_start);
    ramdisk_data[243].data = data_sound_shotgun_reload_by_ra_the_sun_god_wav_start;
    ramdisk_data[243].len = (int32_t) (data_sound_shotgun_reload_by_ra_the_sun_god_wav_end - data_sound_shotgun_reload_by_ra_the_sun_god_wav_start);
    ramdisk_data[244].data = data_sound_shriek_wav_start;
    ramdisk_data[244].len = (int32_t) (data_sound_shriek_wav_end - data_sound_shriek_wav_start);
    ramdisk_data[245].data = data_sound_slime_wav_start;
    ramdisk_data[245].len = (int32_t) (data_sound_slime_wav_end - data_sound_slime_wav_start);
    ramdisk_data[246].data = data_sound_small_fireball_SoundBible_com_1381880822_wav_start;
    ramdisk_data[246].len = (int32_t) (data_sound_small_fireball_SoundBible_com_1381880822_wav_end - data_sound_small_fireball_SoundBible_com_1381880822_wav_start);
    ramdisk_data[247].data = data_sound_swoosh_3_SoundBible_com_1573211927_wav_start;
    ramdisk_data[247].len = (int32_t) (data_sound_swoosh_3_SoundBible_com_1573211927_wav_end - data_sound_swoosh_3_SoundBible_com_1573211927_wav_start);
    ramdisk_data[248].data = data_sound_swords_collide_sound_explorer_2015600826_wav_start;
    ramdisk_data[248].len = (int32_t) (data_sound_swords_collide_sound_explorer_2015600826_wav_end - data_sound_swords_collide_sound_explorer_2015600826_wav_start);
    ramdisk_data[249].data = data_sound_teleport_wav_start;
    ramdisk_data[249].len = (int32_t) (data_sound_teleport_wav_end - data_sound_teleport_wav_start);
    ramdisk_data[250].data = data_sound_treasure_wav_start;
    ramdisk_data[250].len = (int32_t) (data_sound_treasure_wav_end - data_sound_treasure_wav_start);
    ramdisk_data[251].data = data_sound_wand_dead_wav_start;
    ramdisk_data[251].len = (int32_t) (data_sound_wand_dead_wav_end - data_sound_wand_dead_wav_start);
    ramdisk_data[252].data = data_sound_zombie_SoundBible_com_1966938763_wav_start;
    ramdisk_data[252].len = (int32_t) (data_sound_zombie_SoundBible_com_1966938763_wav_end - data_sound_zombie_SoundBible_com_1966938763_wav_start);
    ramdisk_data[253].data = data_sound_zombie_in_painSoundBible_com_134322253_wav_start;
    ramdisk_data[253].len = (int32_t) (data_sound_zombie_in_painSoundBible_com_134322253_wav_end - data_sound_zombie_in_painSoundBible_com_134322253_wav_start);
    ramdisk_data[254].data = data_things_acid1_start;
    ramdisk_data[254].len = (int32_t) (data_things_acid1_end - data_things_acid1_start);
    ramdisk_data[255].data = data_things_action_down_start;
    ramdisk_data[255].len = (int32_t) (data_things_action_down_end - data_things_action_down_start);
    ramdisk_data[256].data = data_things_action_left_start;
    ramdisk_data[256].len = (int32_t) (data_things_action_left_end - data_things_action_left_start);
    ramdisk_data[257].data = data_things_action_right_start;
    ramdisk_data[257].len = (int32_t) (data_things_action_right_end - data_things_action_right_start);
    ramdisk_data[258].data = data_things_action_sleep_start;
    ramdisk_data[258].len = (int32_t) (data_things_action_sleep_end - data_things_action_sleep_start);
    ramdisk_data[259].data = data_things_action_text_start;
    ramdisk_data[259].len = (int32_t) (data_things_action_text_end - data_things_action_text_start);
    ramdisk_data[260].data = data_things_action_trigger_on_hero_start;
    ramdisk_data[260].len = (int32_t) (data_things_action_trigger_on_hero_end - data_things_action_trigger_on_hero_start);
    ramdisk_data[261].data = data_things_action_trigger_on_monst_start;
    ramdisk_data[261].len = (int32_t) (data_things_action_trigger_on_monst_end - data_things_action_trigger_on_monst_start);
    ramdisk_data[262].data = data_things_action_trigger_on_wall_start;
    ramdisk_data[262].len = (int32_t) (data_things_action_trigger_on_wall_end - data_things_action_trigger_on_wall_start);
    ramdisk_data[263].data = data_things_action_up_start;
    ramdisk_data[263].len = (int32_t) (data_things_action_up_end - data_things_action_up_start);
    ramdisk_data[264].data = data_things_action_zap_start;
    ramdisk_data[264].len = (int32_t) (data_things_action_zap_end - data_things_action_zap_start);
    ramdisk_data[265].data = data_things_all_cheese_start;
    ramdisk_data[265].len = (int32_t) (data_things_all_cheese_end - data_things_all_cheese_start);
    ramdisk_data[266].data = data_things_anim_eyes_start;
    ramdisk_data[266].len = (int32_t) (data_things_anim_eyes_end - data_things_anim_eyes_start);
    ramdisk_data[267].data = data_things_anim_man_start;
    ramdisk_data[267].len = (int32_t) (data_things_anim_man_end - data_things_anim_man_start);
    ramdisk_data[268].data = data_things_anim_treasure_chest_start;
    ramdisk_data[268].len = (int32_t) (data_things_anim_treasure_chest_end - data_things_anim_treasure_chest_start);
    ramdisk_data[269].data = data_things_apple1_start;
    ramdisk_data[269].len = (int32_t) (data_things_apple1_end - data_things_apple1_start);
    ramdisk_data[270].data = data_things_apple2_start;
    ramdisk_data[270].len = (int32_t) (data_things_apple2_end - data_things_apple2_start);
    ramdisk_data[271].data = data_things_armor1_start;
    ramdisk_data[271].len = (int32_t) (data_things_armor1_end - data_things_armor1_start);
    ramdisk_data[272].data = data_things_armor2_start;
    ramdisk_data[272].len = (int32_t) (data_things_armor2_end - data_things_armor2_start);
    ramdisk_data[273].data = data_things_armor3_start;
    ramdisk_data[273].len = (int32_t) (data_things_armor3_end - data_things_armor3_start);
    ramdisk_data[274].data = data_things_armor4_start;
    ramdisk_data[274].len = (int32_t) (data_things_armor4_end - data_things_armor4_start);
    ramdisk_data[275].data = data_things_arrow_start;
    ramdisk_data[275].len = (int32_t) (data_things_arrow_end - data_things_arrow_start);
    ramdisk_data[276].data = data_things_axe1_start;
    ramdisk_data[276].len = (int32_t) (data_things_axe1_end - data_things_axe1_start);
    ramdisk_data[277].data = data_things_axe1_anim_start;
    ramdisk_data[277].len = (int32_t) (data_things_axe1_anim_end - data_things_axe1_anim_start);
    ramdisk_data[278].data = data_things_axe2_start;
    ramdisk_data[278].len = (int32_t) (data_things_axe2_end - data_things_axe2_start);
    ramdisk_data[279].data = data_things_axe2_anim_start;
    ramdisk_data[279].len = (int32_t) (data_things_axe2_anim_end - data_things_axe2_anim_start);
    ramdisk_data[280].data = data_things_axe3_start;
    ramdisk_data[280].len = (int32_t) (data_things_axe3_end - data_things_axe3_start);
    ramdisk_data[281].data = data_things_axe4_start;
    ramdisk_data[281].len = (int32_t) (data_things_axe4_end - data_things_axe4_start);
    ramdisk_data[282].data = data_things_axe5_start;
    ramdisk_data[282].len = (int32_t) (data_things_axe5_end - data_things_axe5_start);
    ramdisk_data[283].data = data_things_baby_death_start;
    ramdisk_data[283].len = (int32_t) (data_things_baby_death_end - data_things_baby_death_start);
    ramdisk_data[284].data = data_things_banana_start;
    ramdisk_data[284].len = (int32_t) (data_things_banana_end - data_things_banana_start);
    ramdisk_data[285].data = data_things_blood1_start;
    ramdisk_data[285].len = (int32_t) (data_things_blood1_end - data_things_blood1_start);
    ramdisk_data[286].data = data_things_blood2_start;
    ramdisk_data[286].len = (int32_t) (data_things_blood2_end - data_things_blood2_start);
    ramdisk_data[287].data = data_things_bomb_start;
    ramdisk_data[287].len = (int32_t) (data_things_bomb_end - data_things_bomb_start);
    ramdisk_data[288].data = data_things_bonepile1_start;
    ramdisk_data[288].len = (int32_t) (data_things_bonepile1_end - data_things_bonepile1_start);
    ramdisk_data[289].data = data_things_bonepile2_start;
    ramdisk_data[289].len = (int32_t) (data_things_bonepile2_end - data_things_bonepile2_start);
    ramdisk_data[290].data = data_things_bonepile3_start;
    ramdisk_data[290].len = (int32_t) (data_things_bonepile3_end - data_things_bonepile3_start);
    ramdisk_data[291].data = data_things_bonepile4_start;
    ramdisk_data[291].len = (int32_t) (data_things_bonepile4_end - data_things_bonepile4_start);
    ramdisk_data[292].data = data_things_boots1_start;
    ramdisk_data[292].len = (int32_t) (data_things_boots1_end - data_things_boots1_start);
    ramdisk_data[293].data = data_things_boots2_start;
    ramdisk_data[293].len = (int32_t) (data_things_boots2_end - data_things_boots2_start);
    ramdisk_data[294].data = data_things_boots3_start;
    ramdisk_data[294].len = (int32_t) (data_things_boots3_end - data_things_boots3_start);
    ramdisk_data[295].data = data_things_boots4_start;
    ramdisk_data[295].len = (int32_t) (data_things_boots4_end - data_things_boots4_start);
    ramdisk_data[296].data = data_things_boots5_start;
    ramdisk_data[296].len = (int32_t) (data_things_boots5_end - data_things_boots5_start);
    ramdisk_data[297].data = data_things_bow1_start;
    ramdisk_data[297].len = (int32_t) (data_things_bow1_end - data_things_bow1_start);
    ramdisk_data[298].data = data_things_bow1_anim_start;
    ramdisk_data[298].len = (int32_t) (data_things_bow1_anim_end - data_things_bow1_anim_start);
    ramdisk_data[299].data = data_things_bow2_start;
    ramdisk_data[299].len = (int32_t) (data_things_bow2_end - data_things_bow2_start);
    ramdisk_data[300].data = data_things_bow3_start;
    ramdisk_data[300].len = (int32_t) (data_things_bow3_end - data_things_bow3_start);
    ramdisk_data[301].data = data_things_bow4_start;
    ramdisk_data[301].len = (int32_t) (data_things_bow4_end - data_things_bow4_start);
    ramdisk_data[302].data = data_things_brazier_start;
    ramdisk_data[302].len = (int32_t) (data_things_brazier_end - data_things_brazier_start);
    ramdisk_data[303].data = data_things_bread_start;
    ramdisk_data[303].len = (int32_t) (data_things_bread_end - data_things_bread_start);
    ramdisk_data[304].data = data_things_bubbles1_start;
    ramdisk_data[304].len = (int32_t) (data_things_bubbles1_end - data_things_bubbles1_start);
    ramdisk_data[305].data = data_things_cheese_start;
    ramdisk_data[305].len = (int32_t) (data_things_cheese_end - data_things_cheese_start);
    ramdisk_data[306].data = data_things_chest1_start;
    ramdisk_data[306].len = (int32_t) (data_things_chest1_end - data_things_chest1_start);
    ramdisk_data[307].data = data_things_chest2_start;
    ramdisk_data[307].len = (int32_t) (data_things_chest2_end - data_things_chest2_start);
    ramdisk_data[308].data = data_things_cloudkill1_start;
    ramdisk_data[308].len = (int32_t) (data_things_cloudkill1_end - data_things_cloudkill1_start);
    ramdisk_data[309].data = data_things_cloudkill2_start;
    ramdisk_data[309].len = (int32_t) (data_things_cloudkill2_end - data_things_cloudkill2_start);
    ramdisk_data[310].data = data_things_club1_start;
    ramdisk_data[310].len = (int32_t) (data_things_club1_end - data_things_club1_start);
    ramdisk_data[311].data = data_things_club1_anim_start;
    ramdisk_data[311].len = (int32_t) (data_things_club1_anim_end - data_things_club1_anim_start);
    ramdisk_data[312].data = data_things_cobweb_start;
    ramdisk_data[312].len = (int32_t) (data_things_cobweb_end - data_things_cobweb_start);
    ramdisk_data[313].data = data_things_coins1_start;
    ramdisk_data[313].len = (int32_t) (data_things_coins1_end - data_things_coins1_start);
    ramdisk_data[314].data = data_things_corridor1_start;
    ramdisk_data[314].len = (int32_t) (data_things_corridor1_end - data_things_corridor1_start);
    ramdisk_data[315].data = data_things_corridor2_start;
    ramdisk_data[315].len = (int32_t) (data_things_corridor2_end - data_things_corridor2_start);
    ramdisk_data[316].data = data_things_corridor_wall1_start;
    ramdisk_data[316].len = (int32_t) (data_things_corridor_wall1_end - data_things_corridor_wall1_start);
    ramdisk_data[317].data = data_things_crystal1_start;
    ramdisk_data[317].len = (int32_t) (data_things_crystal1_end - data_things_crystal1_start);
    ramdisk_data[318].data = data_things_crystal2_start;
    ramdisk_data[318].len = (int32_t) (data_things_crystal2_end - data_things_crystal2_start);
    ramdisk_data[319].data = data_things_crystal3_start;
    ramdisk_data[319].len = (int32_t) (data_things_crystal3_end - data_things_crystal3_start);
    ramdisk_data[320].data = data_things_crystal4_start;
    ramdisk_data[320].len = (int32_t) (data_things_crystal4_end - data_things_crystal4_start);
    ramdisk_data[321].data = data_things_crystal5_start;
    ramdisk_data[321].len = (int32_t) (data_things_crystal5_end - data_things_crystal5_start);
    ramdisk_data[322].data = data_things_crystal6_start;
    ramdisk_data[322].len = (int32_t) (data_things_crystal6_end - data_things_crystal6_start);
    ramdisk_data[323].data = data_things_crystal7_start;
    ramdisk_data[323].len = (int32_t) (data_things_crystal7_end - data_things_crystal7_start);
    ramdisk_data[324].data = data_things_death_start;
    ramdisk_data[324].len = (int32_t) (data_things_death_end - data_things_death_start);
    ramdisk_data[325].data = data_things_death_cloud_start;
    ramdisk_data[325].len = (int32_t) (data_things_death_cloud_end - data_things_death_cloud_start);
    ramdisk_data[326].data = data_things_death_cloud_anim_start;
    ramdisk_data[326].len = (int32_t) (data_things_death_cloud_anim_end - data_things_death_cloud_anim_start);
    ramdisk_data[327].data = data_things_demon1_start;
    ramdisk_data[327].len = (int32_t) (data_things_demon1_end - data_things_demon1_start);
    ramdisk_data[328].data = data_things_demon2_start;
    ramdisk_data[328].len = (int32_t) (data_things_demon2_end - data_things_demon2_start);
    ramdisk_data[329].data = data_things_dirt1_start;
    ramdisk_data[329].len = (int32_t) (data_things_dirt1_end - data_things_dirt1_start);
    ramdisk_data[330].data = data_things_door1_start;
    ramdisk_data[330].len = (int32_t) (data_things_door1_end - data_things_door1_start);
    ramdisk_data[331].data = data_things_door2_start;
    ramdisk_data[331].len = (int32_t) (data_things_door2_end - data_things_door2_start);
    ramdisk_data[332].data = data_things_dragon1_start;
    ramdisk_data[332].len = (int32_t) (data_things_dragon1_end - data_things_dragon1_start);
    ramdisk_data[333].data = data_things_dragon2_start;
    ramdisk_data[333].len = (int32_t) (data_things_dragon2_end - data_things_dragon2_start);
    ramdisk_data[334].data = data_things_dragon3_start;
    ramdisk_data[334].len = (int32_t) (data_things_dragon3_end - data_things_dragon3_start);
    ramdisk_data[335].data = data_things_dragon4_start;
    ramdisk_data[335].len = (int32_t) (data_things_dragon4_end - data_things_dragon4_start);
    ramdisk_data[336].data = data_things_dwarf_start;
    ramdisk_data[336].len = (int32_t) (data_things_dwarf_end - data_things_dwarf_start);
    ramdisk_data[337].data = data_things_elf_start;
    ramdisk_data[337].len = (int32_t) (data_things_elf_end - data_things_elf_start);
    ramdisk_data[338].data = data_things_energy1_start;
    ramdisk_data[338].len = (int32_t) (data_things_energy1_end - data_things_energy1_start);
    ramdisk_data[339].data = data_things_energy2_start;
    ramdisk_data[339].len = (int32_t) (data_things_energy2_end - data_things_energy2_start);
    ramdisk_data[340].data = data_things_exit1_start;
    ramdisk_data[340].len = (int32_t) (data_things_exit1_end - data_things_exit1_start);
    ramdisk_data[341].data = data_things_explosion1_start;
    ramdisk_data[341].len = (int32_t) (data_things_explosion1_end - data_things_explosion1_start);
    ramdisk_data[342].data = data_things_explosion2_start;
    ramdisk_data[342].len = (int32_t) (data_things_explosion2_end - data_things_explosion2_start);
    ramdisk_data[343].data = data_things_explosion3_start;
    ramdisk_data[343].len = (int32_t) (data_things_explosion3_end - data_things_explosion3_start);
    ramdisk_data[344].data = data_things_explosion4_start;
    ramdisk_data[344].len = (int32_t) (data_things_explosion4_end - data_things_explosion4_start);
    ramdisk_data[345].data = data_things_eyebawl_start;
    ramdisk_data[345].len = (int32_t) (data_things_eyebawl_end - data_things_eyebawl_start);
    ramdisk_data[346].data = data_things_eyebawlmob_start;
    ramdisk_data[346].len = (int32_t) (data_things_eyebawlmob_end - data_things_eyebawlmob_start);
    ramdisk_data[347].data = data_things_fireball1_start;
    ramdisk_data[347].len = (int32_t) (data_things_fireball1_end - data_things_fireball1_start);
    ramdisk_data[348].data = data_things_fireball2_start;
    ramdisk_data[348].len = (int32_t) (data_things_fireball2_end - data_things_fireball2_start);
    ramdisk_data[349].data = data_things_fireball3_start;
    ramdisk_data[349].len = (int32_t) (data_things_fireball3_end - data_things_fireball3_start);
    ramdisk_data[350].data = data_things_fireball4_start;
    ramdisk_data[350].len = (int32_t) (data_things_fireball4_end - data_things_fireball4_start);
    ramdisk_data[351].data = data_things_fireburst1_start;
    ramdisk_data[351].len = (int32_t) (data_things_fireburst1_end - data_things_fireburst1_start);
    ramdisk_data[352].data = data_things_fireburst2_start;
    ramdisk_data[352].len = (int32_t) (data_things_fireburst2_end - data_things_fireburst2_start);
    ramdisk_data[353].data = data_things_fireburst3_start;
    ramdisk_data[353].len = (int32_t) (data_things_fireburst3_end - data_things_fireburst3_start);
    ramdisk_data[354].data = data_things_fireburst4_start;
    ramdisk_data[354].len = (int32_t) (data_things_fireburst4_end - data_things_fireburst4_start);
    ramdisk_data[355].data = data_things_flames1_start;
    ramdisk_data[355].len = (int32_t) (data_things_flames1_end - data_things_flames1_start);
    ramdisk_data[356].data = data_things_floor1_start;
    ramdisk_data[356].len = (int32_t) (data_things_floor1_end - data_things_floor1_start);
    ramdisk_data[357].data = data_things_floor10_start;
    ramdisk_data[357].len = (int32_t) (data_things_floor10_end - data_things_floor10_start);
    ramdisk_data[358].data = data_things_floor11_start;
    ramdisk_data[358].len = (int32_t) (data_things_floor11_end - data_things_floor11_start);
    ramdisk_data[359].data = data_things_floor12_start;
    ramdisk_data[359].len = (int32_t) (data_things_floor12_end - data_things_floor12_start);
    ramdisk_data[360].data = data_things_floor13_start;
    ramdisk_data[360].len = (int32_t) (data_things_floor13_end - data_things_floor13_start);
    ramdisk_data[361].data = data_things_floor14_start;
    ramdisk_data[361].len = (int32_t) (data_things_floor14_end - data_things_floor14_start);
    ramdisk_data[362].data = data_things_floor15_start;
    ramdisk_data[362].len = (int32_t) (data_things_floor15_end - data_things_floor15_start);
    ramdisk_data[363].data = data_things_floor16_start;
    ramdisk_data[363].len = (int32_t) (data_things_floor16_end - data_things_floor16_start);
    ramdisk_data[364].data = data_things_floor17_start;
    ramdisk_data[364].len = (int32_t) (data_things_floor17_end - data_things_floor17_start);
    ramdisk_data[365].data = data_things_floor18_start;
    ramdisk_data[365].len = (int32_t) (data_things_floor18_end - data_things_floor18_start);
    ramdisk_data[366].data = data_things_floor19_start;
    ramdisk_data[366].len = (int32_t) (data_things_floor19_end - data_things_floor19_start);
    ramdisk_data[367].data = data_things_floor2_start;
    ramdisk_data[367].len = (int32_t) (data_things_floor2_end - data_things_floor2_start);
    ramdisk_data[368].data = data_things_floor20_start;
    ramdisk_data[368].len = (int32_t) (data_things_floor20_end - data_things_floor20_start);
    ramdisk_data[369].data = data_things_floor21_start;
    ramdisk_data[369].len = (int32_t) (data_things_floor21_end - data_things_floor21_start);
    ramdisk_data[370].data = data_things_floor22_start;
    ramdisk_data[370].len = (int32_t) (data_things_floor22_end - data_things_floor22_start);
    ramdisk_data[371].data = data_things_floor23_start;
    ramdisk_data[371].len = (int32_t) (data_things_floor23_end - data_things_floor23_start);
    ramdisk_data[372].data = data_things_floor24_start;
    ramdisk_data[372].len = (int32_t) (data_things_floor24_end - data_things_floor24_start);
    ramdisk_data[373].data = data_things_floor25_start;
    ramdisk_data[373].len = (int32_t) (data_things_floor25_end - data_things_floor25_start);
    ramdisk_data[374].data = data_things_floor26_start;
    ramdisk_data[374].len = (int32_t) (data_things_floor26_end - data_things_floor26_start);
    ramdisk_data[375].data = data_things_floor27_start;
    ramdisk_data[375].len = (int32_t) (data_things_floor27_end - data_things_floor27_start);
    ramdisk_data[376].data = data_things_floor28_start;
    ramdisk_data[376].len = (int32_t) (data_things_floor28_end - data_things_floor28_start);
    ramdisk_data[377].data = data_things_floor29_start;
    ramdisk_data[377].len = (int32_t) (data_things_floor29_end - data_things_floor29_start);
    ramdisk_data[378].data = data_things_floor3_start;
    ramdisk_data[378].len = (int32_t) (data_things_floor3_end - data_things_floor3_start);
    ramdisk_data[379].data = data_things_floor30_start;
    ramdisk_data[379].len = (int32_t) (data_things_floor30_end - data_things_floor30_start);
    ramdisk_data[380].data = data_things_floor31_start;
    ramdisk_data[380].len = (int32_t) (data_things_floor31_end - data_things_floor31_start);
    ramdisk_data[381].data = data_things_floor32_start;
    ramdisk_data[381].len = (int32_t) (data_things_floor32_end - data_things_floor32_start);
    ramdisk_data[382].data = data_things_floor33_start;
    ramdisk_data[382].len = (int32_t) (data_things_floor33_end - data_things_floor33_start);
    ramdisk_data[383].data = data_things_floor34_start;
    ramdisk_data[383].len = (int32_t) (data_things_floor34_end - data_things_floor34_start);
    ramdisk_data[384].data = data_things_floor35_start;
    ramdisk_data[384].len = (int32_t) (data_things_floor35_end - data_things_floor35_start);
    ramdisk_data[385].data = data_things_floor36_start;
    ramdisk_data[385].len = (int32_t) (data_things_floor36_end - data_things_floor36_start);
    ramdisk_data[386].data = data_things_floor37_start;
    ramdisk_data[386].len = (int32_t) (data_things_floor37_end - data_things_floor37_start);
    ramdisk_data[387].data = data_things_floor38_start;
    ramdisk_data[387].len = (int32_t) (data_things_floor38_end - data_things_floor38_start);
    ramdisk_data[388].data = data_things_floor39_start;
    ramdisk_data[388].len = (int32_t) (data_things_floor39_end - data_things_floor39_start);
    ramdisk_data[389].data = data_things_floor4_start;
    ramdisk_data[389].len = (int32_t) (data_things_floor4_end - data_things_floor4_start);
    ramdisk_data[390].data = data_things_floor40_start;
    ramdisk_data[390].len = (int32_t) (data_things_floor40_end - data_things_floor40_start);
    ramdisk_data[391].data = data_things_floor41_start;
    ramdisk_data[391].len = (int32_t) (data_things_floor41_end - data_things_floor41_start);
    ramdisk_data[392].data = data_things_floor42_start;
    ramdisk_data[392].len = (int32_t) (data_things_floor42_end - data_things_floor42_start);
    ramdisk_data[393].data = data_things_floor43_start;
    ramdisk_data[393].len = (int32_t) (data_things_floor43_end - data_things_floor43_start);
    ramdisk_data[394].data = data_things_floor44_start;
    ramdisk_data[394].len = (int32_t) (data_things_floor44_end - data_things_floor44_start);
    ramdisk_data[395].data = data_things_floor45_start;
    ramdisk_data[395].len = (int32_t) (data_things_floor45_end - data_things_floor45_start);
    ramdisk_data[396].data = data_things_floor46_start;
    ramdisk_data[396].len = (int32_t) (data_things_floor46_end - data_things_floor46_start);
    ramdisk_data[397].data = data_things_floor47_start;
    ramdisk_data[397].len = (int32_t) (data_things_floor47_end - data_things_floor47_start);
    ramdisk_data[398].data = data_things_floor48_start;
    ramdisk_data[398].len = (int32_t) (data_things_floor48_end - data_things_floor48_start);
    ramdisk_data[399].data = data_things_floor49_start;
    ramdisk_data[399].len = (int32_t) (data_things_floor49_end - data_things_floor49_start);
    ramdisk_data[400].data = data_things_floor5_start;
    ramdisk_data[400].len = (int32_t) (data_things_floor5_end - data_things_floor5_start);
    ramdisk_data[401].data = data_things_floor50_start;
    ramdisk_data[401].len = (int32_t) (data_things_floor50_end - data_things_floor50_start);
    ramdisk_data[402].data = data_things_floor51_start;
    ramdisk_data[402].len = (int32_t) (data_things_floor51_end - data_things_floor51_start);
    ramdisk_data[403].data = data_things_floor52_start;
    ramdisk_data[403].len = (int32_t) (data_things_floor52_end - data_things_floor52_start);
    ramdisk_data[404].data = data_things_floor53_start;
    ramdisk_data[404].len = (int32_t) (data_things_floor53_end - data_things_floor53_start);
    ramdisk_data[405].data = data_things_floor54_start;
    ramdisk_data[405].len = (int32_t) (data_things_floor54_end - data_things_floor54_start);
    ramdisk_data[406].data = data_things_floor55_start;
    ramdisk_data[406].len = (int32_t) (data_things_floor55_end - data_things_floor55_start);
    ramdisk_data[407].data = data_things_floor56_start;
    ramdisk_data[407].len = (int32_t) (data_things_floor56_end - data_things_floor56_start);
    ramdisk_data[408].data = data_things_floor57_start;
    ramdisk_data[408].len = (int32_t) (data_things_floor57_end - data_things_floor57_start);
    ramdisk_data[409].data = data_things_floor58_start;
    ramdisk_data[409].len = (int32_t) (data_things_floor58_end - data_things_floor58_start);
    ramdisk_data[410].data = data_things_floor59_start;
    ramdisk_data[410].len = (int32_t) (data_things_floor59_end - data_things_floor59_start);
    ramdisk_data[411].data = data_things_floor6_start;
    ramdisk_data[411].len = (int32_t) (data_things_floor6_end - data_things_floor6_start);
    ramdisk_data[412].data = data_things_floor60_start;
    ramdisk_data[412].len = (int32_t) (data_things_floor60_end - data_things_floor60_start);
    ramdisk_data[413].data = data_things_floor61_start;
    ramdisk_data[413].len = (int32_t) (data_things_floor61_end - data_things_floor61_start);
    ramdisk_data[414].data = data_things_floor62_start;
    ramdisk_data[414].len = (int32_t) (data_things_floor62_end - data_things_floor62_start);
    ramdisk_data[415].data = data_things_floor63_start;
    ramdisk_data[415].len = (int32_t) (data_things_floor63_end - data_things_floor63_start);
    ramdisk_data[416].data = data_things_floor64_start;
    ramdisk_data[416].len = (int32_t) (data_things_floor64_end - data_things_floor64_start);
    ramdisk_data[417].data = data_things_floor65_start;
    ramdisk_data[417].len = (int32_t) (data_things_floor65_end - data_things_floor65_start);
    ramdisk_data[418].data = data_things_floor66_start;
    ramdisk_data[418].len = (int32_t) (data_things_floor66_end - data_things_floor66_start);
    ramdisk_data[419].data = data_things_floor67_start;
    ramdisk_data[419].len = (int32_t) (data_things_floor67_end - data_things_floor67_start);
    ramdisk_data[420].data = data_things_floor68_start;
    ramdisk_data[420].len = (int32_t) (data_things_floor68_end - data_things_floor68_start);
    ramdisk_data[421].data = data_things_floor7_start;
    ramdisk_data[421].len = (int32_t) (data_things_floor7_end - data_things_floor7_start);
    ramdisk_data[422].data = data_things_floor8_start;
    ramdisk_data[422].len = (int32_t) (data_things_floor8_end - data_things_floor8_start);
    ramdisk_data[423].data = data_things_floor9_start;
    ramdisk_data[423].len = (int32_t) (data_things_floor9_end - data_things_floor9_start);
    ramdisk_data[424].data = data_things_food_any_start;
    ramdisk_data[424].len = (int32_t) (data_things_food_any_end - data_things_food_any_start);
    ramdisk_data[425].data = data_things_gem1_start;
    ramdisk_data[425].len = (int32_t) (data_things_gem1_end - data_things_gem1_start);
    ramdisk_data[426].data = data_things_gem2_start;
    ramdisk_data[426].len = (int32_t) (data_things_gem2_end - data_things_gem2_start);
    ramdisk_data[427].data = data_things_gem3_start;
    ramdisk_data[427].len = (int32_t) (data_things_gem3_end - data_things_gem3_start);
    ramdisk_data[428].data = data_things_gem4_start;
    ramdisk_data[428].len = (int32_t) (data_things_gem4_end - data_things_gem4_start);
    ramdisk_data[429].data = data_things_gem5_start;
    ramdisk_data[429].len = (int32_t) (data_things_gem5_end - data_things_gem5_start);
    ramdisk_data[430].data = data_things_gem6_start;
    ramdisk_data[430].len = (int32_t) (data_things_gem6_end - data_things_gem6_start);
    ramdisk_data[431].data = data_things_gem7_start;
    ramdisk_data[431].len = (int32_t) (data_things_gem7_end - data_things_gem7_start);
    ramdisk_data[432].data = data_things_generator1_start;
    ramdisk_data[432].len = (int32_t) (data_things_generator1_end - data_things_generator1_start);
    ramdisk_data[433].data = data_things_generator5_start;
    ramdisk_data[433].len = (int32_t) (data_things_generator5_end - data_things_generator5_start);
    ramdisk_data[434].data = data_things_generator6_start;
    ramdisk_data[434].len = (int32_t) (data_things_generator6_end - data_things_generator6_start);
    ramdisk_data[435].data = data_things_generator7_start;
    ramdisk_data[435].len = (int32_t) (data_things_generator7_end - data_things_generator7_start);
    ramdisk_data[436].data = data_things_ghost1_start;
    ramdisk_data[436].len = (int32_t) (data_things_ghost1_end - data_things_ghost1_start);
    ramdisk_data[437].data = data_things_ghost2_start;
    ramdisk_data[437].len = (int32_t) (data_things_ghost2_end - data_things_ghost2_start);
    ramdisk_data[438].data = data_things_ghost3_start;
    ramdisk_data[438].len = (int32_t) (data_things_ghost3_end - data_things_ghost3_start);
    ramdisk_data[439].data = data_things_ghost4_start;
    ramdisk_data[439].len = (int32_t) (data_things_ghost4_end - data_things_ghost4_start);
    ramdisk_data[440].data = data_things_gobbler_start;
    ramdisk_data[440].len = (int32_t) (data_things_gobbler_end - data_things_gobbler_start);
    ramdisk_data[441].data = data_things_gobblermob_start;
    ramdisk_data[441].len = (int32_t) (data_things_gobblermob_end - data_things_gobblermob_start);
    ramdisk_data[442].data = data_things_grass1_start;
    ramdisk_data[442].len = (int32_t) (data_things_grass1_end - data_things_grass1_start);
    ramdisk_data[443].data = data_things_heart_start;
    ramdisk_data[443].len = (int32_t) (data_things_heart_end - data_things_heart_start);
    ramdisk_data[444].data = data_things_helmet1_start;
    ramdisk_data[444].len = (int32_t) (data_things_helmet1_end - data_things_helmet1_start);
    ramdisk_data[445].data = data_things_helmet2_start;
    ramdisk_data[445].len = (int32_t) (data_things_helmet2_end - data_things_helmet2_start);
    ramdisk_data[446].data = data_things_helmet3_start;
    ramdisk_data[446].len = (int32_t) (data_things_helmet3_end - data_things_helmet3_start);
    ramdisk_data[447].data = data_things_helmet4_start;
    ramdisk_data[447].len = (int32_t) (data_things_helmet4_end - data_things_helmet4_start);
    ramdisk_data[448].data = data_things_hit_miss_start;
    ramdisk_data[448].len = (int32_t) (data_things_hit_miss_end - data_things_hit_miss_start);
    ramdisk_data[449].data = data_things_hit_success_start;
    ramdisk_data[449].len = (int32_t) (data_things_hit_success_end - data_things_hit_success_start);
    ramdisk_data[450].data = data_things_jesus_start;
    ramdisk_data[450].len = (int32_t) (data_things_jesus_end - data_things_jesus_start);
    ramdisk_data[451].data = data_things_jesus_cloud_start;
    ramdisk_data[451].len = (int32_t) (data_things_jesus_cloud_end - data_things_jesus_cloud_start);
    ramdisk_data[452].data = data_things_jesus_cloud_anim_start;
    ramdisk_data[452].len = (int32_t) (data_things_jesus_cloud_anim_end - data_things_jesus_cloud_anim_start);
    ramdisk_data[453].data = data_things_juggernaut_start;
    ramdisk_data[453].len = (int32_t) (data_things_juggernaut_end - data_things_juggernaut_start);
    ramdisk_data[454].data = data_things_key_start;
    ramdisk_data[454].len = (int32_t) (data_things_key_end - data_things_key_start);
    ramdisk_data[455].data = data_things_keys2_start;
    ramdisk_data[455].len = (int32_t) (data_things_keys2_end - data_things_keys2_start);
    ramdisk_data[456].data = data_things_keys3_start;
    ramdisk_data[456].len = (int32_t) (data_things_keys3_end - data_things_keys3_start);
    ramdisk_data[457].data = data_things_lava1_start;
    ramdisk_data[457].len = (int32_t) (data_things_lava1_end - data_things_lava1_start);
    ramdisk_data[458].data = data_things_light_start;
    ramdisk_data[458].len = (int32_t) (data_things_light_end - data_things_light_start);
    ramdisk_data[459].data = data_things_magic1_start;
    ramdisk_data[459].len = (int32_t) (data_things_magic1_end - data_things_magic1_start);
    ramdisk_data[460].data = data_things_magic_cloud_start;
    ramdisk_data[460].len = (int32_t) (data_things_magic_cloud_end - data_things_magic_cloud_start);
    ramdisk_data[461].data = data_things_med_explosion1_start;
    ramdisk_data[461].len = (int32_t) (data_things_med_explosion1_end - data_things_med_explosion1_start);
    ramdisk_data[462].data = data_things_med_explosion2_start;
    ramdisk_data[462].len = (int32_t) (data_things_med_explosion2_end - data_things_med_explosion2_start);
    ramdisk_data[463].data = data_things_med_explosion3_start;
    ramdisk_data[463].len = (int32_t) (data_things_med_explosion3_end - data_things_med_explosion3_start);
    ramdisk_data[464].data = data_things_med_explosion4_start;
    ramdisk_data[464].len = (int32_t) (data_things_med_explosion4_end - data_things_med_explosion4_start);
    ramdisk_data[465].data = data_things_mob_any_start;
    ramdisk_data[465].len = (int32_t) (data_things_mob_any_end - data_things_mob_any_start);
    ramdisk_data[466].data = data_things_monst_any_start;
    ramdisk_data[466].len = (int32_t) (data_things_monst_any_end - data_things_monst_any_start);
    ramdisk_data[467].data = data_things_mushman1_start;
    ramdisk_data[467].len = (int32_t) (data_things_mushman1_end - data_things_mushman1_start);
    ramdisk_data[468].data = data_things_mushman2_start;
    ramdisk_data[468].len = (int32_t) (data_things_mushman2_end - data_things_mushman2_start);
    ramdisk_data[469].data = data_things_mushman3_start;
    ramdisk_data[469].len = (int32_t) (data_things_mushman3_end - data_things_mushman3_start);
    ramdisk_data[470].data = data_things_noentry_start;
    ramdisk_data[470].len = (int32_t) (data_things_noentry_end - data_things_noentry_start);
    ramdisk_data[471].data = data_things_orc1_start;
    ramdisk_data[471].len = (int32_t) (data_things_orc1_end - data_things_orc1_start);
    ramdisk_data[472].data = data_things_orc2_start;
    ramdisk_data[472].len = (int32_t) (data_things_orc2_end - data_things_orc2_start);
    ramdisk_data[473].data = data_things_orc3_start;
    ramdisk_data[473].len = (int32_t) (data_things_orc3_end - data_things_orc3_start);
    ramdisk_data[474].data = data_things_orc4_start;
    ramdisk_data[474].len = (int32_t) (data_things_orc4_end - data_things_orc4_start);
    ramdisk_data[475].data = data_things_orc5_start;
    ramdisk_data[475].len = (int32_t) (data_things_orc5_end - data_things_orc5_start);
    ramdisk_data[476].data = data_things_orcmob_start;
    ramdisk_data[476].len = (int32_t) (data_things_orcmob_end - data_things_orcmob_start);
    ramdisk_data[477].data = data_things_pellets_start;
    ramdisk_data[477].len = (int32_t) (data_things_pellets_end - data_things_pellets_start);
    ramdisk_data[478].data = data_things_pizza_start;
    ramdisk_data[478].len = (int32_t) (data_things_pizza_end - data_things_pizza_start);
    ramdisk_data[479].data = data_things_plant_start;
    ramdisk_data[479].len = (int32_t) (data_things_plant_end - data_things_plant_start);
    ramdisk_data[480].data = data_things_plantpod_start;
    ramdisk_data[480].len = (int32_t) (data_things_plantpod_end - data_things_plantpod_start);
    ramdisk_data[481].data = data_things_plasmaball1_start;
    ramdisk_data[481].len = (int32_t) (data_things_plasmaball1_end - data_things_plasmaball1_start);
    ramdisk_data[482].data = data_things_plasmaball2_start;
    ramdisk_data[482].len = (int32_t) (data_things_plasmaball2_end - data_things_plasmaball2_start);
    ramdisk_data[483].data = data_things_poison1_start;
    ramdisk_data[483].len = (int32_t) (data_things_poison1_end - data_things_poison1_start);
    ramdisk_data[484].data = data_things_poison2_start;
    ramdisk_data[484].len = (int32_t) (data_things_poison2_end - data_things_poison2_start);
    ramdisk_data[485].data = data_things_potion_any_start;
    ramdisk_data[485].len = (int32_t) (data_things_potion_any_end - data_things_potion_any_start);
    ramdisk_data[486].data = data_things_potion_cloudkill_start;
    ramdisk_data[486].len = (int32_t) (data_things_potion_cloudkill_end - data_things_potion_cloudkill_start);
    ramdisk_data[487].data = data_things_potion_fire_start;
    ramdisk_data[487].len = (int32_t) (data_things_potion_fire_end - data_things_potion_fire_start);
    ramdisk_data[488].data = data_things_potion_jesus_start;
    ramdisk_data[488].len = (int32_t) (data_things_potion_jesus_end - data_things_potion_jesus_start);
    ramdisk_data[489].data = data_things_potion_life_start;
    ramdisk_data[489].len = (int32_t) (data_things_potion_life_end - data_things_potion_life_start);
    ramdisk_data[490].data = data_things_potion_monsticide_start;
    ramdisk_data[490].len = (int32_t) (data_things_potion_monsticide_end - data_things_potion_monsticide_start);
    ramdisk_data[491].data = data_things_potion_shield_start;
    ramdisk_data[491].len = (int32_t) (data_things_potion_shield_end - data_things_potion_shield_start);
    ramdisk_data[492].data = data_things_powerup1_start;
    ramdisk_data[492].len = (int32_t) (data_things_powerup1_end - data_things_powerup1_start);
    ramdisk_data[493].data = data_things_ring1_start;
    ramdisk_data[493].len = (int32_t) (data_things_ring1_end - data_things_ring1_start);
    ramdisk_data[494].data = data_things_ring2_start;
    ramdisk_data[494].len = (int32_t) (data_things_ring2_end - data_things_ring2_start);
    ramdisk_data[495].data = data_things_ring3_start;
    ramdisk_data[495].len = (int32_t) (data_things_ring3_end - data_things_ring3_start);
    ramdisk_data[496].data = data_things_ring4_start;
    ramdisk_data[496].len = (int32_t) (data_things_ring4_end - data_things_ring4_start);
    ramdisk_data[497].data = data_things_ring5_start;
    ramdisk_data[497].len = (int32_t) (data_things_ring5_end - data_things_ring5_start);
    ramdisk_data[498].data = data_things_ring6_start;
    ramdisk_data[498].len = (int32_t) (data_things_ring6_end - data_things_ring6_start);
    ramdisk_data[499].data = data_things_ring_cloud_start;
    ramdisk_data[499].len = (int32_t) (data_things_ring_cloud_end - data_things_ring_cloud_start);
    ramdisk_data[500].data = data_things_ring_cloud_anim_start;
    ramdisk_data[500].len = (int32_t) (data_things_ring_cloud_anim_end - data_things_ring_cloud_anim_start);
    ramdisk_data[501].data = data_things_rock1_start;
    ramdisk_data[501].len = (int32_t) (data_things_rock1_end - data_things_rock1_start);
    ramdisk_data[502].data = data_things_rock1a_start;
    ramdisk_data[502].len = (int32_t) (data_things_rock1a_end - data_things_rock1a_start);
    ramdisk_data[503].data = data_things_rock2_start;
    ramdisk_data[503].len = (int32_t) (data_things_rock2_end - data_things_rock2_start);
    ramdisk_data[504].data = data_things_rock2a_start;
    ramdisk_data[504].len = (int32_t) (data_things_rock2a_end - data_things_rock2a_start);
    ramdisk_data[505].data = data_things_rock3_start;
    ramdisk_data[505].len = (int32_t) (data_things_rock3_end - data_things_rock3_start);
    ramdisk_data[506].data = data_things_rock3a_start;
    ramdisk_data[506].len = (int32_t) (data_things_rock3a_end - data_things_rock3a_start);
    ramdisk_data[507].data = data_things_rock4_start;
    ramdisk_data[507].len = (int32_t) (data_things_rock4_end - data_things_rock4_start);
    ramdisk_data[508].data = data_things_rock4a_start;
    ramdisk_data[508].len = (int32_t) (data_things_rock4a_end - data_things_rock4a_start);
    ramdisk_data[509].data = data_things_rock5_start;
    ramdisk_data[509].len = (int32_t) (data_things_rock5_end - data_things_rock5_start);
    ramdisk_data[510].data = data_things_rock5a_start;
    ramdisk_data[510].len = (int32_t) (data_things_rock5a_end - data_things_rock5a_start);
    ramdisk_data[511].data = data_things_rock6_start;
    ramdisk_data[511].len = (int32_t) (data_things_rock6_end - data_things_rock6_start);
    ramdisk_data[512].data = data_things_rock6a_start;
    ramdisk_data[512].len = (int32_t) (data_things_rock6a_end - data_things_rock6a_start);
    ramdisk_data[513].data = data_things_rock7_start;
    ramdisk_data[513].len = (int32_t) (data_things_rock7_end - data_things_rock7_start);
    ramdisk_data[514].data = data_things_rock7a_start;
    ramdisk_data[514].len = (int32_t) (data_things_rock7a_end - data_things_rock7a_start);
    ramdisk_data[515].data = data_things_sawblade1_start;
    ramdisk_data[515].len = (int32_t) (data_things_sawblade1_end - data_things_sawblade1_start);
    ramdisk_data[516].data = data_things_sawblade2_start;
    ramdisk_data[516].len = (int32_t) (data_things_sawblade2_end - data_things_sawblade2_start);
    ramdisk_data[517].data = data_things_sawblade3_start;
    ramdisk_data[517].len = (int32_t) (data_things_sawblade3_end - data_things_sawblade3_start);
    ramdisk_data[518].data = data_things_sawblade4_start;
    ramdisk_data[518].len = (int32_t) (data_things_sawblade4_end - data_things_sawblade4_start);
    ramdisk_data[519].data = data_things_sawblade5_start;
    ramdisk_data[519].len = (int32_t) (data_things_sawblade5_end - data_things_sawblade5_start);
    ramdisk_data[520].data = data_things_scythe1_start;
    ramdisk_data[520].len = (int32_t) (data_things_scythe1_end - data_things_scythe1_start);
    ramdisk_data[521].data = data_things_scythe1_anim_start;
    ramdisk_data[521].len = (int32_t) (data_things_scythe1_anim_end - data_things_scythe1_anim_start);
    ramdisk_data[522].data = data_things_shield1_start;
    ramdisk_data[522].len = (int32_t) (data_things_shield1_end - data_things_shield1_start);
    ramdisk_data[523].data = data_things_shield1_anim_start;
    ramdisk_data[523].len = (int32_t) (data_things_shield1_anim_end - data_things_shield1_anim_start);
    ramdisk_data[524].data = data_things_shop_floor1_start;
    ramdisk_data[524].len = (int32_t) (data_things_shop_floor1_end - data_things_shop_floor1_start);
    ramdisk_data[525].data = data_things_shopkeeper_start;
    ramdisk_data[525].len = (int32_t) (data_things_shopkeeper_end - data_things_shopkeeper_start);
    ramdisk_data[526].data = data_things_shotgun_start;
    ramdisk_data[526].len = (int32_t) (data_things_shotgun_end - data_things_shotgun_start);
    ramdisk_data[527].data = data_things_shotgun_anim_start;
    ramdisk_data[527].len = (int32_t) (data_things_shotgun_anim_end - data_things_shotgun_anim_start);
    ramdisk_data[528].data = data_things_silkball_start;
    ramdisk_data[528].len = (int32_t) (data_things_silkball_end - data_things_silkball_start);
    ramdisk_data[529].data = data_things_skeleton1_start;
    ramdisk_data[529].len = (int32_t) (data_things_skeleton1_end - data_things_skeleton1_start);
    ramdisk_data[530].data = data_things_skull1_start;
    ramdisk_data[530].len = (int32_t) (data_things_skull1_end - data_things_skull1_start);
    ramdisk_data[531].data = data_things_skull2_start;
    ramdisk_data[531].len = (int32_t) (data_things_skull2_end - data_things_skull2_start);
    ramdisk_data[532].data = data_things_slime1_start;
    ramdisk_data[532].len = (int32_t) (data_things_slime1_end - data_things_slime1_start);
    ramdisk_data[533].data = data_things_slime2_start;
    ramdisk_data[533].len = (int32_t) (data_things_slime2_end - data_things_slime2_start);
    ramdisk_data[534].data = data_things_slime3_start;
    ramdisk_data[534].len = (int32_t) (data_things_slime3_end - data_things_slime3_start);
    ramdisk_data[535].data = data_things_slime4_start;
    ramdisk_data[535].len = (int32_t) (data_things_slime4_end - data_things_slime4_start);
    ramdisk_data[536].data = data_things_slimeball_start;
    ramdisk_data[536].len = (int32_t) (data_things_slimeball_end - data_things_slimeball_start);
    ramdisk_data[537].data = data_things_small_explosion1_start;
    ramdisk_data[537].len = (int32_t) (data_things_small_explosion1_end - data_things_small_explosion1_start);
    ramdisk_data[538].data = data_things_small_explosion2_start;
    ramdisk_data[538].len = (int32_t) (data_things_small_explosion2_end - data_things_small_explosion2_start);
    ramdisk_data[539].data = data_things_small_explosion3_start;
    ramdisk_data[539].len = (int32_t) (data_things_small_explosion3_end - data_things_small_explosion3_start);
    ramdisk_data[540].data = data_things_small_explosion4_start;
    ramdisk_data[540].len = (int32_t) (data_things_small_explosion4_end - data_things_small_explosion4_start);
    ramdisk_data[541].data = data_things_sorceror_start;
    ramdisk_data[541].len = (int32_t) (data_things_sorceror_end - data_things_sorceror_start);
    ramdisk_data[542].data = data_things_sorcerormob_start;
    ramdisk_data[542].len = (int32_t) (data_things_sorcerormob_end - data_things_sorcerormob_start);
    ramdisk_data[543].data = data_things_spam_start;
    ramdisk_data[543].len = (int32_t) (data_things_spam_end - data_things_spam_start);
    ramdisk_data[544].data = data_things_sparkle_start;
    ramdisk_data[544].len = (int32_t) (data_things_sparkle_end - data_things_sparkle_start);
    ramdisk_data[545].data = data_things_spider1_start;
    ramdisk_data[545].len = (int32_t) (data_things_spider1_end - data_things_spider1_start);
    ramdisk_data[546].data = data_things_spider2_start;
    ramdisk_data[546].len = (int32_t) (data_things_spider2_end - data_things_spider2_start);
    ramdisk_data[547].data = data_things_squidling1_start;
    ramdisk_data[547].len = (int32_t) (data_things_squidling1_end - data_things_squidling1_start);
    ramdisk_data[548].data = data_things_squidling2_start;
    ramdisk_data[548].len = (int32_t) (data_things_squidling2_end - data_things_squidling2_start);
    ramdisk_data[549].data = data_things_stick1_start;
    ramdisk_data[549].len = (int32_t) (data_things_stick1_end - data_things_stick1_start);
    ramdisk_data[550].data = data_things_stick1_anim_start;
    ramdisk_data[550].len = (int32_t) (data_things_stick1_anim_end - data_things_stick1_anim_start);
    ramdisk_data[551].data = data_things_stick2_start;
    ramdisk_data[551].len = (int32_t) (data_things_stick2_end - data_things_stick2_start);
    ramdisk_data[552].data = data_things_stick2_anim_start;
    ramdisk_data[552].len = (int32_t) (data_things_stick2_anim_end - data_things_stick2_anim_start);
    ramdisk_data[553].data = data_things_stickyslime_start;
    ramdisk_data[553].len = (int32_t) (data_things_stickyslime_end - data_things_stickyslime_start);
    ramdisk_data[554].data = data_things_sword1_start;
    ramdisk_data[554].len = (int32_t) (data_things_sword1_end - data_things_sword1_start);
    ramdisk_data[555].data = data_things_sword10_start;
    ramdisk_data[555].len = (int32_t) (data_things_sword10_end - data_things_sword10_start);
    ramdisk_data[556].data = data_things_sword10_anim_start;
    ramdisk_data[556].len = (int32_t) (data_things_sword10_anim_end - data_things_sword10_anim_start);
    ramdisk_data[557].data = data_things_sword1_anim_start;
    ramdisk_data[557].len = (int32_t) (data_things_sword1_anim_end - data_things_sword1_anim_start);
    ramdisk_data[558].data = data_things_sword2_start;
    ramdisk_data[558].len = (int32_t) (data_things_sword2_end - data_things_sword2_start);
    ramdisk_data[559].data = data_things_sword2_anim_start;
    ramdisk_data[559].len = (int32_t) (data_things_sword2_anim_end - data_things_sword2_anim_start);
    ramdisk_data[560].data = data_things_sword3_start;
    ramdisk_data[560].len = (int32_t) (data_things_sword3_end - data_things_sword3_start);
    ramdisk_data[561].data = data_things_sword3_anim_start;
    ramdisk_data[561].len = (int32_t) (data_things_sword3_anim_end - data_things_sword3_anim_start);
    ramdisk_data[562].data = data_things_sword4_start;
    ramdisk_data[562].len = (int32_t) (data_things_sword4_end - data_things_sword4_start);
    ramdisk_data[563].data = data_things_sword4_anim_start;
    ramdisk_data[563].len = (int32_t) (data_things_sword4_anim_end - data_things_sword4_anim_start);
    ramdisk_data[564].data = data_things_sword5_start;
    ramdisk_data[564].len = (int32_t) (data_things_sword5_end - data_things_sword5_start);
    ramdisk_data[565].data = data_things_sword5_anim_start;
    ramdisk_data[565].len = (int32_t) (data_things_sword5_anim_end - data_things_sword5_anim_start);
    ramdisk_data[566].data = data_things_sword6_start;
    ramdisk_data[566].len = (int32_t) (data_things_sword6_end - data_things_sword6_start);
    ramdisk_data[567].data = data_things_sword6_anim_start;
    ramdisk_data[567].len = (int32_t) (data_things_sword6_anim_end - data_things_sword6_anim_start);
    ramdisk_data[568].data = data_things_sword7_start;
    ramdisk_data[568].len = (int32_t) (data_things_sword7_end - data_things_sword7_start);
    ramdisk_data[569].data = data_things_sword7_anim_start;
    ramdisk_data[569].len = (int32_t) (data_things_sword7_anim_end - data_things_sword7_anim_start);
    ramdisk_data[570].data = data_things_sword8_start;
    ramdisk_data[570].len = (int32_t) (data_things_sword8_end - data_things_sword8_start);
    ramdisk_data[571].data = data_things_sword8_anim_start;
    ramdisk_data[571].len = (int32_t) (data_things_sword8_anim_end - data_things_sword8_anim_start);
    ramdisk_data[572].data = data_things_sword9_start;
    ramdisk_data[572].len = (int32_t) (data_things_sword9_end - data_things_sword9_start);
    ramdisk_data[573].data = data_things_sword9_anim_start;
    ramdisk_data[573].len = (int32_t) (data_things_sword9_anim_end - data_things_sword9_anim_start);
    ramdisk_data[574].data = data_things_teleport1_start;
    ramdisk_data[574].len = (int32_t) (data_things_teleport1_end - data_things_teleport1_start);
    ramdisk_data[575].data = data_things_torch_start;
    ramdisk_data[575].len = (int32_t) (data_things_torch_end - data_things_torch_start);
    ramdisk_data[576].data = data_things_torches_start;
    ramdisk_data[576].len = (int32_t) (data_things_torches_end - data_things_torches_start);
    ramdisk_data[577].data = data_things_trap1_start;
    ramdisk_data[577].len = (int32_t) (data_things_trap1_end - data_things_trap1_start);
    ramdisk_data[578].data = data_things_trap2_start;
    ramdisk_data[578].len = (int32_t) (data_things_trap2_end - data_things_trap2_start);
    ramdisk_data[579].data = data_things_trap3_start;
    ramdisk_data[579].len = (int32_t) (data_things_trap3_end - data_things_trap3_start);
    ramdisk_data[580].data = data_things_treasure_any_start;
    ramdisk_data[580].len = (int32_t) (data_things_treasure_any_end - data_things_treasure_any_start);
    ramdisk_data[581].data = data_things_valkyrie_start;
    ramdisk_data[581].len = (int32_t) (data_things_valkyrie_end - data_things_valkyrie_start);
    ramdisk_data[582].data = data_things_wall1_start;
    ramdisk_data[582].len = (int32_t) (data_things_wall1_end - data_things_wall1_start);
    ramdisk_data[583].data = data_things_wall10_start;
    ramdisk_data[583].len = (int32_t) (data_things_wall10_end - data_things_wall10_start);
    ramdisk_data[584].data = data_things_wall11_start;
    ramdisk_data[584].len = (int32_t) (data_things_wall11_end - data_things_wall11_start);
    ramdisk_data[585].data = data_things_wall2_start;
    ramdisk_data[585].len = (int32_t) (data_things_wall2_end - data_things_wall2_start);
    ramdisk_data[586].data = data_things_wall3_start;
    ramdisk_data[586].len = (int32_t) (data_things_wall3_end - data_things_wall3_start);
    ramdisk_data[587].data = data_things_wall4_start;
    ramdisk_data[587].len = (int32_t) (data_things_wall4_end - data_things_wall4_start);
    ramdisk_data[588].data = data_things_wall5_start;
    ramdisk_data[588].len = (int32_t) (data_things_wall5_end - data_things_wall5_start);
    ramdisk_data[589].data = data_things_wall6_start;
    ramdisk_data[589].len = (int32_t) (data_things_wall6_end - data_things_wall6_start);
    ramdisk_data[590].data = data_things_wall7_start;
    ramdisk_data[590].len = (int32_t) (data_things_wall7_end - data_things_wall7_start);
    ramdisk_data[591].data = data_things_wall8_start;
    ramdisk_data[591].len = (int32_t) (data_things_wall8_end - data_things_wall8_start);
    ramdisk_data[592].data = data_things_wall9_start;
    ramdisk_data[592].len = (int32_t) (data_things_wall9_end - data_things_wall9_start);
    ramdisk_data[593].data = data_things_wall_lit1_start;
    ramdisk_data[593].len = (int32_t) (data_things_wall_lit1_end - data_things_wall_lit1_start);
    ramdisk_data[594].data = data_things_wand1_start;
    ramdisk_data[594].len = (int32_t) (data_things_wand1_end - data_things_wand1_start);
    ramdisk_data[595].data = data_things_wand1_anim_start;
    ramdisk_data[595].len = (int32_t) (data_things_wand1_anim_end - data_things_wand1_anim_start);
    ramdisk_data[596].data = data_things_wand2_start;
    ramdisk_data[596].len = (int32_t) (data_things_wand2_end - data_things_wand2_start);
    ramdisk_data[597].data = data_things_wand2_anim_start;
    ramdisk_data[597].len = (int32_t) (data_things_wand2_anim_end - data_things_wand2_anim_start);
    ramdisk_data[598].data = data_things_wand3_start;
    ramdisk_data[598].len = (int32_t) (data_things_wand3_end - data_things_wand3_start);
    ramdisk_data[599].data = data_things_wand3_anim_start;
    ramdisk_data[599].len = (int32_t) (data_things_wand3_anim_end - data_things_wand3_anim_start);
    ramdisk_data[600].data = data_things_wand4_start;
    ramdisk_data[600].len = (int32_t) (data_things_wand4_end - data_things_wand4_start);
    ramdisk_data[601].data = data_things_wand4_anim_start;
    ramdisk_data[601].len = (int32_t) (data_things_wand4_anim_end - data_things_wand4_anim_start);
    ramdisk_data[602].data = data_things_warrior_start;
    ramdisk_data[602].len = (int32_t) (data_things_warrior_end - data_things_warrior_start);
    ramdisk_data[603].data = data_things_water_start;
    ramdisk_data[603].len = (int32_t) (data_things_water_end - data_things_water_start);
    ramdisk_data[604].data = data_things_water_poison_start;
    ramdisk_data[604].len = (int32_t) (data_things_water_poison_end - data_things_water_poison_start);
    ramdisk_data[605].data = data_things_weapon_any_start;
    ramdisk_data[605].len = (int32_t) (data_things_weapon_any_end - data_things_weapon_any_start);
    ramdisk_data[606].data = data_things_weapon_swing1_start;
    ramdisk_data[606].len = (int32_t) (data_things_weapon_swing1_end - data_things_weapon_swing1_start);
    ramdisk_data[607].data = data_things_weapon_swing2_start;
    ramdisk_data[607].len = (int32_t) (data_things_weapon_swing2_end - data_things_weapon_swing2_start);
    ramdisk_data[608].data = data_things_wizard_start;
    ramdisk_data[608].len = (int32_t) (data_things_wizard_end - data_things_wizard_start);
    ramdisk_data[609].data = data_things_zombie1_start;
    ramdisk_data[609].len = (int32_t) (data_things_zombie1_end - data_things_zombie1_start);
    ramdisk_data[610].data = data_things_zombie2_start;
    ramdisk_data[610].len = (int32_t) (data_things_zombie2_end - data_things_zombie2_start);
    ramdisk_data[611].data = data_things_zombie3_start;
    ramdisk_data[611].len = (int32_t) (data_things_zombie3_end - data_things_zombie3_start);
    ramdisk_data[612].data = data_things_zombie4_start;
    ramdisk_data[612].len = (int32_t) (data_things_zombie4_end - data_things_zombie4_start);
    ramdisk_data[613].data = data_things_zombie5_start;
    ramdisk_data[613].len = (int32_t) (data_things_zombie5_end - data_things_zombie5_start);
    ramdisk_data[614].data = data_things_zombie_corpse1_start;
    ramdisk_data[614].len = (int32_t) (data_things_zombie_corpse1_end - data_things_zombie_corpse1_start);
    ramdisk_data[615].data = data_things_zombie_corpse2_start;
    ramdisk_data[615].len = (int32_t) (data_things_zombie_corpse2_end - data_things_zombie_corpse2_start);
    ramdisk_data[616].data = data_things_zombie_corpse3_start;
    ramdisk_data[616].len = (int32_t) (data_things_zombie_corpse3_end - data_things_zombie_corpse3_start);
    ramdisk_data[617].data = data_things_zombie_corpse4_start;
    ramdisk_data[617].len = (int32_t) (data_things_zombie_corpse4_end - data_things_zombie_corpse4_start);
    ramdisk_data[618].data = data_things_zombie_corpse5_start;
    ramdisk_data[618].len = (int32_t) (data_things_zombie_corpse5_end - data_things_zombie_corpse5_start);
    ramdisk_data[619].data = data_things_zombiemob_start;
    ramdisk_data[619].len = (int32_t) (data_things_zombiemob_end - data_things_zombiemob_start);
    ramdisk_data[620].data = data_ttf_LICENSE_txt_start;
    ramdisk_data[620].len = (int32_t) (data_ttf_LICENSE_txt_end - data_ttf_LICENSE_txt_start);
    ramdisk_data[621].data = data_ttf_OFL_txt_start;
    ramdisk_data[621].len = (int32_t) (data_ttf_OFL_txt_end - data_ttf_OFL_txt_start);
    ramdisk_data[622].data = data_ttf_Readme_txt_start;
    ramdisk_data[622].len = (int32_t) (data_ttf_Readme_txt_end - data_ttf_Readme_txt_start);
    ramdisk_data[623].data = data_ttf_emulogic_gif_start;
    ramdisk_data[623].len = (int32_t) (data_ttf_emulogic_gif_end - data_ttf_emulogic_gif_start);
    ramdisk_data[624].data = data_ttf_emulogic_ttf_pointsize10_data_start;
    ramdisk_data[624].len = (int32_t) (data_ttf_emulogic_ttf_pointsize10_data_end - data_ttf_emulogic_ttf_pointsize10_data_start);
    ramdisk_data[625].data = data_ttf_emulogic_ttf_pointsize10_tga_start;
    ramdisk_data[625].len = (int32_t) (data_ttf_emulogic_ttf_pointsize10_tga_end - data_ttf_emulogic_ttf_pointsize10_tga_start);
    ramdisk_data[626].data = data_ttf_emulogic_ttf_pointsize12_data_start;
    ramdisk_data[626].len = (int32_t) (data_ttf_emulogic_ttf_pointsize12_data_end - data_ttf_emulogic_ttf_pointsize12_data_start);
    ramdisk_data[627].data = data_ttf_emulogic_ttf_pointsize12_tga_start;
    ramdisk_data[627].len = (int32_t) (data_ttf_emulogic_ttf_pointsize12_tga_end - data_ttf_emulogic_ttf_pointsize12_tga_start);
    ramdisk_data[628].data = data_ttf_emulogic_ttf_pointsize14_data_start;
    ramdisk_data[628].len = (int32_t) (data_ttf_emulogic_ttf_pointsize14_data_end - data_ttf_emulogic_ttf_pointsize14_data_start);
    ramdisk_data[629].data = data_ttf_emulogic_ttf_pointsize14_tga_start;
    ramdisk_data[629].len = (int32_t) (data_ttf_emulogic_ttf_pointsize14_tga_end - data_ttf_emulogic_ttf_pointsize14_tga_start);
    ramdisk_data[630].data = data_ttf_emulogic_ttf_pointsize16_data_start;
    ramdisk_data[630].len = (int32_t) (data_ttf_emulogic_ttf_pointsize16_data_end - data_ttf_emulogic_ttf_pointsize16_data_start);
    ramdisk_data[631].data = data_ttf_emulogic_ttf_pointsize16_tga_start;
    ramdisk_data[631].len = (int32_t) (data_ttf_emulogic_ttf_pointsize16_tga_end - data_ttf_emulogic_ttf_pointsize16_tga_start);
    ramdisk_data[632].data = data_ttf_emulogic_ttf_pointsize18_data_start;
    ramdisk_data[632].len = (int32_t) (data_ttf_emulogic_ttf_pointsize18_data_end - data_ttf_emulogic_ttf_pointsize18_data_start);
    ramdisk_data[633].data = data_ttf_emulogic_ttf_pointsize18_tga_start;
    ramdisk_data[633].len = (int32_t) (data_ttf_emulogic_ttf_pointsize18_tga_end - data_ttf_emulogic_ttf_pointsize18_tga_start);
    ramdisk_data[634].data = data_ttf_emulogic_ttf_pointsize2_data_start;
    ramdisk_data[634].len = (int32_t) (data_ttf_emulogic_ttf_pointsize2_data_end - data_ttf_emulogic_ttf_pointsize2_data_start);
    ramdisk_data[635].data = data_ttf_emulogic_ttf_pointsize2_tga_start;
    ramdisk_data[635].len = (int32_t) (data_ttf_emulogic_ttf_pointsize2_tga_end - data_ttf_emulogic_ttf_pointsize2_tga_start);
    ramdisk_data[636].data = data_ttf_emulogic_ttf_pointsize20_data_start;
    ramdisk_data[636].len = (int32_t) (data_ttf_emulogic_ttf_pointsize20_data_end - data_ttf_emulogic_ttf_pointsize20_data_start);
    ramdisk_data[637].data = data_ttf_emulogic_ttf_pointsize20_tga_start;
    ramdisk_data[637].len = (int32_t) (data_ttf_emulogic_ttf_pointsize20_tga_end - data_ttf_emulogic_ttf_pointsize20_tga_start);
    ramdisk_data[638].data = data_ttf_emulogic_ttf_pointsize22_data_start;
    ramdisk_data[638].len = (int32_t) (data_ttf_emulogic_ttf_pointsize22_data_end - data_ttf_emulogic_ttf_pointsize22_data_start);
    ramdisk_data[639].data = data_ttf_emulogic_ttf_pointsize22_tga_start;
    ramdisk_data[639].len = (int32_t) (data_ttf_emulogic_ttf_pointsize22_tga_end - data_ttf_emulogic_ttf_pointsize22_tga_start);
    ramdisk_data[640].data = data_ttf_emulogic_ttf_pointsize24_data_start;
    ramdisk_data[640].len = (int32_t) (data_ttf_emulogic_ttf_pointsize24_data_end - data_ttf_emulogic_ttf_pointsize24_data_start);
    ramdisk_data[641].data = data_ttf_emulogic_ttf_pointsize24_tga_start;
    ramdisk_data[641].len = (int32_t) (data_ttf_emulogic_ttf_pointsize24_tga_end - data_ttf_emulogic_ttf_pointsize24_tga_start);
    ramdisk_data[642].data = data_ttf_emulogic_ttf_pointsize26_data_start;
    ramdisk_data[642].len = (int32_t) (data_ttf_emulogic_ttf_pointsize26_data_end - data_ttf_emulogic_ttf_pointsize26_data_start);
    ramdisk_data[643].data = data_ttf_emulogic_ttf_pointsize26_tga_start;
    ramdisk_data[643].len = (int32_t) (data_ttf_emulogic_ttf_pointsize26_tga_end - data_ttf_emulogic_ttf_pointsize26_tga_start);
    ramdisk_data[644].data = data_ttf_emulogic_ttf_pointsize28_data_start;
    ramdisk_data[644].len = (int32_t) (data_ttf_emulogic_ttf_pointsize28_data_end - data_ttf_emulogic_ttf_pointsize28_data_start);
    ramdisk_data[645].data = data_ttf_emulogic_ttf_pointsize28_tga_start;
    ramdisk_data[645].len = (int32_t) (data_ttf_emulogic_ttf_pointsize28_tga_end - data_ttf_emulogic_ttf_pointsize28_tga_start);
    ramdisk_data[646].data = data_ttf_emulogic_ttf_pointsize30_data_start;
    ramdisk_data[646].len = (int32_t) (data_ttf_emulogic_ttf_pointsize30_data_end - data_ttf_emulogic_ttf_pointsize30_data_start);
    ramdisk_data[647].data = data_ttf_emulogic_ttf_pointsize30_tga_start;
    ramdisk_data[647].len = (int32_t) (data_ttf_emulogic_ttf_pointsize30_tga_end - data_ttf_emulogic_ttf_pointsize30_tga_start);
    ramdisk_data[648].data = data_ttf_emulogic_ttf_pointsize32_data_start;
    ramdisk_data[648].len = (int32_t) (data_ttf_emulogic_ttf_pointsize32_data_end - data_ttf_emulogic_ttf_pointsize32_data_start);
    ramdisk_data[649].data = data_ttf_emulogic_ttf_pointsize32_tga_start;
    ramdisk_data[649].len = (int32_t) (data_ttf_emulogic_ttf_pointsize32_tga_end - data_ttf_emulogic_ttf_pointsize32_tga_start);
    ramdisk_data[650].data = data_ttf_emulogic_ttf_pointsize34_data_start;
    ramdisk_data[650].len = (int32_t) (data_ttf_emulogic_ttf_pointsize34_data_end - data_ttf_emulogic_ttf_pointsize34_data_start);
    ramdisk_data[651].data = data_ttf_emulogic_ttf_pointsize34_tga_start;
    ramdisk_data[651].len = (int32_t) (data_ttf_emulogic_ttf_pointsize34_tga_end - data_ttf_emulogic_ttf_pointsize34_tga_start);
    ramdisk_data[652].data = data_ttf_emulogic_ttf_pointsize36_data_start;
    ramdisk_data[652].len = (int32_t) (data_ttf_emulogic_ttf_pointsize36_data_end - data_ttf_emulogic_ttf_pointsize36_data_start);
    ramdisk_data[653].data = data_ttf_emulogic_ttf_pointsize36_tga_start;
    ramdisk_data[653].len = (int32_t) (data_ttf_emulogic_ttf_pointsize36_tga_end - data_ttf_emulogic_ttf_pointsize36_tga_start);
    ramdisk_data[654].data = data_ttf_emulogic_ttf_pointsize38_data_start;
    ramdisk_data[654].len = (int32_t) (data_ttf_emulogic_ttf_pointsize38_data_end - data_ttf_emulogic_ttf_pointsize38_data_start);
    ramdisk_data[655].data = data_ttf_emulogic_ttf_pointsize38_tga_start;
    ramdisk_data[655].len = (int32_t) (data_ttf_emulogic_ttf_pointsize38_tga_end - data_ttf_emulogic_ttf_pointsize38_tga_start);
    ramdisk_data[656].data = data_ttf_emulogic_ttf_pointsize4_data_start;
    ramdisk_data[656].len = (int32_t) (data_ttf_emulogic_ttf_pointsize4_data_end - data_ttf_emulogic_ttf_pointsize4_data_start);
    ramdisk_data[657].data = data_ttf_emulogic_ttf_pointsize4_tga_start;
    ramdisk_data[657].len = (int32_t) (data_ttf_emulogic_ttf_pointsize4_tga_end - data_ttf_emulogic_ttf_pointsize4_tga_start);
    ramdisk_data[658].data = data_ttf_emulogic_ttf_pointsize40_data_start;
    ramdisk_data[658].len = (int32_t) (data_ttf_emulogic_ttf_pointsize40_data_end - data_ttf_emulogic_ttf_pointsize40_data_start);
    ramdisk_data[659].data = data_ttf_emulogic_ttf_pointsize40_tga_start;
    ramdisk_data[659].len = (int32_t) (data_ttf_emulogic_ttf_pointsize40_tga_end - data_ttf_emulogic_ttf_pointsize40_tga_start);
    ramdisk_data[660].data = data_ttf_emulogic_ttf_pointsize42_data_start;
    ramdisk_data[660].len = (int32_t) (data_ttf_emulogic_ttf_pointsize42_data_end - data_ttf_emulogic_ttf_pointsize42_data_start);
    ramdisk_data[661].data = data_ttf_emulogic_ttf_pointsize42_tga_start;
    ramdisk_data[661].len = (int32_t) (data_ttf_emulogic_ttf_pointsize42_tga_end - data_ttf_emulogic_ttf_pointsize42_tga_start);
    ramdisk_data[662].data = data_ttf_emulogic_ttf_pointsize44_data_start;
    ramdisk_data[662].len = (int32_t) (data_ttf_emulogic_ttf_pointsize44_data_end - data_ttf_emulogic_ttf_pointsize44_data_start);
    ramdisk_data[663].data = data_ttf_emulogic_ttf_pointsize44_tga_start;
    ramdisk_data[663].len = (int32_t) (data_ttf_emulogic_ttf_pointsize44_tga_end - data_ttf_emulogic_ttf_pointsize44_tga_start);
    ramdisk_data[664].data = data_ttf_emulogic_ttf_pointsize46_data_start;
    ramdisk_data[664].len = (int32_t) (data_ttf_emulogic_ttf_pointsize46_data_end - data_ttf_emulogic_ttf_pointsize46_data_start);
    ramdisk_data[665].data = data_ttf_emulogic_ttf_pointsize46_tga_start;
    ramdisk_data[665].len = (int32_t) (data_ttf_emulogic_ttf_pointsize46_tga_end - data_ttf_emulogic_ttf_pointsize46_tga_start);
    ramdisk_data[666].data = data_ttf_emulogic_ttf_pointsize48_data_start;
    ramdisk_data[666].len = (int32_t) (data_ttf_emulogic_ttf_pointsize48_data_end - data_ttf_emulogic_ttf_pointsize48_data_start);
    ramdisk_data[667].data = data_ttf_emulogic_ttf_pointsize48_tga_start;
    ramdisk_data[667].len = (int32_t) (data_ttf_emulogic_ttf_pointsize48_tga_end - data_ttf_emulogic_ttf_pointsize48_tga_start);
    ramdisk_data[668].data = data_ttf_emulogic_ttf_pointsize50_data_start;
    ramdisk_data[668].len = (int32_t) (data_ttf_emulogic_ttf_pointsize50_data_end - data_ttf_emulogic_ttf_pointsize50_data_start);
    ramdisk_data[669].data = data_ttf_emulogic_ttf_pointsize50_tga_start;
    ramdisk_data[669].len = (int32_t) (data_ttf_emulogic_ttf_pointsize50_tga_end - data_ttf_emulogic_ttf_pointsize50_tga_start);
    ramdisk_data[670].data = data_ttf_emulogic_ttf_pointsize52_data_start;
    ramdisk_data[670].len = (int32_t) (data_ttf_emulogic_ttf_pointsize52_data_end - data_ttf_emulogic_ttf_pointsize52_data_start);
    ramdisk_data[671].data = data_ttf_emulogic_ttf_pointsize52_tga_start;
    ramdisk_data[671].len = (int32_t) (data_ttf_emulogic_ttf_pointsize52_tga_end - data_ttf_emulogic_ttf_pointsize52_tga_start);
    ramdisk_data[672].data = data_ttf_emulogic_ttf_pointsize54_data_start;
    ramdisk_data[672].len = (int32_t) (data_ttf_emulogic_ttf_pointsize54_data_end - data_ttf_emulogic_ttf_pointsize54_data_start);
    ramdisk_data[673].data = data_ttf_emulogic_ttf_pointsize54_tga_start;
    ramdisk_data[673].len = (int32_t) (data_ttf_emulogic_ttf_pointsize54_tga_end - data_ttf_emulogic_ttf_pointsize54_tga_start);
    ramdisk_data[674].data = data_ttf_emulogic_ttf_pointsize56_data_start;
    ramdisk_data[674].len = (int32_t) (data_ttf_emulogic_ttf_pointsize56_data_end - data_ttf_emulogic_ttf_pointsize56_data_start);
    ramdisk_data[675].data = data_ttf_emulogic_ttf_pointsize56_tga_start;
    ramdisk_data[675].len = (int32_t) (data_ttf_emulogic_ttf_pointsize56_tga_end - data_ttf_emulogic_ttf_pointsize56_tga_start);
    ramdisk_data[676].data = data_ttf_emulogic_ttf_pointsize58_data_start;
    ramdisk_data[676].len = (int32_t) (data_ttf_emulogic_ttf_pointsize58_data_end - data_ttf_emulogic_ttf_pointsize58_data_start);
    ramdisk_data[677].data = data_ttf_emulogic_ttf_pointsize58_tga_start;
    ramdisk_data[677].len = (int32_t) (data_ttf_emulogic_ttf_pointsize58_tga_end - data_ttf_emulogic_ttf_pointsize58_tga_start);
    ramdisk_data[678].data = data_ttf_emulogic_ttf_pointsize6_data_start;
    ramdisk_data[678].len = (int32_t) (data_ttf_emulogic_ttf_pointsize6_data_end - data_ttf_emulogic_ttf_pointsize6_data_start);
    ramdisk_data[679].data = data_ttf_emulogic_ttf_pointsize6_tga_start;
    ramdisk_data[679].len = (int32_t) (data_ttf_emulogic_ttf_pointsize6_tga_end - data_ttf_emulogic_ttf_pointsize6_tga_start);
    ramdisk_data[680].data = data_ttf_emulogic_ttf_pointsize8_data_start;
    ramdisk_data[680].len = (int32_t) (data_ttf_emulogic_ttf_pointsize8_data_end - data_ttf_emulogic_ttf_pointsize8_data_start);
    ramdisk_data[681].data = data_ttf_emulogic_ttf_pointsize8_tga_start;
    ramdisk_data[681].len = (int32_t) (data_ttf_emulogic_ttf_pointsize8_tga_end - data_ttf_emulogic_ttf_pointsize8_tga_start);
#endif
}
