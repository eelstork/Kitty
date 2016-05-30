#!/bin/sh

# Clean the build folder
rm -R build
mkdir build
cd build

# Configure and run CMake
cmake ..
cmake --build . --config Debug
