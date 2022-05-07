#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <iostream>
#include <string>

class Matrix
{
	private:
		std::string name;
		float** matrix;
		int NumOfCols;
		int NumOfRows;
	public:
		Matrix(std::string name, int NumOfCols, int NumOfRows);
		Matrix();
		~Matrix();
		float GetPoint(int x, int y)const;
		int GetNumOfCols() const;
		int GetNumOfRows() const;
		void Dot(const Matrix& other);
		void SetPoint(int x, int y, float value)const;
		void ShowMatrix();
		Matrix& operator= (const Matrix& other);
		Matrix& operator+ (const Matrix& other);

};

#endif
