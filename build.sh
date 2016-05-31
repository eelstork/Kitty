#!/bin/sh
if [ $# -eq 0 ]; then
  echo "Build with Jenkins"
elif [ "$1" = "local" ]; then
  echo "Build locally"
  rm -R build
else
  echo "Invalid argument '$1'; script will exit."
  exit 1
fi

mkdir build
cd build
cmake ..
cmake --build . --config Debug

./Kitty
