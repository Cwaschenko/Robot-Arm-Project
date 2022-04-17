#ifndef JOINT_HPP
#define JOINT_HPP

#include "3DPoint/3dpoint.hpp"
#include <cmath>
class Joint
{
	private:
		Point3 Pos;
		float   Angle;

	public:
		Joint();
		void   SetAngle(float Angle);
		void   SetPos(Point3 Pos);
		Point3 GetPos();
		float  GetAngle();
		
};
#endif
