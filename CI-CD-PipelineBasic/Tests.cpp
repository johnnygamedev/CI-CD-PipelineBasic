#include <iostream>
#include <string>
#include "../CI-CD-PipelineBasic/Greetings.h"

int failures = 0;

void expectEqual(const std::string& actual, const std::string& expected, const std::string& testName)
{
    if (actual == expected)
    {
        std::cout << "[PASS] " << testName << "\n";
    }
    else
    {
        std::cout << "[FAIL] " << testName
            << " - expected \"" << expected
            << "\" but got \"" << actual << "\"\n";
        failures++;
    }
}

int greetingsDisplay()
{
    expectEqual(getGreeting(), "Hello World!\n", "getGreeting returns Hello World");

    if (failures == 0)
    {
        std::cout << "\nAll tests passed.\n";
        return 0;
    }
    else
    {
        std::cout << "\n" << failures << " test(s) failed.\n";
        return 1;
    }
}
