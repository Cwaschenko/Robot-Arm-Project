
#include "catch/catch.hpp"
#include "../appendage.hpp"
#include "../joint.hpp"
#include "../3DPoint/3dpoint.hpp"

TEST_CASE("3D poinr Test")
{

	Point3* p = new Point3(0.0, 0.0, 0.0);
	Point3* p2 = new Point3(2.0, 2.0, 2.0);

	CHECK(p->GetX() == 0.0);	
	CHECK(p->GetY() == 0.0);	
	CHECK(p->GetZ() == 0.0);	

	p->SetX(1.0);
	p->SetY(1.0);
	p->SetZ(1.0);

	CHECK(p->GetX() == 1.0);	
	CHECK(p->GetY() == 1.0);	
	CHECK(p->GetZ() == 1.0);	
	
	p->Add(p2);

	CHECK(p->GetX() == 3.0);	
	CHECK(p->GetY() == 3.0);	
	CHECK(p->GetZ() == 3.0);	

	
}

TEST_CASE("Test Joint Class")
{
	Joint* J1 = new Joint;
	Joint* J2 = new Joint;


	CHECK(J1->GetPos() == Point3(0,0,0));
	
	J1->SetPos(Point3(1,1,1));
	CHECK(J1->GetPos() == Point3(1,1,1));
	
}
