#include "bn_core.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_map_cell_info.h"
#include "bn_sprite_ptr.h"
#include "bn_keypad.h"

#include "npc.h"

#include "bn_sprite_items_sook.h"
#include "bn_sprite_items_queenie.h"
//#include <algorithm>

//use a class? So I could have a Sook object and a Queenie object

Npc::Npc(const bn::sprite_ptr npc_sprite)
    : npc_sprite(npc_sprite) {

}

void Npc::move_npc(int firstX, int firstY) {
    npc_sprite.set_position(npc_sprite_x, npc_sprite_y);
    bn::core::update();
}

    /*bn::point npc_map_position(firstX, firstY);
    bn::point new_npc_map_position = npc_map_position;
    npc_sprite_x = (npc_map_position.x()); 
    npc_sprite_y = (npc_map_position.y()); 

    while (npc_sprite_x < 50) {
        if(bn::keypad::left_pressed())
        {
            new_npc_map_position.set_x(new_npc_map_position.x() - 8);
        }
        else if(bn::keypad::right_pressed())
        {
            new_npc_map_position.set_x(new_npc_map_position.x() + 8);
        }

        if(bn::keypad::up_pressed())
        {
            new_npc_map_position.set_y(new_npc_map_position.y() - 8);
        }
        else if(bn::keypad::down_pressed())
        {
            new_npc_map_position.set_y(new_npc_map_position.y() + 8);
        }

        npc_map_position = new_npc_map_position;
        npc_sprite_x = (npc_map_position.x()); //- (map_item.dimensions().width() * 4) + 4;
        npc_sprite_y = (npc_map_position.y()); //- (map_item.dimensions().height() * 4) + 4;
        npc_sprite.set_position(npc_sprite_x, npc_sprite_y);
        bn::core::update();
    } */