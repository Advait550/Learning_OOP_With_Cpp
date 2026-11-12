// Constructor Member Function Definitions Outside the Class

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define N 5
using namespace std;

class Array
{
		int x[N];
	public:
		Array();
		Array(int);
		Array(Array &);
		~Array(){};
		void setData();
		void display();
		int total();
		int avg()
		{
			return total() / N;
		}
};

Array :: Array()
{
	int i = 0;
	while(i < N)
	{
		x[i] = 0;
		i++;
	}
}

Array :: Array(int val)
{
	int i = 0;
	while(i < N)
	{
		x[i] = val;
		i++;
	}
}

Array :: Array(Array &t)
{
	int i = 0;
	while(i < N)
	{
		x[i] = t.x[i];
		i++;
	}
}

void Array :: setData()
{
	cout << "\n Enter Data: \n";
	int i = 0;
	while(i < N)
	{
		cin >> x[i];
		i++;
	}
}

void Array :: display()
{
	cout << "\n Data\n";
	int i = 0;
	while(i < N)
	{
		cout << "  " << x[i];
		i++;
	}
}

int Array :: total()
{
	int i = 0 , sum = 0;
	while(i < N)
	{
		sum += x[i];
		i++;
	}
	return sum;
}

int main()
{
	Array p;
	p.setData();
	p.display();
	cout << "\n Total : ";
	cout << p.total();
	cout << "\n Average : ";
	cout << p.avg();
	Array q(p);
	q.display();
	return 0;
}
