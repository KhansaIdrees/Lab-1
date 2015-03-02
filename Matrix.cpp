#include <iostream>
#include "Matrix.h"
using namespace std;


Matrix::Matrix()
{
}

Matrix::Matrix(int n)
{
	size = n;
	matrix = new int*[size];
	for(int i=0; i<size; i++)
		matrix[i] = new int[size];
}

void Matrix::initialize(int values[3][3])
{
	for(int i=0; i<size; i++)
		for(int j=0; j<size; j++)
			matrix[i][j] = values[i][j];
}

void Matrix::set(int i, int j, int v)
{
	matrix[i][j] = v;
}

int Matrix::get(int i, int j)
{
	return matrix[i][j];
}

Matrix* Matrix::operator + (Matrix& m)
{
	Matrix *result = new Matrix(size);
	for(int i=0; i<size; i++)
		for(int j=0; j<size; j++)
		{
			int temp = this->matrix[i][j] + m.get(i,j);
			result->set(i,j,temp);
		}
	return result;
}

Matrix* Matrix::operator - (Matrix& m)
{
	Matrix *result = new Matrix(size);
	for(int i=0; i<size; i++)
		for(int j=0; j<size; j++)
		{
			int temp = matrix[i][j] - m.get(i,j);
			result->set(i,j,temp);
		}
	return result;
}

Matrix* Matrix::operator * (Matrix& m)
{
	Matrix *result = new Matrix(size);
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			int temp = 0;
			for(int k=0; k<size; k++)
				temp += matrix[i][k]*m.get(k,j);
			result->set(i,j,temp);
		}
	}
	return result;
}

Matrix::~Matrix()
{
	for(int i=0; i<size; i++)
		delete [] matrix[i];
	delete [] matrix;
}