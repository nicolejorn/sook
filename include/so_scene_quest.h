#ifndef SO_SCENE_GAME_H
#define SO_SCENE_GAME_H

#include "so_scene_type.h"
#include "so_player.h"
#include "bn_fixed_point.h"

namespace so
{
    class Game
    {       
        private:
            Player* _player;
        public:
            Game(Player& player);
            Scene execute(); //bn::fixed_point spawn
    };
}

#endif