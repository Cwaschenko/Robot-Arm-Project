#ifndef ARM_HPP
#define ARM_HPP
#include <Eigen-Lib/Dense>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "joint.hpp"
#include "link.hpp"
using Eigen::Matrix1f;

class Arm
{
	private:
		std::string Name;
		int NumOfJoints;
		int NumOfLinks;;
		Point3 EndPosition;
        std::vector<Joint*> Joints;
		std::vector<Link*> Links;

	public:
		Arm(std::string ARM_CONFIG);
		void AddJoint(std::string ACTUATOR_CONFIG);
		void AddLink(int BasePos, int EndPos, float Length, float Width);
		void Display();
		Link* IsLinkEnd(Joint* Queried);
		Link* IsLinkBase(Joint* Queried);
		Joint* GetJoint(int JointIndex);
		Link* GetLink(int LinkIndex);
		Point3 GetEndPosition();
		void Rotate( int JointIndex , float DesiredAngle);



};

#endif
