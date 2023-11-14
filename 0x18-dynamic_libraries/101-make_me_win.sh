#!/bin/bash
wget -P /tmp  https://github.com/EJIMVINCENT/alx-low_level_programming/blob/main/0x18-dynamic_libraries/temp.so
export LD_PRELOAD=/tmp/libtemp.so
