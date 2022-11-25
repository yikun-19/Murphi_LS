#!/bin/bash


# # update mu.o in src
# cd ..
# cd src
# make clean  # rm -f mu.o is not enough, and clean command is defined in Makefile
# make
# cd ..
# cd test


# run benchmarks by murphi_filename
$2 ./benchmarks/murphi_protocols/$1.m  >  ./benchmarks/logs/phase1/$1.log 
g++ -ggdb -o ./benchmarks/exec_files/$1.o ./benchmarks/murphi_protocols/$1.cpp -I $3 -lm -lz3  >  ./benchmarks/logs/phase2/$1.log 
./benchmarks/exec_files/$1.o -m 5000 -localsearch  >  ./benchmarks/logs/phase3_exec/$1.log 


# # run test file by murphi_filename
# $2 $1.m
# g++ -ggdb -o $1.o $1.cpp -I $3 -lm -lz3
# ./$1.o -m 1000 -vbfs


# # run test case
# ../src/mu test.m
# g++ -ggdb -o test.o test.cpp -I ../include -lm
# ./test.o -localsearch -m 5000


# data property
# g++ -ggdb -o german_data.o german_data.cpp -I ../include -lm
# ./german_data.o -localsearch -m 5000 -tv