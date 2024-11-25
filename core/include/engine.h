#pragma once

namespace KIQ
{
    class Engine
    {
    public:
        bool IsOpened();
        void Init();
        void Update();
        void Shutdown();
    };
}
