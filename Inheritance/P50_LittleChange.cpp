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
		void setData()
		{
			cout << "\n No : ";
			cin >> no;
		}
		void display()
		{
			cout << "\n No : " << no;
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
			void setData()
			{
				Number :: setData();
				cout << "\n Name : ";
				cin >> nm;
			}
			void display()
			{
				Number :: display();
				cout << "\n Name : " << nm;
			}
};


class Marks : public Name
{
	protected :
		double mrk;
	public:
		Marks() : Name()
		{
			mrk = 0.0;
		}
		~Marks()
		{
			
		}
		void setData()
		{
			Name :: setData();
			cout << "\n Marks : ";
			cin >> mrk;
		}
		void display()
		{
			Name :: display();
			cout << "\n Marks : " << mrk;
		}
};


int main()
{
	Number k;
	k.setData();
	k.display();
	Marks a;
	a.setData();
	a.display();
	return 0;
}
