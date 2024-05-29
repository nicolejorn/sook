#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_sprite_items_truman.h"
#include "player.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_map_cell_info.h"
#include "bn_sprite_ptr.h"
//#include "bn_sprite_text_generator.h"

void create_player() {
    bn::sprite_ptr player_sprite = bn::sprite_items::truman.create_sprite(0, 0);
    bn::point player_map_position(32, 32);
}

void control_player() {
    bn::sprite_ptr player_sprite = bn::sprite_items::truman.create_sprite(0, 0);
    bn::point player_map_position(32, 32);
    bn::point new_player_map_position = player_map_position;
    
    while (!bn::keypad::select_pressed()) {
        if(bn::keypad::left_pressed())
        {
            new_player_map_position.set_x(new_player_map_position.x() - 1);
        }
        else if(bn::keypad::right_pressed())
        {
            new_player_map_position.set_x(new_player_map_position.x() + 1);
        }

        if(bn::keypad::up_pressed())
        {
            new_player_map_position.set_y(new_player_map_position.y() - 1);
        }
        else if(bn::keypad::down_pressed())
        {
            new_player_map_position.set_y(new_player_map_position.y() + 1);
        }

        bn::fixed player_sprite_x = (player_map_position.x()); //- (map_item.dimensions().width() * 4) + 4;
        bn::fixed player_sprite_y = (player_map_position.y()); //- (map_item.dimensions().height() * 4) + 4;
        player_sprite.set_position(player_sprite_x, player_sprite_y);
        bn::core::update();
    }
}