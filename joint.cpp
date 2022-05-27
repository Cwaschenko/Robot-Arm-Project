#include "joint.hpp"

Joint::Joint(std::string AcuatorType)
{
		std::fstream fs;
		std::string CurrentLine = "";
		float CurrentNumber;
		fs.open(AcuatorType);
		getline(fs, CurrentLine);
		this->Name = CurrentLine;
		fs >> CurrentNumber;
		this->Height = CurrentNumber;
		fs >> CurrentNumber;
		this->Width = CurrentNumber;
		fs >> CurrentNumber;
		this->Orientation = CurrentNumber;
		fs >> CurrentLine;
		if(CurrentLine == "None")
		{
			this->Connection = nullptr;
		}
		else
		{
			fs >> CurrentNumber;
			this->Connection = new Link(this, CurrentLine, CurrentNumber);
		}
		fs.close();
		this->Angle = 0.0;
		// *** TODO *** position initialization
		

}

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

