#include "catch/catch.hpp"
#include "arm.hpp"
#include "matrix.hpp"

TEST_CASE("Arm consructor")
{
	
	Arm NewArm(3, 2); //number of joints, and constant length of joint
	NewArm.Display(); // display all joints relative to joint 0
	NewArm.Display(1); // display joint angle and relative to parent 
	NewArm.Display(0); // display joint angle only
	NewArm.Rotate(0, 90);
	NewArm.Display(); 
	
}

	

