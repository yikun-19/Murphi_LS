
# Murphi_LS


## Overview

Murphi_LS is a model checker designed to find counterexample states using local search strategy to alleviate the state space explosion. 
Our development work is based on Murphi, which is a popular explicit model checker. 
Heuristic functions, local search algorithm and some auxiliary modules have been realized in this tool. 
Murphi_LS is more likely to search for counterexample states that are difficult to find by other methods at the same cost(e.g., time, memory).


## Requirement & Start

Please first check if your environment meets the following requirement: 
1. Operating systems: Linux or MacOS
2. g++ 9.4.0 
3. Python 3.8.10

Now let's install Murphi_LS and its dependencies:
```
  sudo make install 
  sudo apt-get install flex 
  sudo apt-get install byacc
  
  # in folder Murphi_LS
  cd src/  
  make clean
  make
```


## How to run Murphi_LS

1. Run Murphi_LS to verify <testcase_name>.m by using automation script:  
```
  bash run.sh <testcase_name>
```

2. Or if you want to set options with Murphi_LS as you wish(e.g., -localsearch/-vbfs/vdfs), you can run these commands:
```
  ../src/mu <testcase_name>.m    # parser Murphi file to Cpp file
  g++ -ggdb -o <testcase_name>.o <testcase_name>.cpp -I ../include -lm  # compiler Cpp file to execute file(.o)
  ./<testcase_name>.o -localsearch -m 5000  # Run execute file with 5000MB memory limitation and local search algorithm
```
You can change options to what you want when running execute file. 
Run "./<testcase_name>.o -h" to show what options are supported in Murphi_LS. 


## Program workflow

![avatar](/workflow.png)

## Files organization

```
Murphi_LS
│   README.md
└─── include
│   │   mu_epilog.hpp
│   │   mu_prolog.hpp
│   │   
│   └─── murphi.original
│   │   │   mu_verifier.cpp
│   │   │   mu_io.cpp
│   │   │   mu_system.cpp
│   │   │   mu_state.cpp
│   │   │   ...
│   │   
│   └─── murphi.trace_dfs
│   │   
│   └─── ...
│ 
└─── src
│   │   cpp_code.cpp
│   │   expr.cpp
│   │   mu.cpp
│   │   ...
│   │  
└─── test
│   │   run.sh
│   │   main.py
│   └─── protocols
│   │   │   german.m
│   │   │   flash.m
│   │   │   godsont.m
│   │   │   ...
```



## Experiments

### Comparison of different heuristic functions


### BFS, DFS, BeFs and LS for typical target states


### Numerous invariants check



