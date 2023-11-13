#!/bin/bash
gcc -shared -fPIC *.c -o liball.so
chmod u+x build_library.sh
