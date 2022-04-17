#ifndef APPENDAGE_HPP
#define APPENDAGE_HPP


#include "3DPoint/3dpoint.hpp"
#include "joint.hpp"

class Appendage
{
	private:
		Joint* J1;
		Joint* J2;	
		float  Length;
	public:
		Appendage(Joint* J1, Joint* J2, float Length);
};

#endif
