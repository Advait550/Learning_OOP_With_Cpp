#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


class Number
{
	protected:
		int no;
	public:
		Number()
		{
			no = 0;
		}
		~Number()
		{
			
		}
		void setNo()
		{
			cout << "\n Enter Roll No : ";
			cin >> no;
		}
		void displayNo()
		{
			cout << "\n Roll No : " << no;
		}
};


class Name : public Number
{
	protected:
		char nm[15];
	public:
		Name() : Number()
		{
			nm[0] = '\0';
		}
		~Name()
		{
			
		}
		void setName()
		{
			setNo();
			cout << "\n Name : ";
			cin >> nm;
		}
		void displayName()
		{
			displayNo();
			cout << "\n Name : " << nm;
		}
};


class Marks : public Name
{
	protected:
		double mrk;
	public:
		Marks() : Name()
		{
			mrk = 0.0;
		}
		~Marks()
		{
			
		}
		void setMarks()
		{
			setName();
			cout << "\n Marks : ";
			cin >> mrk;
		}
		void displayMarks()
		{
			displayName();
			cout << "\n Marks : " << mrk;
		}
};

int main()
{
	Number a;
	a.setNo();
	a.displayNo();
	Marks b;
	b.setMarks();
	b.displayMarks();
	return 0;
}
