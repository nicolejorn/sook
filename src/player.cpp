#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_map_cell_info.h"
//#include "bn_sprite_ptr.h"
#include "bn_fixed_rect.h"
#include "bn_fixed_point.h"
#include "bn_sprite_builder.h"

#include "player.h"

#include "bn_sprite_items_truman2.h"

namespace {
    //bn::point player_map_position(32, 32); 
    //bn::point new_player_map_position = player_map_position;
}

Player::Player(const bn::sprite_ptr player_sprite) //const bn::sprite_ptr player_sprite
    : _body_sprite_item(player_sprite){ //player_sprite(player_sprite) 
        //player_map_position(firstX, firstY);
        //player_sprite_x = (player_map_position.x()); 
        //player_sprite_y = (player_map_position.y()); 
        //add bool movable parameter, this will call this->move_player if true
}

//int firstX, int firstY, bool goal_reached
void Player::move_player() {
    
        if(bn::keypad::left_pressed())
        {
            body_sprite.set_x(_body_position.x() - 8);
        }
        else if(bn::keypad::right_pressed())
        {
            body_sprite.set_x(_body_position.x() + 8);
        }

        if(bn::keypad::up_pressed())
        {
            body_sprite.set_y(_body_position.y() - 8);
        }
        else if(bn::keypad::down_pressed())
        {
            body_sprite.set_y(_body_position.y() + 8); //new_player_map_position.set_y new_player_map_position.y()
        }

        _body_position.set_x(body_sprite.x());
        _body_position.set_y(body_sprite.y());
        this->setLeft(body_sprite.x());
        this->setTop(body_sprite.y()); //sprite_y
        //how to call set_top and get_top from here?
        bn::core::update();
}

