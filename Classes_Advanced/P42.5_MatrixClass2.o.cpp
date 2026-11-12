#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class Matrix
{
		int x[3][3];
	public:
		Matrix();
		Matrix(Matrix &);
		~Matrix(){};
		friend istream & operator >> (istream & , Matrix &);
		friend ostream & operator << (ostream & , Matrix &);
		Matrix operator + (Matrix &);
		Matrix operator - (Matrix &);
		Matrix operator * (Matrix &);
};

int main()
{
	Matrix a , b , c;
	cout << "\n Enter For Matrix A : \n";
	cin >> a;
	cout << "\n Enter For Matrix B : \n";
	cin >> b;
	c = a + b;
	cout << "\n Total : \n" << c;
	c = a - b;
	cout << "\n Diffrence : \n" << c;
	c = a * b;
	cout << "\n Multiplication : \n" << c;
	return 0;
}

Matrix :: Matrix()
{
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
			x[i][j] = 0;
	}
}

Matrix :: Matrix(Matrix &t)
{
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
			x[i][j] = t.x[i][j];
	}
}

istream & operator >> (istream &in , Matrix &t)
{
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
			in >> t.x[i][j];
	}
}

ostream & operator << (ostream &out , Matrix &t)
{
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
			out << t.x[i][j] << " ";
		out << "\n";
	}
}

Matrix Matrix :: operator + (Matrix &t)
{
	Matrix d;
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
			d.x[i][j] = x[i][j] + t.x[i][j];
	}
	return d;
}

Matrix Matrix :: operator - (Matrix &t)
{
	Matrix d;
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
			d.x[i][j] = x[i][j] - t.x[i][j];
	}
	return d;
}

Matrix Matrix :: operator * (Matrix &t)
{
	Matrix d;
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j < 3 ; j++)
		{
			for(int k = 0 ; k < 3 ; k++)
				d.x[i][j] += x[i][k] * t.x[k][j];
		}
	}
	return d;
}
