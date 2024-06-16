#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_map_cell_info.h"
#include "bn_sprite_ptr.h"

#include "player.h"

#include "bn_sprite_items_truman2.h"
//#include "bn_sprite_text_generator.h"

namespace {
    bn::point player_map_position(32, 32); //this needs to be fixed
    bn::point new_player_map_position = player_map_position;
}

Player::Player(const bn::sprite_ptr player_sprite)
    : player_sprite(player_sprite) {
        //player_map_position(firstX, firstY);
        player_sprite_x = (player_map_position.x()); 
        player_sprite_y = (player_map_position.y()); 
        //add bool movable parameter, this will call this->move_player if true
}

//int firstX, int firstY, bool goal_reached
void Player::move_player() {
    //bn::point player_map_position(firstX, firstY);
    //bn::point new_player_map_position = player_map_position;
    player_sprite_x = (player_map_position.x()); 
    player_sprite_y = (player_map_position.y()); 

    
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
        this->setLeft(player_sprite_x);
        this->setTop(player_sprite_y);
        //how to call set_top and get_top from here?
        bn::core::update();
}
    //this->setLeft(0); player_sprite_x = 0; }

