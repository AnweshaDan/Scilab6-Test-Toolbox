#!/bin/sh
rm *.o test
gcc -c trans.c
gcc -c main.c
gcc -o test trans.o main.o
./test