#pragma once

namespace KIQ
{
    struct Vector2
    {
    public:
        float x;
        float y;

        Vector2()
        {
            this->x = 0;
            this->y = 0;
        }
        Vector2(float initial)
        {
            this->x = initial;
            this->y = initial;
        }
        Vector2(float x, float y)
        {
            this->x = x;
            this->y = y;
        }
    };
}