#ifndef PLAYER_H
#define PLAYER_H

#include "bn_sprite_ptr.h"

class Player {
public:
    Player(const bn::sprite_ptr player_sprite);

    void move_player(int firstX, int firstY);

    inline float top() const { return this->y; }
    inline float left() const { return this->x; }
    /* inline float right() const { return this->x + 32; }
    inline float bottom() const { return this->y + 32; }
    inline float width() const { return 32; }
    inline float height() const { return 32; }
    inline bool is_white() const { return this->white; } */

private:
    bn::sprite_ptr player_sprite;
    float y;
    float x;
    //might use player_sprite_x and player_sprite_y instead here
};

// void create_player(int x, int y);

#endif