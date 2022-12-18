# Murphi_LS

Commands to use Murphi_LS:

1. Install dependencies & make:
  '''
  sudo make install
  sudo apt-get install flex 
  sudo apt-get install byacc
  
  cd src/
  make clean
  make
  '''

2. Run Murphi_LS to verify testcase_name.m located in test/  
  '''
  cd test/
  bash run.sh testcase_name
  '''
  
  Or if you want to set other options with Murphi_LS(e.g., -localsearch/-vbfs/vdfs), you can run these commands:
  '''
  ../src/mu testcase_name.m    # parser Murphi file to Cpp file
  g++ -ggdb -o testcase_name.o testcase_name.cpp -I ../include -lm  # compiler Cpp file to execute file(.o)
  ./testcase_name.o -localsearch -m 5000  # you can change options to what you what, run "./testcase_name.o -h" to show what options are supported in Murphi_LS
  '''
