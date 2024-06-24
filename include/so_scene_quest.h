#ifndef SO_SCENE_QUEST_H
#define SO_SCENE_QUEST_H

#include "so_scene_type.h"
#include "so_player.h"
#include "bn_fixed_point.h"

namespace so
{
    class Quest
    {       
        private:
            Player* _player;
        public:
            Quest(Player& player);
            Scene execute(); //bn::fixed_point spawn
    };
}

#endif