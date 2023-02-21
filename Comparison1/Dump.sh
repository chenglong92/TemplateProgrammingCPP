#!/bin/bash

FileName=FactorialFunction

rm -rf *.o *.exe

g++ -g -c $FileName.cpp

objdump -d -M intel -S $FileName.o
