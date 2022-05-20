#include "ForwardKin.hpp"

ForwardKin::ForwardKin(int NumOfJoints)
{
    this->NumOfJoints = NumOfJoints;
    this->Joints[NumOfJoints];
    for(int i = 0; i < NumOfJoints; ++i)
    {
        this->Joints[i] = nullptr;
    }
    this->EndPosition = new Point3;
}
ForwardKin::~ForwardKin()  
{
    delete this->EndPosition;
    delete[] this->Joints;       
    delete this->Joints; 

}

void ForwardKin::SetJoint(int Orientation, std::string Name)
{
    int count = 0;
    for(int i = 0; i < this->NumOfJoints; ++i)
    {
        
        if(this->Joints[i] == nullptr)
        {
            this->Joints[i] = new Joint(Orientation, Name);
        }
        else 
        {
            count++;
        }
    }
    if(count == this->NumOfJoints)
    {
        std::cout << "ERROR: Maximum number of Joints already allocated\n";
    }

}

void ForwardKin::SetAngle(std::string Name, float Angle)
{
    for(int i = 0; i < this->NumOfJoints; ++i)
    {
        Joint* CurrentJoint = this->Joints[i];
        if(CurrentJoint->GetName() == Name)
        {
            CurrentJoint->Rotate(Angle);
        }
    }
}

float ForwardKin::GetAngle(std::string Name)
{
    for(int i = 0; i < this->NumOfJoints; ++i)
    {
        Joint* CurrentJoint = this->Joints[i];
        if(CurrentJoint->GetName() == Name)
        {
            return CurrentJoint->GetAngle();
        }    
    }
    return 1000; // ERROR CASE 

}

Point3* ForwardKin::GetEndPosition()
{


}

void ForwardKin::Display()
{


}