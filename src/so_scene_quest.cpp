#include "so_scene_quest.h"

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

#include "so_player.h"
#include "so_scene_type.h"
#include "so_npc.h"
#include "so_npc_type.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x8_sprite_font.h"

//bn::string_view goal_text_lines[] for finding hat, picking pecans, and going to Mr. Haha's house for ingredients

namespace so {
    Scene Quest::execute() {
        /* bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));
        bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
        constexpr bn::fixed text_y_inc = 14;
        constexpr bn::fixed text_y_limit = (bn::display::height() / 2) - text_y_inc;
        text_generator.set_center_alignment();
        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, -text_y_limit, "Sook", text_sprites);
        text_generator.generate(0, text_y_limit, "Press START", text_sprites);
        while(!bn::keypad::start_pressed()) {
            bn::core::update();
        } */
        return Scene::GAME;
    }
}
