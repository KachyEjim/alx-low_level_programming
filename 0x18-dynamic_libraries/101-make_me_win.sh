#!/bin/bash
wget -P /tmp https://raw.githubusercontent.com/EJIMVINCENT/alx-low_level_programming/main/0x18-dynamic_libraries/temp.so
export LD_PRELOAD=/tmp/temp.so
