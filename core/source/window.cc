#include "KIQ.h"

Window::Window()
{
    this->size = alloc<Vector2>(720, 480);
    this->title = alloc<string>("KIQ");
    this->fullscreen = alloc<bool>(false);
}
