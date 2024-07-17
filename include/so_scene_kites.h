#ifndef SO_SCENE_KITES_H
#define SO_SCENE_KITES_H

#include "so_player.h"
#include "so_scene_type.h"
#include "so_npc.h"
#include "so_npc_type.h"
#include "so_dialogue_scene.h"

namespace so
{
    class Kites
    {       
        private:
            Player* _player;
        public:
            Kites(Player& player);
            Scene execute(); //bn::fixed_point spawn
    };
}

#endif