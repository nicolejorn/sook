#include "so_scene_game.h"

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

#include "so_player.h"
#include "so_scene_type.h"
#include "so_npc.h"
#include "so_npc_type.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x8_sprite_font.h"

namespace so
{
    Game::Game(Player& player)
    : _player(&player){}

    Scene Game::execute() //bn::fixed_point spawn_location
    {
        bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
        constexpr bn::string_view dialogue_text_lines[] = {
            "Oh my, it's fruitcake weather!",
            "Fetch our buggy. Help me find my hat.",
            "We mustn't, Buddy.",
            "If we start, we won't stop.",
            "And there's scarcely enough.", 
            "For forty cakes."
        };
    }
}