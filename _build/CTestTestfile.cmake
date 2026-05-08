# CMake generated Testfile for 
# Source directory: /home/vboxuser/qNetayS/lab07
# Build directory: /home/vboxuser/qNetayS/lab07/_build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(check "/home/vboxuser/qNetayS/lab07/_build/check")
set_tests_properties(check PROPERTIES  _BACKTRACE_TRIPLES "/home/vboxuser/qNetayS/lab07/CMakeLists.txt;25;add_test;/home/vboxuser/qNetayS/lab07/CMakeLists.txt;0;")
subdirs("banking")
subdirs("third-party/gtest")
