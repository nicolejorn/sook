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
#include "so_dialogue_scene.h"
#include "so_item.h"

#include "bn_regular_bg_items_land.h"
#include "bn_sound_items.h"
#include "bn_sound_items_info.h"
#include "bn_sound_actions.h"

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
            "We've thirty cakes to bake.",
            "We mustn't, Buddy.",
            "If we start, we won't stop.",
            "And there's scarcely enough.", 
            "For forty cakes.",
            "(Neither of us has money,",
            "But we have a fruitcake fund each year.",
            "It's in the bead purse under my friend's bed.)"
        };
        //while(true) {
            _player->spawn(bn::fixed_point(0, 0)); //bn::fixed_point(32, 32)
            dialogue_scene(text_generator, dialogue_text_lines[0]); 
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[1]); 
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[2]); 
            bn::core::update();
            Item hat = Item(50, 0, ITEM_TYPE::HAT);
            //_player->spawn(bn::fixed_point(32, 32));
            while(_player->pos().x() < 50) {
                _player->move_player(true);
            }
            hat.set_visible(false);
            bn::bg_palettes::set_transparent_color(bn::color(0, 16, 0));
            //bn::regular_bg_ptr land_bg = bn::regular_bg_items::land.create_bg(0, 0);
            _player->spawn(bn::fixed_point(0, 0));
            Npc queenie = Npc(0, -32, NPC_TYPE::QUEENIE);
            Npc sook = Npc(0, -16, NPC_TYPE::SOOK); //bn::fixed_point(0, 70)
            Item pecan = Item(100, 50, ITEM_TYPE::PECAN);
            bn::core::update();
            while(!((_player->pos().y() > 50) && (_player->pos().x() > 80))) {
                _player->move_player(true);
            }
            pecan.set_visible(false);
            bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));
            //NPC sook = NPC(bn::fixed_point(0, 70), NPC_TYPE::SOOK);
            _player->spawn(bn::fixed_point(0, 0));
            bn::core::update();
            //spawn Sook and Queenie
            while(_player->pos().y() < 50) {
                _player->move_player(true);
            }
            queenie.set_pos(bn::fixed_point(50, 50));
            bn::core::update();
            bn::sound_items::crunch.play(0.95);
            /* while(!bn::keypad::start_pressed()) {
                if(bn::keypad::a_pressed()) {
                    bn::sound_items::crunch.play(0.95);
                }
                bn::core::update();
            } */
            //maybe this could be a still image like the FE CGs
            dialogue_scene(text_generator, dialogue_text_lines[3]);
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[4]);
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[5]);
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[6]);
            bn::core::update(); 
            dialogue_scene(text_generator, dialogue_text_lines[7]);
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[8]);
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[9]);
            bn::core::update(); 
            //return Scene::NIGHT;
            return Scene::NIGHT;
            /* dialogue_scene(text_generator, dialogue_text_lines[0]); 
            bn::core::update();
            dialogue_scene(text_generator, dialogue_text_lines[1]); 
            bn::core::update(); */
        //}
    }
}

