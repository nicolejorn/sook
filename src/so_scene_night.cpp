#include "so_scene_night.h"

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

#include "so_scene_type.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x8_sprite_font.h"
#include "bn_regular_bg_items_sook_room.h"
#include "so_dialogue_scene.cpp"

namespace so
{
    /* Night::Night()
    : _player(&player){} */

    Scene Night::execute() //bn::fixed_point spawn_location
    {
        //I want to hide the player here
        bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
        //bn::bg_palettes::set_transparent_color(bn::color(0, 0, 0)); //make part of night scene
        bn::regular_bg_ptr bedroom_bg = bn::regular_bg_items::sook_room.create_bg(0, 0);
        dialogue_scene(text_generator, "(Later that night...");
        bn::core::update();
        dialogue_scene(text_generator, "According to her calculations, we have $12.73.");
        bn::core::update();
        dialogue_scene(text_generator, "According to mine, exactly $13.)");
        bn::core::update();
        dialogue_scene(text_generator, "Buddy, we can't mess around with 13.");
        bn::core::update();
        dialogue_scene(text_generator, "(We toss a penny out the window.)");
        bn::core::update();
        //return Scene::SHOP
        //could have scrolling map on the way to Haha's house
        //"Liking Christmas is only for children? Screw that."
        //Or giving advice that adults should still like Christmas no matter what
        return Scene::TITLE;
    }
}