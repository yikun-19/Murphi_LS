#!/bin/bash


# update mu.o in src
cd ..
cd src
make clean  # rm -f mu.o is not enough, and clean command is defined in Makefile
make
cd ..
cd test


# run benchmarks by murphi_filename
# $2 ./benchmarks/murphi_protocols/$1.m  >  ./benchmarks/logs/phase1/$1.log 
# g++ -ggdb -o ./benchmarks/exec_files/$1.o ./benchmarks/murphi_protocols/$1.cpp -I $3 -lm -lz3  >  ./benchmarks/logs/phase2/$1.log 
# ./benchmarks/exec_files/$1.o -m 5000 -localsearch  >  ./benchmarks/logs/phase3_exec/$1.log 


# # run test file by murphi_filename
# $2 $1.m
# g++ -ggdb -o $1.o $1.cpp -I $3 -lm -lz3
# ./$1.o -m 1000 -vdfs > ./invs/result/$4.txt


# run test case
# ../src/mu ./TL_states/TL-C_v4.3.1.m
# g++ -ggdb -o ./TL_states/TL-C_v4.3.1.o ./TL_states/TL-C_v4.3.1.cpp -I ../include -lm -lz3 
# ./TL_states/TL-C_v4.3.1.o -vbfs -m5000 -p5
# ./TL_states/TL-C_v4.3.o -vbfs -m5000 -p5 > ./TL_states/result/$1.log  

# # ./TL_states/TL-C_v4.3.1.o -vbfs -m5000 -p5
# # ./test.o -vbfs -m5000 -p5 > ./TL_states/result/$1.log  
# # ../src/mu test.m
# g++ -ggdb -o test.o test.cpp -I ../include -lm
# g++ -ggdb -o test.o test.cpp -I ../include -lm -lz3
# ./test.o -localsearch -m20000 -p5 > ./TL_states/result0403/LS3/$1.log  
 
# ../../cmurphi5.5.0/src/mu test.m
# g++ -ggdb -o test.o test.cpp -I ../../cmurphi5.5.0/include -lm
# ./test.o -vdfs -m20000 -p5 > ./TL_states/result0329/DFS/$1.log  


# data property
# g++ -ggdb -o german_data.o german_data.cpp -I ../include -lm
# ./german_data.o -localsearch -m 5000 -tv

# ../src/mu test.m
# g++ -ggdb -o test.o test.cpp -I ../include -lm -lz3
# ./test.o -vbfs -m1000