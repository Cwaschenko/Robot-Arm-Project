#ifndef JOINT_HPP
#define JOINT_HPP

#include "3DPoint/3dpoint.hpp"
#include <cmath>
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

class Joint
{
	private:
		std::string Name;
		float Height;
		float Width;
		int DistanceToCarrier;
		int Orientation;
		int side;
		Point3* Pos;
		float  Angle;

	public:
		Joint();
		Joint(std::string AcuatorType);
		Joint(int Orientation, std::string Name);
		~Joint();
		void Display();
		void Rotate(float Angle);
		void SetPos(Point3 Pos);
		float GetHeight();
		float GetWidth();
		int GetDistanceToCarrier();
		std::string GetName();
		Point3 GetPos();
		int GetOrientation();
		int GetSide();
		float  GetAngle();
		
};
#endif
