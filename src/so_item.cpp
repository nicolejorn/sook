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

#include "so_item.h"
#include "so_item_type.h"

#include "bn_sprite_items_hat.h"
#include "bn_sprite_items_pecan.h"
#include "bn_sprite_items_buddy_kite.h"
#include "bn_sprite_items_bead_purse.h"

namespace so {
    Item::Item(int x, int y, ITEM_TYPE type)
    : _pos(x, y), _type(type) {
        if(_type == ITEM_TYPE::HAT)
        {
            _sprite = bn::sprite_items::hat.create_sprite(_pos.x(), _pos.y());
        }
        else if(_type == ITEM_TYPE::PECAN)
        {
            _sprite = bn::sprite_items::pecan.create_sprite(_pos.x(), _pos.y());
        }
        else if(_type == ITEM_TYPE::KITE)
        {
            _sprite = bn::sprite_items::buddy_kite.create_sprite(_pos.x(), _pos.y());
        }
        else if(_type == ITEM_TYPE::PURSE)
        {
            _sprite = bn::sprite_items::bead_purse.create_sprite(_pos.x(), _pos.y());
        }
        _sprite.value().set_visible(true);
    }

    void Item::set_visible(bool visiblity){
        _sprite.value().set_visible(visiblity);
    }

    bn::fixed_point Item::pos(){
        return _pos;
    }

    void Item::set_pos(bn::fixed_point pos){
        _pos = pos;
        _sprite.value().set_position(_pos);
    }

    ITEM_TYPE Item::type(){
        return _type;
    }
}