// c++ Uses a unique keyword called this to represent an object that invokes a member function. this is a pointer that points to
//the object for which this function was called. This unique pointer is automatically passed to a member function when it is called
//the pointer this adds as an implicite argument to all the member functions.


#include<iostream>
#include<stdlib.h>
using namespace std;

class Number
{
		int x , y;
		void swap()
		{
			int z = x;
			x = y;
			y = z;
		}
	public:
		void setData()
		{
			cout << "\n X : ";
			cin >> x;
			cout << "\n Y : ";
			cin >> y;
		}
		
		void setData(int p)
		{
			x = p;
			y = p;
		}
		
		void setData(int x , int y)
		{
			this -> x = x;                  
			this -> y = y;
		}
		
		void setData(Number &t)
		{
			x = t.x;
			y = t.y;
		}
		
		void display()
		{
			cout << "\n X : " << x;
			cout << "\n Y : " << y;
		}
		
		int getX()
		{
			return x;
		}
		
		int getY()
		{
			return y;
		}
		
		void setX(int a)
		{
			x = a;
		}
		
		void setY(int a)
		{
			y = a;
		}
		
		void callswap()
		{
			swap();
		}
};

int main()
{
	Number p , q , r;
	p.setData();
	p.display();
	q.setData(p);
	q.display();
	r.setX(100);
	r.setY(100);
	r.display();
	return 0;
}
