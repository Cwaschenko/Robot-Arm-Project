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
		float Width;
		ss >> BasePos >> EndPos >> Length >> Width;
		this->AddLink(BasePos, EndPos, Length, Width);

	}

	fs.close();

	// Positioning Each Actuator in correct spot
	Joint* CurrentJoint = nullptr;
	Point3 PreviousPoint;
	Link* CurrentLink = nullptr;
	for(int i = 0; i < this->NumOfJoints; ++i)
	{
		CurrentJoint = this->GetJoint(i);
		if(i == 0)
		{
			CurrentJoint->SetPos(Point3(0,0,CurrentJoint->GetHeight()));
		}
		else
		{
			CurrentLink = this->HasLink(CurrentJoint);
			if(CurrentLink != nullptr)
			{
				if(CurrentJoint->GetOrientation() == 0) // Vertical ^ 
				{                        
					PreviousPoint = this->GetJoint(i-1)->GetPos();               //          
					CurrentJoint->SetPos(PreviousPoint + Point3(0,0,CurrentJoint->GetHeight() + CurrentLink->GetLength())); //Height + Joint i-1 Position 
				}
				else	// Horizantal ->
				{
					PreviousPoint = this->GetJoint(i-1)->GetPos();
					CurrentJoint->SetPos(PreviousPoint + Point3(CurrentJoint->GetDistanceToCarrier() + CurrentLink->GetWidth()/2, 0, CurrentLink->GetLength()+CurrentJoint->GetWidth()/2));
				}
			}
			else
			{
				if(CurrentJoint->GetOrientation() == 0) // Vertical ^
				{
					PreviousPoint = this->GetJoint(i-1)->GetPos();                 
					CurrentJoint->SetPos(PreviousPoint + Point3(0,0,CurrentJoint->GetHeight()));
				}
				else // Horizantal ->
				{
					PreviousPoint = this->GetJoint(i-1)->GetPos();
					CurrentJoint->SetPos(PreviousPoint + Point3(CurrentJoint->GetDistanceToCarrier(),0,CurrentJoint->GetWidth()/2));
				}
			}
		}
	}

}

void Arm::AddJoint(std::string ACTUATOR_CONFIG)
{
	Joint* AddedJoint = new Joint(ACTUATOR_CONFIG);
	this->Joints.push_back(AddedJoint);
}

void Arm::AddLink(int BasePos, int EndPos, float Length, float Width)
{

	Link* AddedLink = new Link(this->Joints.at(this->Joints.size()-BasePos), this->Joints.at(this->Joints.size()-EndPos), Length, Width);
	this->Links.push_back(AddedLink);

}

Joint* Arm::GetJoint(int JointIndex)
{
	return this->Joints.at(JointIndex);
}
Link* Arm::GetLink(int LinkIndex)
{
	return this->Links.at(LinkIndex);
}

Point3 Arm::GetEndPosition()
{
	return this->EndPosition;
}


Link* Arm::HasLink(Joint* Quaried)
{
	Link* CurrentLink = nullptr;
	for(int i = 0; i < this->NumOfLinks; ++i)
	{
		CurrentLink = this->GetLink(i);
		if(Quaried == CurrentLink->GetBase())
		{
			return CurrentLink;
		}
	}
	return nullptr;
}

void Arm::Display()
{
	std::cout << this->Name << std::endl;
	for(auto j : this->Joints)
	{
		j->Display();
	}	
}