#include "pch.h"
#include "../CI-CD-PipelineBasic/Greetings.h"

// first test: does getGreeting returns the correct string
TEST(GreetingTests, ReturnsHelloWorld) {
    EXPECT_EQ(getGreeting(), "Hello World!\n");
}

// second test: is  getGreeting is not empty
TEST(GreetingTests, NotEmpty) {
    EXPECT_FALSE(getGreeting().empty());
}

// third test: getGreeting contains the word Hello
TEST(GreetingTests, ContainsHello) {
    EXPECT_NE(getGreeting().find("Hello"), std::string::npos);
}