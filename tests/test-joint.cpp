#include "catch/catch.hpp"
#include <iostream>
#include "../joint.hpp"
#include "../3DPoint/3dpoint.hpp"

TEST_CASE("Testing Joint Configuration with Input File")
{
	Joint newJoint("../Actuator-Types/base.acu");
	Point3* CurrentPos = new Point3;

	CHECK(newJoint.GetName() == "Base Acuator");
	CHECK(newJoint.GetAngle() == 0.0);
	CHECK(newJoint.GetHeight() == 110);
	CHECK(newJoint.GetWidth() == 120);
	CHECK(newJoint.GetPos() == CurrentPos);
	
	std::cout << newJoint.GetName() << "\nAngle: " << newJoint.GetAngle() << "\n";
	
	std::cout << "Acuator Height: " << newJoint.GetHeight() << "\nAcuator Width: " << newJoint.GetWidth() << "\n";

	std::cout << "Current Position: "<< *newJoint.GetPos() << "\n";
	delete CurrentPos;

}

TEST_CASE("Testing Rotate Function")
{
	Joint newJoint("../Acuator-Types/base.acu");
	newJoint.Rotate(20.2);
	CHECK(newJoint.GetAngle() == 20.2);
	std::cout << newJoint.GetName() << "\nAngle: " << newJoint.GetAngle() << "\n";

}

	

