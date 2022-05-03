#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
#include <string>

class Matrix
{
	private:
		std::string name;
		float** matrix;
	public:

		Matrix(std::string name);
		Matrix();
		~Matrix();
		float GetPoint(int x, int y)const;
		void SetPoint(int x, int y, float value)const;
		void ShowMatrix();
		Matrix& operator= (const Matrix& other);
		Matrix& operator+ (const Matrix& other);
		Matrix& operator* (const Matrix& other);

};

#endif
