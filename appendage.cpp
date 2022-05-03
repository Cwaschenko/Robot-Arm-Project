#include "appendage.hpp"

Appendage::Appendage(Joint* J1, Joint* J2, float Length)
{
	
	this->J1 = J1;
	this->J2 = J2;
	Point3 J2Pos = J1->GetPos() + Point3(this->Length,0,0,); 
	this->Length = Length;

}

float Appendage::GetLength()
{
	return this->Length;
}

Joint* Appendage::GetJ1()
{
	return this->J1;
}

Joint* Appendage::GetJ2()
{
	return this->J2;
}
