#include "bn_core.h"
#include "bn_math.h"
#include "bn_keypad.h"
#include "bn_display.h"
#include "bn_blending.h"
#include "bn_sprite_ptr.h"
#include "bn_sprite_builder.h"
#include "bn_string.h"
#include "bn_memory.h"
#include "bn_bg_palettes.h"
#include "bn_regular_bg_ptr.h"
#include "bn_fixed_point.h"
#include "bn_string_view.h"
#include "bn_vector.h"
#include "bn_log.h"
#include "bn_sprite_text_generator.h"
#include "bn_regular_bg_item.h"
#include "bn_affine_bg_ptr.h"
#include "bn_affine_bg_item.h"
#include "bn_affine_bg_tiles_ptr.h"
#include "bn_affine_bg_map_ptr.h"

#include "bn_sound.h"
#include "bn_sound_actions.h"
#include "bn_sound_items.h"

#include "bn_sprite_items_truman2.h"

#include "common_fixed_8x8_sprite_font.h"
#include "common_fixed_8x16_sprite_font.h"
#include "common_variable_8x8_sprite_font.h"
#include "common_variable_8x16_sprite_font.h"

#include "fixed_32x64_sprite_font.h"
#include "so_scene_type.h"
#include "so_player.h"
#include "so_scene_title.h"
#include "so_scene_butano.h"
#include "so_scene_game.h"
#include "so_scene_quest.h"
#include "so_scene_night.h"
#include "so_scene_shop.h"
#include "so_scene_nextday.h"
#include "so_scene_eve.h"
#include "so_scene_kites.h"
#include "so_scene_ending.h"

int main()
{
    bn::core::init();
    so::Scene scene = so::Scene::TITLE;

    //bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);

    bn::sprite_ptr player_sprite = bn::sprite_items::truman2.create_sprite(32,32);
    player_sprite.set_visible(false);
    so::Player player = so::Player(player_sprite); //might put invidual players in each scene

    while(true)
    {
        //this is where the title screen graphic will go (or it will go inside title_text_scene)
        if(scene == so::Scene::GAME)
        {
            so::Game game = so::Game(player);
            scene = game.execute();
        }
        else if(scene == so::Scene::TITLE)
        {
            so::Title title = so::Title();
            scene = title.execute();
        }
        else if(scene == so::Scene::NIGHT)
        {
            so::Night night = so::Night();
            scene = night.execute();
        }
        else if (scene == so::Scene::SHOP)
        {
            so::Shop shop = so::Shop(player);
            scene = shop.execute();
        }
        else if (scene == so::Scene::NEXTDAY)
        {
            so::Nextday nextday = so::Nextday(player);
            scene = nextday.execute();
        }
        else if (scene == so::Scene::EVE)
        {
            so::Eve eve = so::Eve(player);
            scene = eve.execute();
        }
        else if (scene == so::Scene::KITES)
        {
            so::Kites kites = so::Kites(player);
            scene = kites.execute();
        }
        else if (scene == so::Scene::ENDING)
        {
            so::Ending ending = so::Ending();
            scene = ending.execute();
        }
        //player.delete_data();
        //player.hide();
        bn::core::update();
    }
}

