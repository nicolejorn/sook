#ifndef SO_ITEM_H
#define SO_ITEM_H

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

#include "so_item_type.h"

namespace so {
    class Item {
    private:
        bn::fixed_point _pos;
        bn::fixed _dy = 0;
        bn::fixed _dx = 0;
        //bn::camera_ptr _camera;
        ITEM_TYPE _type;    
        bn::optional<bn::sprite_ptr> _sprite;   
    public:   
        Item(int x, int y, ITEM_TYPE type);
        //void update(bn::fixed_point player_pos);
        bn::fixed_point pos();
        void set_visible(bool visibility);
        ITEM_TYPE type();
        void set_pos(bn::fixed_point pos);
    };
}

#endif     