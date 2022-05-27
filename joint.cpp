#include "joint.hpp"

Joint::Joint(int Orientation, std::string Name)
{
	this->Orientation = Orientation;
	this->Name = Name;
	this->Pos = new Point3(0,0,0);
	this->Angle = 0.0;
}
Joint::Joint()
{
	this->Orientation = 0;
	this->Name = "Default Joint";
	this->Pos = new Point3(0,0,0);
	this->Angle = 0.0;
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
Point3 Joint::GetPos()
{
	return *this->Pos;
}

float Joint::GetAngle()
{
	return this->Angle;
}
int Joint::GetOrientation()
{
	return this->Orientation;
}

