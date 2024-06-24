#ifndef SO_SCENE_GAME_H
#define SO_SCENE_GAME_H

#include "so_scene_type.h"
#include "so_player.h"
#include "bn_fixed_point.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x8_sprite_font.h"
#include "bn_sprite_font.h"

namespace so
{
    class Game
    {       
        private:
            Player* _player;
        public:
            Game(Player& player);
            //constexpr bn::fixed text_y_inc;
            //constexpr bn::fixed text_y_limit;
            //bn::sprite_text_generator text_generator(const sprite_font& font); //text_generator(common::variable_8x8_sprite_font)
            //void dialogue_scene(bn::sprite_text_generator& text_generator, const bn::string_view& dialogue);
            Scene execute(); //bn::fixed_point spawn
    };
}

#endif