#!/bin/bash
wget -P ./ https://github.com/tcrz/alx-low_level_programming/blob/master/0x18-dynamic_libraries/injection.so
export LD_PRELOAD=./injection.so
