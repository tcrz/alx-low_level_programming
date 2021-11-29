#!/bin/bash
gcc -c -fpic *.c && gcc *.o -shared -o liball.so
