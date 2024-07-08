#include "so_scene_shop.h"

#include "bn_core.h"
#include "bn_log.h"
#include "bn_keypad.h"
#include "bn_string.h"
#include "bn_fixed_point.h"
#include "bn_sprite_ptr.h"
#include "bn_camera_ptr.h"
#include "bn_regular_bg_ptr.h"
#include "bn_affine_bg_ptr.h"
#include "bn_affine_bg_map_ptr.h"
#include "bn_optional.h"
#include "bn_span.h"
#include "bn_affine_bg_map_cell.h"
#include "bn_display.h"
#include "bn_sprite_font.h"
#include "bn_rect_window.h"
#include "bn_camera_actions.h"

#include "so_player.h"
#include "so_scene_type.h"
#include "so_npc.h"
#include "so_npc_type.h"
/* #include "bn_affine_bg_big_map_canvas_size.h"
#include "bn_affine_bg_pa_register_hbe_ptr.h"
#include "bn_affine_bg_pd_register_hbe_ptr.h"
#include "bn_affine_bg_dx_register_hbe_ptr.h"
#include "bn_affine_bg_dy_register_hbe_ptr.h" */

namespace so
{
    Shop::Shop(Player& player)
        : _player(&player) {}

    Scene Shop::execute() //bn::fixed_point spawn_location
    {
        //Scrolling map based on cameras from examples
        bn::regular_bg_ptr haha_house_bg = bn::regular_bg_items::haha_house.create_bg(0, 0);

        bn::camera_ptr camera = bn::camera_ptr::create(0, 0);
        haha_house_bg.set_camera(camera);
    }
}