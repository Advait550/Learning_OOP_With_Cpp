// Member Fun of Class B is Friend to the Class A

#include<iostream>
#include<stdlib.h>
using namespace std;

class A;
class B
{
		int b;
	public:
		void set()
		{
			cout << "\n B b: ";
			cin >> b;
		}
		
		void display()
		{
			cout << "\n B b: " << b;
		}
		void swap(A&);
};

class A
{
		int a;
	public:
		void set()
		{
			cout << "\n A a: ";
			cin >> a;
		}
		
		void display()
		{
			cout << "\n A a: " << a;
		}
	    friend void B :: swap(B&);
};

void B :: swap(A&q)
{
	int r = q.a;
	q.a = b;
	b = r;
}

int main()
{
	A p ;
	B q;
	p.set();
	q.set();
	p.display();
	q.display();
	q.swap(p);
	p.display();
	q.display();
	return 0;
}
