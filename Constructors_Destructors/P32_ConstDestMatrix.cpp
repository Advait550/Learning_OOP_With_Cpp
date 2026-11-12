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
 		void setData();
 		void display();
 		Matrix add(Matrix &);
 		Matrix operator - (Matrix &);
 		Matrix mul(Matrix &);
 };
 
 Matrix :: Matrix()
 {
 	int i , j;
 	for(i = 0 ; i < 3 ; i++)
 	{
 		for(j = 0 ; j < 3 ; j++)
 			x[i][j] = 0;
	}
 }
 
 Matrix :: Matrix(Matrix &t)
 {
 	int i , j;
 	for(i = 0 ; i < 3 ; i++)
 	{
 		for(j = 0 ; j < 3 ; j++)
 			x[i][j] = t.x[i][j];
	}
 }
 
 void Matrix :: setData()
 {
 	int i , j;
 	cout << "\n Matrix Data to be inputed : \n";
 	for(i = 0 ; i < 3 ; i++)
 	{
 		for(j = 0 ; j < 3 ; j++)
 			cin >> x[i][j];
	}
 }
 
 void Matrix :: display()
 {
 	cout << "\n Matrix:\n";
 	int i , j;
 	for(i = 0 ; i < 3 ; i++)
 	{
 		for(j = 0 ; j < 3 ; j++)
 			cout << " " << x[i][j];
 		cout << "\n";
	}
 }
 
Matrix Matrix :: add(Matrix &t)
 {
 	int i , j;
 	Matrix q;                      // default constructor
 	for(i = 0 ; i < 3 ; i++)
 	{
 		for(j = 0 ; j < 3 ; j++)
 			q.x[i][j] = x[i][j] + t.x[i][j];
	}
	return q;
 }
 
 Matrix Matrix :: operator - (Matrix &t)
 {
 	int i , j;
 	Matrix q;                      // default constructor
 	for(i = 0 ; i < 3 ; i++)
 	{
 		for(j = 0 ; j < 3 ; j++)
 			q.x[i][j] = x[i][j] - t.x[i][j];
	}
	return q;
 }
 
 Matrix Matrix :: mul(Matrix &t)
 {
 	int i , j , k;
 	Matrix q;
 	for(i = 0 ; i < 3 ; i++)
 	{
 		for(j = 0 ; j < 3 ; j++)
 		{
 			for(k = 0 ; k < 3 ; k++)
			 	q.x[i][j] += (x[i][k] * t.x[k][j]);	
		}
	}
	return q;
 }
 
 int main()
 {
 	Matrix a , b , c;
 	cout << "\n Data For Matrix A : ";
 	a.setData();
 	cout << "\n data For Matrix B : ";
 	b.setData();
 	c = a - b;
 	a.display();
 	b.display();
 	c.display();
 	c = a.add(b);
 	c.display();
 	return 0;
 }
