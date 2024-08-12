#ifndef SO_NPC_H
#define SO_NPC_H

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
        NPC_TYPE _type;    
        bn::optional<bn::sprite_ptr> _sprite;   
    public:   
        Npc(int x, int y, NPC_TYPE type);
        //void update(bn::fixed_point player_pos);
        bn::fixed_point pos();
        void set_visible(bool visibility);
        NPC_TYPE type();
        void set_pos(bn::fixed_point pos);
    };
}
//void create_npc(int name, int firstX, int firstY);

#endif     