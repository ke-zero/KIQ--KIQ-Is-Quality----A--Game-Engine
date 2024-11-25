#pragma once
namespace KIQ
{
    struct Vector3
    {
    public:
        float x;
        float y;
        float z;

        Vector3()
        {
            this->x = 0;
            this->y = 0;
            this->z = 0;
        }
        Vector3(float initial)
        {
            this->x = initial;
            this->y = initial;
            this->z = initial;
        }
        Vector3(float x, float y, float z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }
    };
}