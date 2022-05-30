#include "joint.hpp"

Joint::Joint(std::string AcuatorType)
{
		std::ifstream fs;
		std::stringstream ss;
		std::string CurrentLine = "";
		std::string additional = "";
		float CurrentNumber;

		fs.open(AcuatorType);
		getline(fs, CurrentLine);
		CurrentLine.erase(CurrentLine.length()-1);
		this->Name = CurrentLine;
		getline(fs, CurrentLine);
		ss.str(CurrentLine);
		ss >> this->Height >> this->Width;
		getline(fs, CurrentLine);
		ss.str(CurrentLine);
		ss >> this->Orientation;
		fs.close();
		
		this->Angle = 0.0;
		this->Pos = new Point3(0,0,0);
}

Joint::Joint(int Orientation, std::string Name)
{
	this->Orientation = Orientation;
	this->Height = 0;
	this->Width = 0;
	this->Name = Name;
	this->Pos = new Point3(0,0,0);
	this->Angle = 0.0;
}
Joint::Joint()
{
	this->Orientation = 0;
	this->Name = "Default Joint";
	this->Pos = new Point3(0,0,0);
	this->Height = 0;
	this->Width = 0;
	this->Angle = 0.0;
}

Joint::~Joint()
{
	delete this->Pos;
}

void Joint::Display()
{
	std::cout << this->Name << "\tAngle: " << this->Angle << " Current Position: " << *this->Pos  << " Orientation: " << this-> Orientation << std::endl;
}

void Joint::Rotate(float Angle)
{
	this->Angle =+ Angle;
}

void Joint::SetPos(Point3 Pos)
{
	*this->Pos = Pos;
}
std::string Joint::GetName()
{
	return this->Name;
}
Point3* Joint::GetPos()
{
	return this->Pos;
}

float Joint::GetAngle()
{
	return this->Angle;
}
int Joint::GetOrientation()
{
	return this->Orientation;
}

float Joint::GetHeight()
{
	return this->Height;
}		
		
float Joint::GetWidth()
{
	return this->Width;
}
