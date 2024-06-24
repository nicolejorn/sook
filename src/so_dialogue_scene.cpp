#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_builder.h"
#include "bn_string.h"
#include "bn_memory.h"
#include "bn_bg_palettes.h"
#include "bn_regular_bg_ptr.h"
#include "bn_fixed_point.h"

#include "common_fixed_8x8_sprite_font.h"
#include "common_fixed_8x16_sprite_font.h"
#include "common_variable_8x8_sprite_font.h"
#include "common_variable_8x16_sprite_font.h"
#include "fixed_32x64_sprite_font.h"
#include "bn_sprite_text_generator.h"

namespace { //so 
    void dialogue_scene(bn::sprite_text_generator& text_generator, const bn::string_view& dialogue)
    {
        constexpr bn::fixed text_y_inc = 14;
        constexpr bn::fixed text_y_limit = (bn::display::height() / 2) - text_y_inc;
        //bn::sprite_palette_item original_palette_item = text_generator.palette_item();
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, text_y_limit, dialogue, text_sprites);

        //bn::sprite_ptr sook = bn::sprite_items::sook.create_sprite(-32, 32);

        while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }
}