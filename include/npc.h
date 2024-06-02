#ifndef NPC_H
#define NPC_H

#include "bn_sprite_ptr.h"

class Npc {
public:   
    Npc(bn::sprite_ptr npc_sprite);

    void move_npc(int firstX, int firstY);

    inline bn::fixed top() const { return this->npc_sprite_y; }
    inline bn::fixed left() const { return this->npc_sprite_x; }
    /* inline float right() const { return this->x + 32; }
    inline float bottom() const { return this->y + 32; }
    inline float width() const { return 32; }
    inline float height() const { return 32; } */

private:
    bn::sprite_ptr npc_sprite;
    bn::fixed npc_sprite_x;
    bn::fixed npc_sprite_y;
};

//void create_npc(int name, int firstX, int firstY);

#endif