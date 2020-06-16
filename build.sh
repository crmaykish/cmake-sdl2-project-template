#!/bin/sh

TARGET="linux"

if [ ! -z $1 ]; then
    TARGET=$1
fi

echo "Building for" $TARGET

rm -rf build
mkdir -p build
cd build

if [ $TARGET = "linux" ]; then
    echo "LINUX"
    cmake ../
elif [ $TARGET = "windows" ]; then
    echo "WINDOWS"
    cmake ../ -DCMAKE_TOOLCHAIN_FILE=cmake/windows.cmake
fi

make -j$(nproc)
