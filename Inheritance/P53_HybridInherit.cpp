// Hybrid Inheritance


#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class A
{
	protected:
		int no;
		char nm[15];
	public:
		A()
		{
			no = 0;
			nm[0] = '\0';
		}
		~A()
		{
			
		}
		
		void setData()
		{
			cout << "\n Roll  No : ";
			cin >> no;
			cout << "\n Name : ";
			cin >> nm;
		}
		
		void display()
		{
			cout << "\n Roll No : " << no;
			cout << "\n Name : " << nm;
		}
};



class B : public A
{
	protected:
		int mrk;
	public:
		B() : A()
		{
			mrk = 0;
		}
		
		~B()
		{
			
		}
		
		void setData()
		{
			A :: setData();
			cout << "\n Marks : ";
			cin >> mrk;
		}
		
		void display()
		{
			A :: display();
			cout << "\n Marks : " << mrk;
		}
};



class C
{
	protected:
		int smrk;
	public:
		C()
		{
			smrk = 0;
		}
		
		~C()
		{
			
		}
		
		void setData()
		{
			cout << "\n Sports Marks : ";
			cin >> smrk;
		}
		
		void display()
		{
			cout << "\n Sports Marks : " << smrk;
		}
};



class D : public B , public C
{
	protected:
		int total;
	public:
		D() : B() , C()
		{
			total = 0;
		}
		
		~D()
		{
			
		}
		
		void setData()
		{
			B :: setData();
			C :: setData();
			total = mrk + smrk;
		}
		
		void display()
		{
			B :: display();
			C :: display();
			cout << "\n Total Marks : " << total;
		}
};


int main()
{
	D obj;
	obj.setData();
	obj.display();
	return 0;
}
