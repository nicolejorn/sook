#include "bn_core.h"
#include "bn_sprite_ptr.h"

#include "npc.h"

#include "bn_sprite_items_sook.h"
#include "bn_sprite_items_queenie.h"

void create_npc(int name) {
    switch (name) {
    case 1: {
        bn::sprite_ptr sook_sprite = bn::sprite_items::sook.create_sprite(0, 0);
        break;
    }
    case 2: {
        bn::sprite_ptr queenie_sprite = bn::sprite_items::queenie.create_sprite(0, 48);
        break;
    }
    default: {
        bn::sprite_ptr sook_sprite = bn::sprite_items::sook.create_sprite(0, 0);
        break;
    }
    } 
}