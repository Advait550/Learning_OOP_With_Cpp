#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

class Student
{
		int rno;
		char nm[15];
	public:
		void setData()
		{
			cout << "\n Enter Roll No : ";
			cin >> rno;
			cout << "\n Enter Name : ";
			cin >> nm;
		}
		void display()
		{
			cout << "\n Roll No :" << rno << "\n Name : " << nm;
		}
		int getNO()
		{
			return rno;
		}
		char* getNm()
		{
			return nm;
		}
};

class ExStudent : Student
{
		double mrk;
	public:
		void setMarks()
		{
			cout << "\n Enter Marks : ";
			cin >> mrk;
		}
		void displayMarks()
		{
			cout << "\n Marks : " << mrk;
		}
		double getMarks()
		{
			return mrk;
		}
		void input()
		{
			setData();
		}
		void output()
		{
			display();
		}
};

int main()
{
	ExStudent d;
	d.input();
	d.setMarks();
	d.output();
	d.displayMarks();
	return 0;
}
