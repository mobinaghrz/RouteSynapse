cmake_minimum_required(VERSION 3.12)
project(RouteSynapse)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executable
add_executable(RouteSynapse src/main.cpp
    src/Graph/Graph.cpp
    src/Data/DataLoader.cpp
    src/Algorithms/Dijkstra.cpp
    src/Models/Station.cpp
    src/Models/Route.cpp
    src/UI/CLI.cpp)

# Include directories
target_include_directories(RouteSynapse PRIVATE src)

# C++17 features
target_compile_features(RouteSynapse PRIVATE cxx_std_17)
