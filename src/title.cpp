#include "bn_string.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"
#include "bn_sprite_builder.h"
#include "bn_affine_mat_attributes.h"

#include "title.h"


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