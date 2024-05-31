#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_sprite_items_truman2.h"
#include "player.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_map_cell_info.h"
#include "bn_sprite_ptr.h"
//#include "bn_sprite_text_generator.h"

void create_player(int x, int y) {
    bn::sprite_ptr player_sprite = bn::sprite_items::truman2.create_sprite(0, 0);
    bn::point player_map_position(x, y);
}

void control_player(int firstX, int firstY) {
    bn::sprite_ptr player_sprite = bn::sprite_items::truman2.create_sprite(firstX, firstY);
    bn::point player_map_position(firstX, firstY);
    bn::point new_player_map_position = player_map_position;
    bn::fixed player_sprite_x = (player_map_position.x()); //- (map_item.dimensions().width() * 4) + 4;
    bn::fixed player_sprite_y = (player_map_position.y()); 
    
    while (player_sprite_x < 50) {
        if(bn::keypad::left_pressed())
        {
            new_player_map_position.set_x(new_player_map_position.x() - 8);
        }
        else if(bn::keypad::right_pressed())
        {
            new_player_map_position.set_x(new_player_map_position.x() + 8);
        }

        if(bn::keypad::up_pressed())
        {
            new_player_map_position.set_y(new_player_map_position.y() - 8);
        }
        else if(bn::keypad::down_pressed())
        {
            new_player_map_position.set_y(new_player_map_position.y() + 8);
        }

        player_map_position = new_player_map_position;
        player_sprite_x = (player_map_position.x()); //- (map_item.dimensions().width() * 4) + 4;
        player_sprite_y = (player_map_position.y()); //- (map_item.dimensions().height() * 4) + 4;
        player_sprite.set_position(player_sprite_x, player_sprite_y);
        bn::core::update();
    }
}