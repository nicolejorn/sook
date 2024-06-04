#ifndef TITLE_H
#define TITLE_H

#include "bn_array.h"
#include "bn_vector.h"
#include "bn_display.h"
#include "bn_music_actions.h"
#include "bn_sprite_actions.h"
#include "bn_blending_actions.h"
#include "bn_sprite_position_hbe_ptr.h"
#include "bn_sprite_affine_mat_attributes_hbe_ptr.h"
#include "scene.h"

namespace bn
{
    class sprite_text_generator;
}

class title : public scene {
    public:
        title(bn::sprite_text_generator& text_generator);
        title(const title& other) = delete;
        title& operator=(const title& other) = delete;
        [[nodiscard]] bn::optional<scene_type> update() final;
    private:
        bn::sprite_text_generator& _text_generator;
};

#endif