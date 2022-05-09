#include "arm.hpp"

Arm::Arm(int NumOfJoints, float C_Length, Joint* Joints)
{
	this->NumOfJoints = NumOfJoints;
	this->C_Length = C_Length;
	this->Joints = Joints;
}



