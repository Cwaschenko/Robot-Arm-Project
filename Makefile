
CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -Werror=return-type -Werror=uninitialized -no-pie

test-1: tests/test-1.o  tests/catch/catch.o joint.o 3DPoint/3dpoint.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@

test-3: tests/test-3-Matrix.cpp matrix.o tests/catch/catch.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@

test-4: tests/test-4-arm.cpp matrix.o arm.o 3DPoint/3dpoint.o joint.o tests/catch/catch.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	./$@
clean:
	rm -rf *.dSYM test/*.dSYM
	$(RM) *.o *.gc* test/*.o test-1 test-2 test-3	
