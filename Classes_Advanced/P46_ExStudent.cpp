#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Student
{
		int rno;
		char nm[15];
	public:
		void setdata()
		{
			cout << "\n Roll No : ";
			cin >> rno;
			cout << "\n Name : ";
			cin >> nm;
		}
		
		void display()
		{
			cout << "\n Roll No : " << rno << "\n Name : " << nm;
		}
		
		int getNo()
		{
			return rno;
		}
		
		char *getName()
		{
			return nm;
		}
		
};

class ExStudent : public Student
{
		double mrk;
	public:
		setMarks()
		{
			cout << "\n Marks : ";
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
};

int main()
{
	Student s;
	s.setdata();
	s.display();
	ExStudent d;
	d.setdata();
	d.setMarks();
	d.display();
	d.displayMarks();
	return 0;
}
