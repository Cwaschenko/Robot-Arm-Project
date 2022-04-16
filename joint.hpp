#ifndef JOINT_HPP
#define JOINT_HPP
#include "../Classes/Point2D/point.hpp"
#include <cmath>
class Joint
{
	private:
		Point  base;
		Point  SecondPoint;
		int    length;
		float  angle;

	public:
		Joint();
		Joint(Point base, int length, float angle);
		Point FindSecPoint();

};
#endif
