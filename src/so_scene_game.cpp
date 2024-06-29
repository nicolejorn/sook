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
#include "bn_display.h"
#include "bn_sprite_font.h"

#include "so_player.h"
#include "so_scene_type.h"
#include "so_npc.h"
#include "so_npc_type.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x8_sprite_font.h"
#include "so_dialogue_scene.cpp"

#include "bn_sound_items.h"
#include "bn_sound_actions.h"

namespace so
{
    Game::Game(Player& player)
    : _player(&player){}

/*  constexpr bn::fixed text_y_inc = 14;
    constexpr bn::fixed text_y_limit = (bn::display::height() / 2) - text_y_inc;
    bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);

    void dialogue_scene(bn::sprite_text_generator& text_generator, const bn::string_view& dialogue)
    {
        text_generator.set_center_alignment();
        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, text_y_limit, dialogue, text_sprites);
        while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    } */

    Scene Game::execute() //bn::fixed_point spawn_location
    {
        bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
        constexpr bn::string_view dialogue_text_lines[] = {
            "Oh my, it's fruitcake weather!",
            "Fetch our buggy. Help me find my hat.",
            "We've thirty cakes to bake.",
            "We mustn't, Buddy.",
            "If we start, we won't stop.",
            "And there's scarcely enough.", 
            "For forty cakes."
        };
        //while(true) {
            _player->spawn(bn::fixed_point(0, 0)); //bn::fixed_point(32, 32)
            dialogue_scene(text_generator, dialogue_text_lines[0]); 
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[1]); 
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[2]); 
            bn::core::update();
            //_player->spawn(bn::fixed_point(32, 32));
            while(_player->pos().x() < 50) {
                _player->move_player();
            }
            bn::bg_palettes::set_transparent_color(bn::color(0, 16, 0));
            _player->spawn(bn::fixed_point(0, 0));
            Npc sook = Npc(0, -32, NPC_TYPE::SOOK); //bn::fixed_point(0, 70)
            Npc queenie = Npc(0, -64, NPC_TYPE::QUEENIE);
            bn::core::update();
            while(_player->pos().y() < 50) {
                _player->move_player();
            }
            bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));
            //NPC sook = NPC(bn::fixed_point(0, 70), NPC_TYPE::SOOK);
            _player->spawn(bn::fixed_point(0, 0));
            //spawn Sook and Queenie
            //play crunch sound (maybe needs more core::updates to work)
            bn::sound_items::crunch.play(0.8);
            return Scene::TITLE;
            /* dialogue_scene(text_generator, dialogue_text_lines[0]); 
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[1]); 
            bn::core::update(); */
        //}
    }
}

            /* text_generator.set_center_alignment();
            bn::vector<bn::sprite_ptr, 32> text_sprites;
            text_generator.generate(0, text_y_limit, dialogue_text_lines[0], text_sprites); 
            while (!bn::keypad::start_pressed())
            {
                bn::core::update();
            }
            bn::core::update();
            text_generator.generate(0, text_y_limit, dialogue_text_lines[1], text_sprites);
            while (!bn::keypad::start_pressed())
            {
                bn::core::update();
            }
            bn::core::update();
            text_generator.generate(0, text_y_limit, dialogue_text_lines[2], text_sprites);
            _player->spawn(bn::fixed_point(32, 32));
            //Player* player = new Player(bn::sprite_items::truman2.create_sprite(32, 32)); //
            //player.move_player(32, 32); 
            bn::core::update(); */