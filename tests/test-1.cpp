#include "catch/catch.hpp"
#include "../joint.hpp"
#include "../3DPoint/3dpoint.hpp"

TEST_CASE("3D Point Test")
{

	Point3* p = new Point3(0.0, 0.0, 0.0);
	Point3* p2 = new Point3(2.0, 2.0, 2.0);

	CHECK(p->GetX() == 0.0);	
	CHECK(p->GetY() == 0.0);	
	CHECK(p->GetZ() == 0.0);	

	p->SetX(1.0);
	p->SetY(2.0);
	p->SetZ(3.0);

	CHECK(p->GetX() == 1.0);	
	CHECK(p->GetY() == 2.0);	
	CHECK(p->GetZ() == 3.0);	
	
	p = *p + *p2;

	CHECK(p->GetX() == 3.0);	
	CHECK(p->GetY() == 4.0);	
	CHECK(p->GetZ() == 5.0);	
	
	
	delete p;
	delete p2;
	
}

TEST_CASE("Test Joint Class")
{
	Joint J1 =  Joint();
	Joint J2 =  Joint();


	CHECK(J1.GetPos() == Point3(0,0,0));
	
	J1.SetPos(Point3(1,1,1));
	CHECK(J1.GetPos() == Point3(1,1,1));

}
