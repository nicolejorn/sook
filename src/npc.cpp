#include "bn_core.h"
#include "bn_sprite_ptr.h"

#include "npc.h"

#include "bn_sprite_items_sook.h"
#include "bn_sprite_items_queenie.h"
#include <algorithm>

void create_npc(int name, int firstX, int firstY) {
    switch (name) {
        case 1: {
            bn::sprite_ptr sook_sprite = bn::sprite_items::sook.create_sprite(firstX, firstY);
            bn::point sook_map_position(firstX, firstY);
            sook_sprite.set_position(firstX, firstY);
            break;
        }
        case 2: {
            bn::sprite_ptr queenie_sprite = bn::sprite_items::queenie.create_sprite(firstX, firstY);
            bn::point queenie_map_position(firstX, firstY);
            queenie_sprite.set_position(firstX, firstY);
            break;
        }
        default: {
            bn::sprite_ptr sook_sprite = bn::sprite_items::sook.create_sprite(firstX, firstY);
            bn::point sook_map_position(firstX, firstY);
            sook_sprite.set_position(firstX, firstY);
            break;
        }
    } 
}

//use a class? So I could have a Sook object and a Queenie object