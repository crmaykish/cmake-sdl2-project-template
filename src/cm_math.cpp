#include <math.h>
#include "cm_math.h"

namespace cm
{
    Vector2D::Vector2D(float x, float y) : X(x), Y(y) {}

    float Vector2D::Mag()
    {
        return std::sqrt(std::pow(X, 2) + std::pow(Y, 2));
    }

    float Vector2D::Angle()
    {
        float angle = 0.0;

        if (X >= 0.0 && Y >= 0.0)
        {
            angle = std::atan(Y / X);
        }
        else if (X >= 0.0 && Y < 0.0)
        {
            angle = std::atan(Y / X) + (360.0 * TO_RADS);
        }
        else
        {
            angle = std::atan(Y / X) + (180.0 * TO_RADS);
        }

        // Normalize angle
        if (angle > Pi)
        {
            angle -= (2 * Pi);
        }

        return angle;
    }

} // namespace cm
