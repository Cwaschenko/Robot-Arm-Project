
CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -Werror=return-type -Werror=uninitialized

test-1: tests/test-1.o appendage.o tests/catch/catch.o joint.o 3DPoint/3dpoint.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@
