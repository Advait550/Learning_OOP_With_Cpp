#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;


class Matrix
{
		int x[3][3];
	public:
		Matrix()
		{
			int i , j;
			for(i = 0 ; i < 3 ; i++)
			{
				for(j = 0 ; j < 3 ; j++)
					x[i][j] = 0;
			}
		}
		
		Matrix(Matrix &t)
		{
			int i , j;
			for(i = 0 ; i < 3 ; i++)
			{
				for(j = 0 ; j < 3 ; j++)
					x[i][j] = t.x[i][j];
			}
		}
		
		~Matrix()
		{
			
		}
		
		friend istream & operator >> (istream &in , Matrix &t)
		{
			cout << "\n Enter Data : \n";
			int i , j;
			for(i = 0 ; i < 3 ; i++)
			{
				for(j = 0 ; j < 3 ; j++)
					in >> t.x[i][j];			
			}
			return in;
		}
		
		friend ostream & operator << (ostream &out , Matrix&t)
		{
			int i , j;
			for(i = 0 ; i < 3 ; i++)
			{
				for(j = 0 ; j < 3 ; j++)
					out << " " << t.x[i][j];
				out << "\n";			
			}
			return out;
		}
		
		Matrix operator + (Matrix &t)
		{
			int i , j;
			Matrix r;
			for(i = 0 ; i < 3 ; i++)
			{
				for(j = 0 ; j < 3 ; j++)
					r.x[i][j] = x[i][j] + t.x[i][j];            // call will be generatyed by p so it will be avialable within body		
			}
			return r;
		}
		
		Matrix operator - (Matrix &t)
		{
			int i , j;
			Matrix r;
			for(i = 0 ; i < 3 ; i++)
			{
				for(j = 0 ; j < 3 ; j++)
					r.x[i][j] = x[i][j] - t.x[i][j];			
			}
			return r;
		}
		
		Matrix operator * (Matrix &t)
		{
			int i , j , k;
			Matrix r;
			for(i = 0 ; i < 3 ; i++)
			{
				for(j = 0 ; j < 3 ; j++)
				{
					for(k = 0 ; k < 3 ; k++)
						r.x[i][j] += (x[i][k] * t.x[k][j]);
				}			
			}
			return r;
		}
};


int main()
{
	Matrix p , q , r;
	cout << "\n Matrix 1 : ";
	cin >> p;
	cout << "\n Matrix 2 : ";
	cin >> q;
	r = p + q;
	cout << p << "\n" << q << "\n" << r;
	r = p - q;
	cout << "\n" << r;
	r = p * q;
	cout << "\n" << r;
	return 0;
}
