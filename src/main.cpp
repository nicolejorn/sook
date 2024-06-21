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

/*#include "bn_sprites_mosaic.h"
#include "bn_sprite_actions.h"
#include "bn_sprites_actions.h"
#include "bn_sprite_text_generator.h"
#include "bn_sprite_animate_actions.h"
#include "bn_sprite_first_attributes.h"
#include "bn_sprite_third_attributes.h"
#include "bn_sprite_position_hbe_ptr.h"
#include "bn_sprite_first_attributes_hbe_ptr.h"
#include "bn_sprite_third_attributes_hbe_ptr.h"
#include "bn_sprite_affine_second_attributes.h"
#include "bn_sprite_regular_second_attributes.h"
#include "bn_sprite_affine_second_attributes_hbe_ptr.h"
#include "bn_sprite_regular_second_attributes_hbe_ptr.h"*/

/* namespace
{
    constexpr bn::fixed text_y_inc = 14;
    constexpr bn::fixed text_y_limit = (bn::display::height() / 2) - text_y_inc;

    void title_text_scene(bn::sprite_text_generator& text_generator) //from the example "text"
    {
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, -text_y_limit, "Sook", text_sprites);
        text_generator.generate(0, text_y_limit, "Press START", text_sprites);

        while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void dialogue_scene(bn::sprite_text_generator& text_generator, const bn::string_view& dialogue)
    {
        //bn::sprite_palette_item original_palette_item = text_generator.palette_item();
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, text_y_limit, dialogue, text_sprites);

        //bn::sprite_ptr sook = bn::sprite_items::sook.create_sprite(-32, 32);

        while (!bn::keypad::start_pressed())
        {
            bn::core::update();
        }
    }

    void help_find_hat(bn::sprite_text_generator& text_generator)
    {
        text_generator.set_center_alignment();

        bn::vector<bn::sprite_ptr, 32> text_sprites;
        text_generator.generate(0, text_y_limit, "We've thirty cakes to bake.", text_sprites);

        Player* player = new Player(bn::sprite_items::truman2.create_sprite(32, 32)); //
        //player.move_player(32, 32); 
        while(player->left() < 50) {
            player->move_player();
        }
        delete player; //without the delete the player stays but with the delete he disappears
        //pick_pecans();

        //have "find your friend's hat" written w/ smaller font in top left corner

        //if I comment out move_player and uncomment the start_pressed thing it still won't show NPCs

    }

    void pick_pecans() { 
        //bn::sprite_text_generator& text_generator

        //Need some way of being able to move all 3 at same time
        //Change while's placement? Have player create two NPCs when created?
        //bn::bg_palettes::set_transparent_color(bn::color(1, 16, 1));
        Player* player = new Player(bn::sprite_items::truman2.create_sprite(-16, -48));
        //player->setLeft(-16);
        //player->setTop(-48);
        Npc* sook = new Npc (bn::sprite_items::sook.create_sprite(-48, -48));
        Npc* queenie = new Npc (bn::sprite_items::queenie.create_sprite(-80, -48));
        //sook.setTop(sook.top() + 64);
        while (player->top() < 50) {
            player->move_player(); 
        }
        //how to make them follow - function overloading?
        delete player;
        delete sook;
        delete queenie; 

        //player.move_player(-16, -48, true);  

        //sook.move_npc(-48, -48); 
        //queenie.move_npc(-80, -48); 
    }

    void back_in_kitchen()
    {
        bn::bg_palettes::set_transparent_color(bn::color(16, 16, 16));
        Player* player = new Player(bn::sprite_items::truman2.create_sprite(-16, -48)); //.create_sprite(-16, -48)
        //player->setLeft(-16);
        //player->setTop(-48);
        Npc* sook = new Npc (bn::sprite_items::sook.create_sprite(-48, -48));
        Npc* queenie = new Npc (bn::sprite_items::queenie.create_sprite(-80, -48));
        //for the "caarackle" this could be a good place to use sound effects
        bn::sound_items::crunch.play(0.5);
        //he needs to walk up to Queenie. That triggers dialogue from the friend, then goes to next scene
        //BUG: will immediately end if player was too far left after the first part
        while ((player->left() > -60) && (player->top() > -20))
        {
            player->move_player();
        }

        delete player;
        delete sook;
        delete queenie; 
    }

} */

int main()
{
    bn::core::init();
    so::Scene scene = so::Scene::TITLE;
    //so::Scene scene = so::Scene::TITLE;

    bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);

    bn::sprite_ptr player_sprite = bn::sprite_items::truman2.create_sprite(32,32);
    player_sprite.set_visible(false);
    so::Player player = so::Player(player_sprite);

    //bn::string_view goal_text_lines[] for finding hat, picking pecans, and going to Mr. Haha's house for ingredients

    while(true)
    {
        //this is where the title screen graphic will go (or it will go inside title_text_scene)
        if(scene == so::Scene::GAME)
        {
            so::Game game = so::Game(player);
            scene = game.execute(); //bn::fixed_point(555, 384)
        }
        else if(scene == so::Scene::TITLE)
        {
            so::Title title = so::Title();
            scene = title.execute();
        }
        //player.delete_data();
        //player.hide();
        bn::core::update();
    }
}

/*  title_text_scene(text_generator);

        bn::core::update();

        Player* player = new Player(bn::sprite_items::truman2.create_sprite(32, 32)); //bn::sprite_items::truman2
        dialogue_scene(text_generator, dialogue_text_lines[0]); 
        bn::core::update();

        dialogue_scene(text_generator, dialogue_text_lines[1]); 
        bn::core::update();
        delete player;

        help_find_hat(text_generator);
        bn::core::update();

        //he has to pick pecans, have Sook and Queenie follow him EarthBound-style
        bn::bg_palettes::set_transparent_color(bn::color(1, 16, 1));
        pick_pecans();
        bn::core::update();

        back_in_kitchen();
        dialogue_scene(text_generator, dialogue_text_lines[2]);
        bn::core::update();
        dialogue_scene(text_generator, dialogue_text_lines[3]);
        bn::core::update();
        dialogue_scene(text_generator, dialogue_text_lines[4]);
        bn::core::update();
        dialogue_scene(text_generator, dialogue_text_lines[5]);
        bn::core::update(); */

        //eating_supper(); 
        //or maybe this could be several dialogue_scenes instead

        //them taking the bead purse could be a minigame where you can't walk too close to other people