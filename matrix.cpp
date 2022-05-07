#include "matrix.hpp"

Matrix::Matrix()
{
	this->matrix = new float*;
	for(int y = 0; y < 3; ++y)
	{
		this->matrix[y] = new float;
		for(int x = 0; x < 3; ++x)
		{
			this->matrix[y][x] = 0.0;
		}
	}


}

Matrix::Matrix(std::string name, int NumOfRows, int NumOfCols)
{

	this->name = name;
	
	this->NumOfRows = NumOfRows;
	this->NumOfCols = NumOfCols;
	
	this->matrix = new float*;
	for(int y = 0; y < this->NumOfRows; ++y)
	{
		this->matrix[y] = new float;
		for(int x = 0; x < this->NumOfCols; ++x)
		{
			this->matrix[y][x] = 0.0;
		}
	}


}

Matrix::~Matrix()
{
	for(int y = 0; y < 3; ++y)
	{
		delete this->matrix[y];
	}
	delete this->matrix;
}

float Matrix::GetPoint(int x, int y)const
{
	if ( x >= 3 || y >= 3)
	{
		return -1.0;
	}
	else
	{
		return this->matrix[y][x];
	}
}

int Matrix::GetNumOfCols() const
{
	return this->NumOfCols;
}

int Matrix::GetNumOfRows() const
{
	return this->NumOfRows;
}

void Matrix::Dot(const Matrix& other)
{
	//check rows and cols of each matrix 
	//if valid distribute other matrix to this matrix
	//print error if false
	if (this->NumOfCols == other.GetNumOfCols() || this->NumOfRows == other.GetNumOfRows())
	{
		for(int y = 0; y < other.GetNumOfRows(); ++y)
		{
			for(int x = 0; x < other.GetNumOfCols(); ++x)
			{
				float NewPoint = this->GetPoint(x,y) * other.GetPoint(x,y);
				this->SetPoint(x,y, NewPoint);
			}
		}
	}
}


void Matrix::SetPoint(int x, int y, float value)const
{
	for(int X = 0; X < 3; ++X)
	{
		for(int Y = 0; Y < 3; ++Y)
		{
			if ( x == X || y == Y)
			{
				this->matrix[y][x] = value;
			}
		}
	}
}

void Matrix::ShowMatrix()
{
	std::cout << this->name << "\n";
	for(int y =0; y < 3; ++y)
	{	
		for(int x = 0; x < 3; ++x)
		{
			std::cout << this->GetPoint(x,y) << " ";
		}
		if(y < 2)
		{
			std::cout << "\n";
		}
	}
	std::cout << "\n";

}	

Matrix& Matrix::operator=(const Matrix& other)
{
	for(int y =0; y < 3; ++y)
	{	
		for(int x = 0; x < 3; ++x)
		{
			this->SetPoint(x,y,other.GetPoint(x,y));
		}
	}
	return *this;
}

Matrix& Matrix::operator+(const Matrix& other)
{
	float NewValue;

	for(int y =0; y < 3; ++y)
	{	
		for(int x = 0; x < 3; ++x)
		{
			NewValue = this->GetPoint(x,y) + other.GetPoint(x,y);	
			this->SetPoint(x,y,NewValue);	
		}
	}
	return *this;

}

