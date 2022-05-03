#include "../matrix.hpp"
#include "catch/catch.hpp"

TEST_CASE("Matrix initialization setters and getters")
{

	Matrix m;


	CHECK(m.GetPoint(0,0) == 0.0);
	CHECK(m.GetPoint(0,2) == 0.0);


	m.SetPoint(0,0, 1.0);	
	m.SetPoint(0,2, 1.0);	

	CHECK(m.GetPoint(0,0) == 1.0);
	CHECK(m.GetPoint(0,2) == 1.0);
		
}

TEST_CASE("Matrix Addition Operation")
{

	Matrix m("Big Fat Matrix!!");
	Matrix m1; 
	Matrix m2;
	
	for(int y =0; y < 3; ++y)
	{	
		for(int x = 0; x < 3; ++x)
		{
			m1.SetPoint(x,y,1.0);
			m2.SetPoint(x,y,1.0);
		}
	}
	
	m = m1 + m2;

	CHECK(m.GetPoint(0,0) == 2.0);
	CHECK(m.GetPoint(0,2) == 2.0);
	m.ShowMatrix();	

}

TEST_CASE("Matrix Multiplication")
{


	Matrix m1("Matrix 1");
	Matrix m2("Matrix 2");
	Matrix m("Result Matrix");

	for(int y = 0; y < 3; ++y)
	{	
		for(int x = 0; x < 3; ++x)
		{
			m1.SetPoint(x,y,9.0);
			m2.SetPoint(x,y,8.0);
		}
	}
	
	m = m1 * m2;

	CHECK(m.GetPoint(0,0) == 72.0);
	CHECK(m.GetPoint(0,2) == 72.0);
	m.ShowMatrix();	

}
