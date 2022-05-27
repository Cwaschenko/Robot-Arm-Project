#ifndef JOINT_HPP
#define JOINT_HPP

#include "3DPoint/3dpoint.hpp"
#include "link.hpp"
#include <cmath>
#include <fstream>
#include <string>

class Joint
{
	private:
		std::string Name;
		float Height;
		float Width;
		int Orientation;
		Point3* Pos;
		float  Angle;

	public:
		Joint();
		Joint(std::string AcuatorType);
		Joint(int Orientation, std::string Name);
		~Joint();
		void   Rotate(float Angle);
		void   SetPos(Point3 Pos);
		std::string GetName();
		Point3 GetPos();
		int GetOrientation();
		float  GetAngle();
		
};
#endif
