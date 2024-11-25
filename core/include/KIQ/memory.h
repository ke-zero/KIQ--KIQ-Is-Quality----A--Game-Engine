#pragma once
#include <memory>

// ref is std::shared_ptr<T>
template <typename T>
using ref = std::shared_ptr<T>;

// alloc<T> is std::make_shared<T>
template <typename T, typename... Args>
auto alloc(Args &&...args)
{
    return std::make_shared<T>(std::forward<Args>(args)...);
}