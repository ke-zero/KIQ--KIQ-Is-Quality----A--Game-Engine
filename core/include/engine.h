#pragma once
#include <memory>

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

// memory
template <typename T, typename... Args>
auto alloc(Args &&...args)
{
    return std::make_shared<T>(std::forward<Args>(args)...);
}
