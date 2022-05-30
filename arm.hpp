#ifndef ARM_HPP
#define ARM_HPP
#include "matrix.hpp"
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "joint.hpp"
#include "link.hpp"

class Arm
{
	private:
		std::string Name;
		int NumOfJoints;
		int NumOfLinks;;
        std::vector<Joint*> Joints;
		std::vector<Link*> Links;

	public:
		Arm(std::string ARM_CONFIG);
		void AddJoint(std::string ACTUATOR_CONFIG);
		void AddLink(int BasePos, int EndPos, float Length);
		void Display();
		void Display(int);
		void Rotate(int,float);



};

#endif
