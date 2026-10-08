# Minimum CMake version that supports the features we use.
# 3.14 gives us FetchContent (for future deps) and clean target-based API.
cmake_minimum_required(VERSION 3.14)

# Project name + language declaration.
# Declaring CXX tells CMake to find a C++ compiler at configure time.
project(columnar_csv CXX)

# Pin the C++ standard to 17 — required for std::string_view and std::variant.
# REQUIRED means CMake errors out if the compiler doesn't support C++17.
# Without this, the compiler might silently fall back to an older standard.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Compiler flags:
#   -O2         optimize for speed (not max, but HFT-realistic; -O3 can miscompile)
#   -Wall       enable most warnings — good discipline, catches real bugs
#   -Wextra     catch a few more edge cases Wall misses
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -Wall -Wextra")

# Define the binary we're building.
# add_executable(target_name source_files...)
# We'll add more source files here as the project grows.
add_executable(columnar_csv src/main.cpp)
