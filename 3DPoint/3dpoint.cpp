#include "3dpoint.hpp"

Point3::Point3(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Point3::Point3()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;

}
std::ostream& operator<<(std::ostream& out, const Point3& point)
{
	out << "X: " << point.GetX() << " Y: " << point.GetY() << " Z: " << point.GetZ() << std::endl;

	return out;
}

bool Point3::operator==(const Point3& other) const
{
	if(this->GetX() == other.GetX() && this->GetY() == other.GetY() && this->GetZ() == other.GetZ())
	{
		return true;
	}
	else
	{
		return false;
	}
}

Point3 Point3::operator =(const Point3& EqualTo)
{

	this->x = EqualTo.GetX();
	this->y = EqualTo.GetY();
	this->z = EqualTo.GetZ();
	return *this;
}

Point3 Point3::operator+(const Point3& Added)
{
	
	this->x += Added.GetX();
	this->y += Added.GetY();
	this->z += Added.GetZ();

	return *this;
}

Point3 Point3::operator -(const Point3& Subtracted)
{
	
	this->x -= Subtracted.GetX();
	this->y -= Subtracted.GetY();
	this->z -= Subtracted.GetZ();

	return *this;
}


float Point3::GetX() const
{
	return this->x;
}

float Point3::GetY() const
{
	return this->y;
}

float Point3::GetZ() const
{
	return this->z;
}

void Point3::SetX(float x)
{
	this->x = x;
}

void Point3::SetY(float y)
{
	this->y = y;
}

void Point3::SetZ(float z)
{
	this->z = z;
}


