#include "so_scene_nextday.h"

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

#include "bn_regular_bg_items_land2.h"
#include "bn_regular_bg_items_trees.h"
#include "so_player.h"
#include "so_scene_type.h"
#include "so_npc.h"
#include "so_npc_type.h"
#include "so_dialogue_scene.h"

namespace so
{
    Nextday::Nextday(Player& player)
        : _player(&player) {}

    Scene Nextday::execute() //bn::fixed_point spawn_location
    {
        //might change land2 to be top-down
        bn::regular_bg_ptr land2_bg = bn::regular_bg_items::land2.create_bg(0, 0); //might add trees to this background
        _player->spawn(bn::fixed_point(-112, 9));
        bn::core::update();
        Npc sook = Npc(-80, 9, NPC_TYPE::SOOK); //bn::fixed_point(0, 70)
        Npc queenie = Npc(-48, 16, NPC_TYPE::QUEENIE);
        bn::core::update();
        //maybe have queenie "paddle over"
        bn::sprite_text_generator text_generator(common::variable_8x8_sprite_font);
        dialogue_scene(text_generator, "We're almost there;");
        bn::core::update();
        dialogue_scene(text_generator, "Can you smell it?");
        bn::core::update();
        while(_player->pos().x() < 70) {
            //_player->move_player();
            _player->move_player(false);
        }
        bn::regular_bg_ptr trees_bg = bn::regular_bg_items::trees.create_bg(0, 0);
        bn::core::update();
        dialogue_scene(text_generator, "It should be twice as tall as a boy.");
        bn::core::update();
        dialogue_scene(text_generator, "So a boy can't steal the star.");
        bn::core::update();
        //change background to show the trees
        return Scene::EVE;
    }
}