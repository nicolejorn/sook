#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"
#include "bn_bg_palettes.h"
#include "bn_regular_bg_ptr.h"
#include "bn_sprites_mosaic.h"
#include "bn_sprite_actions.h"
#include "bn_sprite_builder.h"
#include "bn_sprites_actions.h"
#include "bn_sprite_text_generator.h"
#include "bn_sprite_animate_actions.h"
#include "bn_sprite_first_attributes.h"
#include "bn_sprite_third_attributes.h"
#include "bn_sprite_position_hbe_ptr.h"
#include "bn_sprite_first_attributes_hbe_ptr.h"
#include "bn_sprite_third_attributes_hbe_ptr.h"
#include "bn_sprite_affine_second_attributes.h"
#include "bn_sprite_regular_second_attributes.h"
#include "bn_sprite_affine_second_attributes_hbe_ptr.h"
#include "bn_sprite_regular_second_attributes_hbe_ptr.h"
#include "bn_sprite_ptr.h"

#include "bn_sprite_items_truman.h"
#include "bn_sprite_items_sook.h"

#include "common_fixed_8x8_sprite_font.h"
#include "common_fixed_8x16_sprite_font.h"
#include "common_variable_8x8_sprite_font.h"
#include "common_variable_8x16_sprite_font.h"

#include "fixed_32x64_sprite_font.h"
#include "player.h"

namespace
{
    constexpr bn::fixed text_y_inc = 14;
    constexpr bn::fixed text_y_limit = (bn::display::height() / 2) - text_y_inc;

    void title_text_scene(bn::sprite_text_generator& text_generator) //from the example "text"
    {
        //bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);
        bn::sprite_palette_item original_palette_item = text_generator.palette_item();
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, -text_y_limit, "Sook", text_sprites);
        text_generator.generate(0, text_y_limit, "Press START", text_sprites);

        while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void introduction_scene(bn::sprite_text_generator& text_generator)
    {
        //the text part works fine, but creating the sprites gives me an error
        //bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);
        bn::sprite_palette_item original_palette_item = text_generator.palette_item();
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, text_y_limit, "Oh my, it's fruitcake weather!", text_sprites);

        //const bn::sprite_palette_item& palette_item = bn::sprite_items::sook.palette_item();
        //bn::sprite_ptr sook = bn::sprite_items::sook.create_sprite(-32, 32);
        //bn::sprite_ptr truman = bn::sprite_items::truman.create_sprite(-32, -32);

        create_player();

        while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void help_find_hat(bn::sprite_text_generator& text_generator)
    {
        bn::sprite_palette_item original_palette_item = text_generator.palette_item();
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, text_y_limit, "Fetch our buggy. Help me find my hat. We've thirty cakes to bake.", text_sprites);

        control_player();
        //bn::sprite_ptr truman = bn::sprite_items::truman.create_sprite(-32, -32);
        //have "find your friend's hat" written w/ smaller font in top left corner

        //create_player();

        /*while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }*/
    }
}

int main()
{
    bn::core::init();

    bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);
    bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));

    while(true)
    {
        //this is where the title screen graphic will go (or it will go inside title_text_scene)
        title_text_scene(text_generator);
        bn::core::update();

        introduction_scene(text_generator); //we need to add more to this to actually see it
        bn::core::update();

        help_find_hat(text_generator);
        bn::core::update();
    }
}
