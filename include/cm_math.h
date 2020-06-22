#ifndef CM_MATH_H
#define CM_MATH_H

namespace cm
{
    static const float Pi = 3.141592;
    static const float TO_RADS = Pi / 180.0;
    static const float TO_DEGS = 180.0 / Pi;

    struct Rectangle
    {
        float x, y, w, h;
    };

    class Vector2D
    {
    public:
        float X, Y;

        Vector2D(float x, float y);

        float Mag();
        float Angle();
    };
} // namespace cm

#endif // CM_MATH_H
