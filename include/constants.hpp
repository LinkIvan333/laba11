// Copyright 2020 <LinkIvan333>
#include <string>
#pragma once
const char command_1[] = "cmake -H. -B_build "
    "-DCMAKE_INSTALL_PREFIX=_install -DCMAKE_BUILD_TYPE=";
const char command_2[] = "cmake --build _build";
const char command_3[] = "cmake --build _build --target install";
const char command_4[] = "cmake --build _build --target package";
