#!/bin/bash
wget -O /tmp/libgiga.so  https://github.com/moemn10/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
