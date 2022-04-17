#include "joint.hpp"

Joint::Joint()
{
	this->Pos = new Point3(0,0,0);
	this->Angle = 0.0;
}

void Joint::SetAngle(float Angle)
{
	this->Angle = Angle;
}

void Joint::SetPos(Point3 Pos)
{
	this->Pos = Pos;
}


