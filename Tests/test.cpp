#include "pch.h"
#include "../CI-CD-PipelineBasic/MathUtils.h"

// first test: clamp bounds value correctly
TEST(MathUtilsTests, ClampValues) {
    EXPECT_EQ(MathUtils::clamp(5, 0, 10), 5);
    EXPECT_EQ(MathUtils::clamp(-5, 0, 10), 0);
    EXPECT_EQ(MathUtils::clamp(15, 0, 10), 10);
}

// second test: lerp interpolates correctly
TEST(MathUtilsTests, LerpValues) {
    EXPECT_NEAR(MathUtils::lerp(0.0f, 10.0f, 0.5f), 5.0f, 0.001f);
    EXPECT_NEAR(MathUtils::lerp(0.0f, 10.0f, 0.0f), 0.0f, 0.001f);
    EXPECT_NEAR(MathUtils::lerp(0.0f, 10.0f, 1.0f), 10.0f, 0.001f);
}

// third test: vector add sums x and y components
TEST(MathUtilsTests, VectorAdd) {
    MathUtils::Vector2 v1(3.0f, 4.0f);
    MathUtils::Vector2 v2(1.0f, 2.0f);
    MathUtils::Vector2 res = v1.add(v2);
    EXPECT_NEAR(res.x, 4.0f, 0.001f);
    EXPECT_NEAR(res.y, 6.0f, 0.001f);
}

// fourth test: vector subtract calculates difference correctly
TEST(MathUtilsTests, VectorSubtract) {
    MathUtils::Vector2 v1(3.0f, 4.0f);
    MathUtils::Vector2 v2(1.0f, 2.0f);
    MathUtils::Vector2 res = v1.subtract(v2);
    EXPECT_NEAR(res.x, 2.0f, 0.001f);
    EXPECT_NEAR(res.y, 2.0f, 0.001f);
}

// fifth test: vector dot product calculates scalar result
TEST(MathUtilsTests, VectorDot) {
    MathUtils::Vector2 v1(3.0f, 4.0f);
    MathUtils::Vector2 v2(1.0f, 2.0f);
    EXPECT_NEAR(v1.dot(v2), 11.0f, 0.001f);
}

// sixth test: vector length calculates magnitude correctly
TEST(MathUtilsTests, VectorLength) {
    MathUtils::Vector2 v(3.0f, 4.0f);
    EXPECT_NEAR(v.length(), 5.0f, 0.001f);
}
