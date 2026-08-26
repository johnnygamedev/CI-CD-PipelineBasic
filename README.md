# C++ / CI-CD Pipeline & MathUtils Library
A custom C++ unit testing pipeline built to demonstrate automated CI/CD practices in game engine development. Instead of using generic "Hello World" templates, I built a lightweight MathUtils header-only library containing fundamental game dev operations (clamping, linear interpolation, and 2D vector math) fully integrated with GoogleTest and automated GitHub Actions workflows.

![Build Status](https://github.com/johnnygamedev/CI-CD-PipelineBasic/actions/workflows/buildAndTest.yml/badge.svg)



# Key Features
Header-Only Design: Built MathUtils.h as a header-only utility to streamline translation units, avoiding linking overhead across main execution and test runners.

Game Dev Math Suite: Implemented standard utility functions including clamp (bounding values like health/UI), lerp (camera/color interpolation), and a full Vector2 struct (addition, subtraction, length, dot product).

Automated CI/CD Pipeline: Configured a custom GitHub Actions workflow (buildAndTest.yml) that triggers on every push or pull request to compile the project via MSBuild and execute the unit test binary automatically.

GoogleTest Integration: Structured isolated test suites to validate numeric bounds, floating-point precision tolerances (EXPECT_NEAR), and vector algebra operations.

Direct Execution Verification: Main application entry point verifies runtime operations, providing immediate feedback alongside pipeline assertions.

# Tech Used
Language: C++ (C++17)

Build System: MSBuild, Visual Studio Solution (.sln)

Testing Framework: GoogleTest (gtest)

CI/CD: GitHub Actions

# Pipeline & Usage Flow
Automated Builds: Pushing to main triggers MSBuild to restore packages and compile the Release configuration on a windows-latest runner.

Test Discovery: PowerShell runner scans output paths, isolates test binaries, executes all assertions, and returns exit codes to enforce build health.
