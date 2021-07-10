#!/bin/bash
gcc -c *.c
ar -rc libholberton.a *.o
ar rc liball.a *.o
