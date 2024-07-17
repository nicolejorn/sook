#include "so_scene_eve.h"

#include "bn_core.h"
#include "bn_log.h"
#include "bn_keypad.h"
#include "bn_string.h"
#include "bn_fixed_point.h"
#include "bn_sprite_ptr.h"
#include "bn_camera_ptr.h"
#include "bn_regular_bg_ptr.h"
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
#include "common_variable_8x8_sprite_font.h"
#include "bn_sprite_text_generator.h"

namespace so
{
    Eve::Eve(Player& player)
        : _player(&player) {}

    Scene Eve::execute() //bn::fixed_point spawn_location
    {
        bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));
        bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
        bn::core::update();
        dialogue_scene(text_generator, "Your hand used to be so much smaller.");
        bn::core::update();
        dialogue_scene(text_generator, "I guess I hate to see you grow up.");
        bn::core::update();
        dialogue_scene(text_generator, "When you grow up, can we still be friends?");
        bn::core::update();
        return Scene::KITES;
    }
}