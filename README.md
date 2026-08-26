# MathUtils & C++ CI/CD Pipeline
A basic C++ project where I replaced a standard "Hello World" template with a custom MathUtils library and set up an automated CI/CD pipeline using GitHub Actions. I wanted to learn how unit testing and automated builds actually work in game development, so I wrote some essential engine math functions and hooked them up to GoogleTest.

![Build Status](https://github.com/johnnygamedev/CI-CD-PipelineBasic/actions/workflows/buildAndTest.yml/badge.svg)



# Key Features
Header-Only Math Library: Put everything inside MathUtils.h using inline functions so it's super easy to include across different files without getting linker errors.

Game Dev Functions: Built clamp (keeping values like health in range), lerp (smooth camera/movement transitions), and a Vector2 struct with add, subtract, dot, and length methods.

Automated GitHub Actions: Set up a workflow file that automatically builds the project using MSBuild whenever I push changes or open a pull request.

GoogleTest Suite: Wrote unit tests in test.cpp using EXPECT_EQ and EXPECT_NEAR to make sure all the vector math and floating-point math give accurate results.

Quick Main Test: Modified main.cpp to run a few quick calculations so I can manually check that everything prints out right.

# Tech Used
Language: C++

Testing: GoogleTest

Build System: Visual Studio / MSBuild

CI/CD: GitHub Actions

# How It Works
Pushing Code: Every time I push to the main branch, GitHub Actions spins up a Windows environment and runs NuGet restore.

Running Tests: The pipeline compiles the solution in Release mode, finds the test executable, runs all the GoogleTest assertions, and passes or fails the build automatically.
