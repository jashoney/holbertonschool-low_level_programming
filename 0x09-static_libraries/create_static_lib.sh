#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar -crs liball.a *.o
ranlib liball.a
