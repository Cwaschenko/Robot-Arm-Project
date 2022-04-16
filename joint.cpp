#include "joint.hpp"

Joint::Joint()
{
	this->base = Point();
	this->SecondPoint = Point();
	this->length = 0;
	this->angle = 0;
}

Joint::Joint(Point base, int length, float angle)
{
	this->base = base;
	this->SecondPoint = this->FindSecPoint();
	this->length = length;
	this->angle = angle;
}

Point Joint::FindSecPoint()
{
	if(this->angle >0)
	{
	float m = tan(this->angle);
       	float r = sqrt(1 + pow(m,2));
	Point NewPoint;
	NewPoint.SetX(this->base.GetX() + (this->length/r) );
	NewPoint.SetY(this->base.GetY() + ( (this->length * m) / r) );
	}
	else
	{
	
	}
	return NewPoint;	
}
