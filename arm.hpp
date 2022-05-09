#ifndef ARM_HPP
#define ARM_HPP
#include "matrix.hpp"
#include "joint.hpp"
;
class Arm
{
	private:
		int NumOfJoints;
		float C_Length;
		Joint* Joints;
		Matrix* Projections;
	public:
		Arm(int,float,Joint*);
		void Display();
		void Display(int);
		void Rotate(int,float);



};

#endif
