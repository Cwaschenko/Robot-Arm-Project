#include "arm.hpp"

Arm::Arm(std::string ARM_CONFIG)
{
	std::fstream fs;
	std::stringstream ss;
	std::string CurrentLine = "";

	fs.open(ARM_CONFIG);
	
	getline(fs, CurrentLine);
	CurrentLine.erase(CurrentLine.length()-1);
	this->Name = CurrentLine;

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
		ss.str(CurrentLine);
		int BasePos;
		int EndPos;
		float Length;

		ss >> BasePos >> EndPos >> Length;
		this->AddLink(BasePos, EndPos, Length);
	}

	fs.close();
}

void Arm::AddJoint(std::string ACTUATOR_CONFIG)
{
	Joint* AddedJoint = new Joint(ACTUATOR_CONFIG);
	this->Joints.push_back(AddedJoint);
}

void Arm::AddLink(int BasePos, int EndPos, float Length)
{

	Link* AddedLink = new Link(this->Joints.at(this->Joints.size()-BasePos), this->Joints.at(this->Joints.size()-EndPos), Length);
	this->Links.push_back(AddedLink);

}

Joint* Arm::GetJoint(int JointIndex)
{
	return this->Joints.at(JointIndex);
}


void Arm::Display()
{
	std::cout << this->Name << std::endl;
	for(auto j : this->Joints)
	{
		j->Display();
	}	
}