#pragma once
#include "KIQ.h"

namespace KIQ
{
    class Engine
    {
    public:
        ref<bool> isOpened;
        ref<Window> window;
        ref<Timer> timer;

        Engine();
        void Init();
        void Update();
        void Shutdown();
    };
}
