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

#include "so_player.h"
#include "so_scene_type.h"
#include "so_npc.h"
#include "so_npc_type.h"

namespace so
{
    Shop::Shop(Player& player)
        : _player(&player) {}

    Scene Shop::execute() //bn::fixed_point spawn_location
    {}
}