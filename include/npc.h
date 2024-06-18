#ifndef NPC_H
#define NPC_H

#include "bn_fixed_point.h"
#include "bn_sprite_ptr.h"
#include "bn_camera_ptr.h"
#include "bn_optional.h"
#include "bn_span.h"
#include "bn_string.h"
#include "bn_random.h"
#include "bn_string_view.h"
#include "bn_sprite_animate_actions.h"
#include "bn_affine_bg_ptr.h"
#include "bn_span.h"
#include "bn_affine_bg_map_cell.h"

#include "so_npc_type.h"

namespace so {
    class Npc {
    private:
        bn::fixed_point _pos;
        bn::fixed _dy = 0;
        bn::fixed _dx = 0;
        //bn::camera_ptr _camera;
        NPC_TYPE _type;    
        bn::optional<bn::sprite_ptr> _sprite;   
    public:   
        Npc(int x, int y, NPC_TYPE type);
        //void update(bn::fixed_point player_pos);
        bn::fixed_point pos();
        void set_visible(bool visibility);
        NPC_TYPE type();
    };
}
//void create_npc(int name, int firstX, int firstY);

#endif

/* bn::sprite_ptr npc_sprite;
    bn::fixed npc_sprite_x;
    bn::fixed npc_sprite_y; */
/* inline float right() const { return this->x + 32; }
    inline float bottom() const { return this->y + 32; }
    inline float width() const { return 32; }
    inline float height() const { return 32; } */
/*Npc(bn::sprite_ptr npc_sprite);

        void move_npc(int firstX, int firstY);

        inline bn::fixed top() const { return this->npc_sprite_y; }
        inline bn::fixed left() const { return this->npc_sprite_x; }
        inline void setTop(bn::fixed t) {
            this->npc_sprite_y = t;
            npc_sprite.set_position(this->npc_sprite_x, this->npc_sprite_y);
        }
        inline void setLeft(bn::fixed l) {
            this->npc_sprite_x = l;
            npc_sprite.set_position(this->npc_sprite_x, this->npc_sprite_y);
        }*/        