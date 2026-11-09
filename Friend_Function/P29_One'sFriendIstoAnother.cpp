// Member Fun of Class A is Friend to the Class B

#include<iostream>
#include<stdlib.h>
using namespace std;

class B;		// Forward Delcaration

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
	    void swap(B&);
};

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
		friend void A ::swap(B&);
};

void A :: swap(B&q)
{
	int r = a;
	a = q.b;
	q.b = r;
}

int main()
{
	A p ;
	B q;
	p.set();
	q.set();
	p.display();
	q.display();
	p.swap(q);
	p.display();
	q.display();
	return 0;
}
