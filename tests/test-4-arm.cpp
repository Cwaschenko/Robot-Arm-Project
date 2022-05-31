#include "catch/catch.hpp"
#include "../arm.hpp"
#include "../matrix.hpp"
#include <iostream>

TEST_CASE("Arm consructor")
{
	Arm A("arm-types/3DOF.txt");
	A.Display();

	CHECK(A.GetJoint(0)->GetPos() == Point3(0,0,110) );

	CHECK(A.GetJoint(1)->GetPos() == Point3(90,0,170) );

	CHECK(A.GetJoint(2)->GetPos() == Point3(-20,0,340) );

	CHECK(A.GetEndPosition() == Point3(-10,0,380));



}

	

