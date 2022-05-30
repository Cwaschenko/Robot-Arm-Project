#include "arm.hpp"

Arm::Arm(std::string ARM_CONFIG)
{
	std::fstream fs;
	std::stringstream ss;
	std::string CurrentLine = "";

	fs.open(ARM_CONFIG);
	
	getline(fs, CurrentLine);
	ss.str(CurrentLine);
	ss >> this->NumOfJoints;

	for(int i = 0; i < this->NumOfJoints; ++i)
	{
		getline(fs, CurrentLine);
		CurrentLine.erase(CurrentLine.length()-1);
		this->AddJoint(CurrentLine);
	}
	getline(fs, CurrentLine);
	ss.str(CurrentLine);
	ss >> this->NumOfLinks;
	for(int i = 0; i < this->NumOfLinks; ++i)
	{
		getline(fs, CurrentLine);
		CurrentLine.erase(CurrentLine.length()-1);
		this->AddJoint(CurrentLine);
	}
	fs.close();
}

void Arm::AddJoint(std::string ACTUATOR_CONFIG)
{
	Joint* AddedJoint = new Joint(ACTUATOR_CONFIG);
	this->Joints.push_back(AddedJoint);
}