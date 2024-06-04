#ifndef SCENE_H
#define SCENE_H

#include "bn_optional.h"

enum class scene_type;

class scene
{

public:
    virtual ~scene() = default;

    [[nodiscard]] virtual bn::optional<scene_type> update() = 0;

protected:
    scene() = default;
};

#endif
