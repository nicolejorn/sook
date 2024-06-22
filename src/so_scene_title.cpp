#include "bn_string.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"
#include "bn_sprite_builder.h"
#include "bn_affine_mat_attributes.h"
#include "bn_core.h"
#include "bn_bg_palettes.h"
#include "bn_regular_bg_ptr.h"
#include "bn_string_view.h"
#include "bn_vector.h"
#include "bn_log.h"
#include "bn_optional.h"
#include "bn_sprite_ptr.h"

#include "so_scene_title.h"
#include "so_scene_type.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x8_sprite_font.h"

namespace so {
    Scene Title::execute() {
        bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));
        bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
        constexpr bn::fixed text_y_inc = 14;
        constexpr bn::fixed text_y_limit = (bn::display::height() / 2) - text_y_inc;
        text_generator.set_center_alignment();
        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, -text_y_limit, "Sook", text_sprites);
        text_generator.generate(0, text_y_limit, "Press START", text_sprites);
        while(!bn::keypad::start_pressed()) {
            bn::core::update();
        }
        return Scene::GAME;
    }
}
    /*
    title::title(bn::sprite_text_generator& text_generator) :
        _text_generator(text_generator)
    {
        constexpr bn::fixed text_y_inc = 14;
        constexpr bn::fixed text_y_limit = (bn::display::height() / 2) - text_y_inc;
        text_generator.set_center_alignment();
        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, -text_y_limit, "Sook", text_sprites);
        text_generator.generate(0, text_y_limit, "Press START", text_sprites);
    }  
    */