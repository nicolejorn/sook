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

#include "so_scene_ending.h"
#include "so_scene_type.h"
#include "so_dialogue_scene.h"
#include "common_variable_8x8_sprite_font.h"
#include "bn_sprite_text_generator.h"

namespace so {
    Scene Ending::execute() {
        bn::bg_palettes::set_transparent_color(bn::color(0, 0, 0));
        bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
        dialogue_scene(text_generator, "That was our last Christmas together.");
        bn::core::update();
        dialogue_scene(text_generator, "Those who Know Best decide that");
        bn::core::update();
        dialogue_scene(text_generator, "I belong in military school.");
        bn::core::update();
        dialogue_scene(text_generator, "And there she remains, alone with Queenie.");
        bn::core::update();
        dialogue_scene(text_generator, "Then alone.");
        bn::core::update();
        dialogue_scene(text_generator, "One November");
        bn::core::update();
        dialogue_scene(text_generator, "She cannot rouse herself to exclaim:");
        bn::core::update();
        dialogue_scene(text_generator, "Oh my, it's fruitcake weather!");
        bn::core::update();
        return Scene::TITLE;
    }
}