#ifndef MATHUTILS_H
#define MATHUTILS_H

#include <cmath>

namespace MathUtils {

    // keeps a number within a range
    template <typename T>
    inline T clamp(T val, T min, T max) {
        if (val < min) return min;
        if (val > max) return max;
        return val;
    }

    // linear interpolation between two values
    inline float lerp(float a, float b, float t) {
        return a + t * (b - a);
    }

    // x, y position with vector math operations
    struct Vector2 {
        float x{ 0.0f };
        float y{ 0.0f };

        Vector2() = default;
        Vector2(float x, float y) : x(x), y(y) {}

        // adds two vectors
        Vector2 add(const Vector2& other) const {
            return Vector2(x + other.x, y + other.y);
        }

        // subtracts two vectors
        Vector2 subtract(const Vector2& other) const {
            return Vector2(x - other.x, y - other.y);
        }

        // dot product
        float dot(const Vector2& other) const {
            return x * other.x + y * other.y;
        }

        // magnitude of the vector
        float length() const {
            return std::sqrt(x * x + y * y);
        }
    };

} // namespace MathUtils

#endif // MATHUTILS_H