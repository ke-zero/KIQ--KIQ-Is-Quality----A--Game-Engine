#pragma once
#include "KIQ.h"

namespace KIQ
{
    class Window
    {
    public:
        ref<bool> fullscreen;
        ref<Vector2> size;
        ref<string> title;
    };
}