#include "bn_core.h"
#include "bn_regular_bg_ptr.h"
#include "bn_regular_bg_map_cell_info.h"
#include "bn_sprite_ptr.h"
#include "bn_optional.h"
#include "bn_math.h"
#include "bn_log.h"
#include "bn_display.h"
#include "bn_keypad.h"
#include "bn_affine_bg_map_ptr.h"
#include "bn_sound_items.h"

#include "so_npc.h"
#include "so_npc_type.h"

#include "bn_sprite_items_sook.h"
#include "bn_sprite_items_queenie.h"
//#include <algorithm>

//use a class? So I could have a Sook object and a Queenie object

namespace so {
    Npc::Npc(int x, int y, NPC_TYPE type)
    : _pos(x, y), _type(type) {
        if(_type == NPC_TYPE::SOOK)
        {
            _sprite = bn::sprite_items::sook.create_sprite(_pos.x(), _pos.y());
        }
        else if(_type == NPC_TYPE::QUEENIE)
        {
            _sprite = bn::sprite_items::queenie.create_sprite(_pos.x(), _pos.y());
        }
        _sprite.value().set_visible(true);
    }

    void Npc::set_visible(bool visiblity){
        _sprite.value().set_visible(visiblity);
    }

    bn::fixed_point Npc::pos(){
        return _pos;
    }

    void Npc::set_pos(bn::fixed_point pos){
        _pos = pos;
        //_sprite.set_x(_pos.x());
        //_sprite.set_y(_pos.y());
    }

    NPC_TYPE Npc::type(){
        return _type;
    }
}

    