#include "catch/catch.hpp"
#include <iostream>
#include "../joint.hpp"
#include "../3DPoint/3dpoint.hpp"

TEST_CASE("Testing Joint Configuration with Input File")
{
	Joint newJoint("actuator-types/base.txt");
	Point3* CurrentPos = new Point3;

	CHECK(newJoint.GetName() == "Base Acuator");
	CHECK(newJoint.GetAngle() == 0.0);
	CHECK(newJoint.GetHeight() == 110);
	CHECK(newJoint.GetWidth() == 120);
	CHECK(newJoint.GetOrientation() == 0);
	CHECK(*newJoint.GetPos() == *CurrentPos);
	
	std::cout << newJoint.GetName() << "\nAngle: " << newJoint.GetAngle() << "\n";
	
	std::cout << "Acuator Height: " << newJoint.GetHeight() << "\nAcuator Width: " << newJoint.GetWidth() << "\nOrientation:" << newJoint.GetOrientation() << "\n";

	std::cout << "Current Position: "<< *newJoint.GetPos() << "\n";
	delete CurrentPos;

}

TEST_CASE("Testing Rotate Function")
{
	Joint newJoint("actuator-types/base.txt");
	newJoint.Rotate(20.2);
	CHECK(newJoint.GetAngle() == 20.2f);
	newJoint.SetPos(Point3(60,0,110));
	CHECK(*newJoint.GetPos() == Point3(60,0,110));
	std::cout << "Angle: " << newJoint.GetAngle() << "\n";
	std::cout << "Current Position: " << *newJoint.GetPos() << "\n";

}

	

