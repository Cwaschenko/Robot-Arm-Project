#include "catch/catch.hpp"
#include "../arm.hpp"
#include "../matrix.hpp"
#include <iostream>

TEST_CASE("Arm consructor")
{
	Arm A("arm-types/3DOF.txt");
	A.Display();
	std::cout << "\n\n"	;
	A.GetJoint(2)->Display();
	A.GetJoint(1)->Display();
	A.GetJoint(0)->Display();


}

	

