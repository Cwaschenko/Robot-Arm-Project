#ifndef FORWARD_KIN_HPP
#define FORWARD_KIN_HPP

#include "matrix.hpp"
#include "joint.hpp"
#include <string>
#include <iostream>

class ForwardKin
{
    private:
        Point3* EndPosition;
        int NumOfJoints;
        Joint* Joints[];

    public:
        ForwardKin(int NumOfJoints);
        ~ForwardKin();
        void SetJoint(int Orientation, std::string Name);
        void SetAngle(std::string Name, float Angle);
        float GetAngle(std::string Name);
        Point3* GetEndPosition(); //solves the foward Kinematics 
        void Display();

};

#endif