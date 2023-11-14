#!/bin/bash
wget https://raw.githubusercontent.com/EJIMVINCENT/alx-low_level_programming/master/0x18-dynamic_libraries/libtemp.so
export LD_PRELOAD=$PWD/libtemp.so
