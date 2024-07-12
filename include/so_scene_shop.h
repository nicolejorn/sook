#ifndef SO_SCENE_SHOP_H
#define SO_SCENE_SHOP_H

#include "bn_core.h"
#include "bn_log.h"
#include "bn_keypad.h"
#include "bn_string.h"
#include "bn_fixed_point.h"
#include "bn_sprite_ptr.h"
#include "bn_camera_ptr.h"
#include "bn_regular_bg_ptr.h"
#include "bn_affine_bg_ptr.h"
#include "bn_affine_bg_map_ptr.h"
#include "bn_optional.h"
#include "bn_span.h"
#include "bn_affine_bg_map_cell.h"
#include "bn_display.h"
#include "bn_sprite_font.h"
#include "bn_rect_window.h"
#include "bn_camera_actions.h"

#include "so_player.h"
#include "so_scene_type.h"
#include "so_npc.h"
#include "so_npc_type.h"
#include "so_dialogue_scene.h"

namespace so
{
    class Shop
    {       
        private:
            Player* _player;
        public:
            Shop(Player& player);
            //constexpr bn::fixed text_y_inc;
            //constexpr bn::fixed text_y_limit;
            //bn::sprite_text_generator text_generator(const sprite_font& font); //text_generator(common::variable_8x8_sprite_font)
            //void dialogue_scene(bn::sprite_text_generator& text_generator, const bn::string_view& dialogue);
            Scene execute(); //bn::fixed_point spawn
    };
}

#endif