#ifndef POINT_HPP
#define POINT_HPP
#include <ostream>
class Point3
{
	private:
		float x;
		float y;
		float z;	
	
	public:
		Point3();
		Point3(float x, float y, float z);
		float GetX() const;
		float GetY() const;
		float GetZ() const;
		void  SetX(float x);
		void  SetY(float y);
		void  SetZ(float z);
		bool operator == (const Point3& other) const;
		
		Point3 operator =(const Point3& EqualTo);
		Point3 operator +(const Point3& Added);
		friend std::ostream& operator <<  (std::ostream& out, const Point3& point);
};

#endif
