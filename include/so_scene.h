#ifndef SO_SCENE_H
#define SO_SCENE_H

#include "bn_optional.h"

class Butano
{       
    public:
        Scene execute();
};

/*enum class scene_type;

class scene
{

public:
    virtual ~scene() = default;

    [[nodiscard]] virtual bn::optional<scene_type> update() = 0;

protected:
    scene() = default;
};*/

#endif
