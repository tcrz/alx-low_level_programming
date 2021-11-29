#!/bin/bash
gcc *.c -c -fPIC
gcc -shared *.o -o liball.so
