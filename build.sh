#!/bin/sh

# Convenience script to build and run.
# NOTE - not used by the Jenkins build worker.

rm -R build
mkdir build
cd build
cmake ..
cmake --build . --config Debug

./Kitty
