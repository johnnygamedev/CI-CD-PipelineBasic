// CI-CD-PipelineBasic.cpp : Main entry point for the application.
#include <iostream>
#include "MathUtils.h"

int main()
{
    // test clamp function
    float health = 120.0f;
    float currentHealth = MathUtils::clamp(health, 0.0f, 100.0f);
    std::cout << "Clamped Health: " << currentHealth << "\n";

    // test lerp function
    float startPos = 0.0f;
    float endPos = 100.0f;
    float interpolatedPos = MathUtils::lerp(startPos, endPos, 0.5f);
    std::cout << "Lerp Position (t=0.5): " << interpolatedPos << "\n";

    // test vector2 operations
    MathUtils::Vector2 playerPos(3.0f, 4.0f);
    MathUtils::Vector2 moveDir(1.0f, 2.0f);
    MathUtils::Vector2 newPos = playerPos.add(moveDir);

    std::cout << "New Vector Position: (" << newPos.x << ", " << newPos.y << ")\n";
    std::cout << "Player Distance from Origin: " << playerPos.length() << "\n";

    return 0;
}
