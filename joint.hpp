#ifndef JOINT_HPP
#define JOINT_HPP

#include "3DPoint/3dpoint.hpp"
#include <cmath>
#include <string>

class Joint
{
	private:
		std::string Name;
		int Orientation;
		Point3 Pos;
		float  Angle;

	public:
		Joint(int Orientation, std::string Name);
		void   Rotate(float Angle);
		void   SetPos(Point3 Pos);
		std::string GetName();
		Point3 GetPos();
		int GetOrientation();
		float  GetAngle();
		
};
#endif
