#pragma once
namespace KIQ
{
    struct Vector4
    {
    public:
        float x;
        float y;
        float z;
        float w;

        Vector4()
        {
            this->x = 0;
            this->y = 0;
            this->z = 0;
            this->w = 0;
        }
        Vector4(float initial)
        {
            this->x = initial;
            this->y = initial;
            this->z = initial;
            this->w = initial;
        }
        Vector4(float x, float y, float z, float w)
        {
            this->x = x;
            this->y = y;
            this->z = z;
            this->w = w;
        }
    };
}