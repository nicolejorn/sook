#ifndef SO_PLAYER_H
#define SO_PLAYER_H

#include "bn_fixed_point.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_animate_actions.h"
#include "bn_affine_bg_ptr.h"
#include "bn_span.h"
#include "bn_affine_bg_map_cell.h"
#include "bn_sprite_items_truman2.h"

namespace so {
    class Player {
         private:
            bn::sprite_ptr _sprite;
            bn::fixed _dx;
            bn::fixed _dy;
            bn::fixed_point _pos;
            //const bn::sprite_item& _body_sprite_item;
            //const bn::sprite_ptr _body_sprite_item;
            //bn::fixed_point _body_position;
        public:
            Player(bn::sprite_ptr sprite); //const bn::sprite_ptr player_sprite
            void reset();
            void move_player(bool isTopDown); //bf has this in private
            void move_player(bool isTopDown, bn::sprite_ptr sprite1, bn::sprite_ptr sprite2);
            void hide();
            void spawn(bn::fixed_point pos);
            [[nodiscard]] bn::fixed_point pos();
    };
}

#endif

            /* inline bn::fixed top() const { return this->_body_position.y(); }
            inline bn::fixed left() const { return this->_body_position.x(); }
            inline void setTop(bn::fixed t) {
                this->_body_position.y() = t;
                //player_sprite.set_position(this->player_sprite_x, this->player_sprite_y);
            }
            inline void setLeft(bn::fixed l) {
                this->_body_position.x() = l;
                //player_sprite.set_position(this->player_sprite_x, this->player_sprite_y);
        } */

// void create_player(int x, int y);


/* inline float right() const { return this->x + 32; }
    inline float bottom() const { return this->y + 32; }
    inline float width() const { return 32; }
    inline float height() const { return 32; }
    inline bool is_white() const { return this->white; } */

    //bn::point player_map_position;
    //bn::point new_player_map_position;

    //bn::fixed player_sprite_x;
    //bn::fixed player_sprite_y;

    //might use player_sprite_x and player_sprite_y instead here