
#include "catch/catch.hpp"
#include "../appendage.hpp"
#include "../joint.hpp"
#include "../3DPoint/3dpoint.hpp"

TEST_CASE("Appendage Test")
{

	Joint* J1 = new Joint;
	Joint* J2 = new Joint;
	Appendage(J1,J2,2.0);

	
}
