#include "joint.hpp"

Joint::Joint()
{
	this->Pos = Point3(0,0,0);
	this->Angle = 0.0;
}

void Joint::Rotate(float Angle)
{
	this->Angle =+ Angle;
}



void Joint::SetPos(Point3 Pos)
{
	this->Pos = Pos;
}

Point3 Joint::GetPos()
{
	return this->Pos;
}

float Joint::GetAngle()
{
	return this->Angle;
}

