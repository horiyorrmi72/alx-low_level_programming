#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rc libholberton.a *.o
ar rc liball.a *.o
