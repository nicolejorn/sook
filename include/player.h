#ifndef PLAYER_H
#define PLAYER_H

#include "bn_sprite_ptr.h"

class Player {
public:
    Player(const bn::sprite_ptr player_sprite);

    void move_player(int firstX, int firstY, bool goal_reached);

    inline bn::fixed top() const { return this->player_sprite_y; }
    inline bn::fixed left() const { return this->player_sprite_x; }
    inline void setTop(bn::fixed t) {
        this->player_sprite_y = t;
        //player_sprite.set_position(this->player_sprite_x, this->player_sprite_y);
    }
    inline void setLeft(bn::fixed l) {
        this->player_sprite_x = l;
        //player_sprite.set_position(this->player_sprite_x, this->player_sprite_y);
    }
    /* inline float right() const { return this->x + 32; }
    inline float bottom() const { return this->y + 32; }
    inline float width() const { return 32; }
    inline float height() const { return 32; }
    inline bool is_white() const { return this->white; } */

private:
    bn::sprite_ptr player_sprite;
    //bn::point player_map_position;
    //bn::point new_player_map_position;
    bn::fixed player_sprite_x;
    bn::fixed player_sprite_y;
    //might use player_sprite_x and player_sprite_y instead here
};

// void create_player(int x, int y);

#endif