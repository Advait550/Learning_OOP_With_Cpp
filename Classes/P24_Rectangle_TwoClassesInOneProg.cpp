#include<iostream>
#include<stdlib.h>
using namespace std;

class Point
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
		
		void setData(Point &t)
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

class Rectangle
{
		Point p;
		Point q;
	public:
		void setData()
		{
			cout << "\n Point P : ";
			p.setData();
			cout << "\n Point Q : ";
			q.setData();
		}
		
		void setData(Point &a , Point &b)
		{
			p = a;
			q = b;
		}
		
		void setData(int x1 , int y1 , int x2 , int y2)
		{
			p.setData(x1 , y1);
			q.setData(x2 , y2);
		}
		
		int getWidth()
		{
			return (q.getX() - p.getX());
		}
		
		int getHeight()
		{
			return (q.getY() - p.getY());
		}
		
		int area()
		{
			return getWidth() * getHeight();
		}
};

int main()
{
	Rectangle a;
	a.setData(10 , 10 , 120 , 100);
	cout << "\n Width : " << a.getWidth();
	cout << "\n Height : " << a.getHeight();
	cout << "\n Area : " << a.area();
	return 0;
}
