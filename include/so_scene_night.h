#ifndef SO_SCENE_NIGHT_H
#define SO_SCENE_NIGHT_H

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

#include "so_scene_butano.h"
#include "so_scene_type.h"

namespace so
{
    class Night
    {       
        public:
            //Night(); //Player& player
            Scene execute(); //bn::fixed_point spawn
    };
}

#endif