#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


class dim
{
	protected:
		int w , h;
	public:
		dim()
		{
			w = h = 0;
		}
		
		dim(int a , int b)
		{
			w = a;
			h = b;
		}
		
		~dim(){
			
		}
		
		void setData()
		{
			cout << "\n width : ";
			cin >> w;
			cout << "\n Height : ";
			cin >> h;
		}
		
		void display()
		{
			cout << "\n Width : " << w << "\n Height : " << h;
		}
		
		virtual void area() = 0;            // Pure Virtual Function
};





class rect : public dim
{
	public:
		rect() : dim()
		{
			
		}
		
		rect(int a , int b) : dim(a , b)
		{
			
		}
		
		~rect(){
		}
		
		void area()
		{
			cout << "\n Rect Area : " << (w * h);
		}
};



class trang : public rect
{
	public:
		trang() : rect(){}
		trang(int a , int b) : rect(a , b){}
		~trang(){}
		void area()
		{
			cout << "\n Trang Area : " << (w * h) / 2;
		}
};



//int main()
//{
//	dim * ptr;
//	ptr = new rect(10 , 5);
//	ptr -> display();
//	ptr -> area();
//	ptr = new trang(10 , 15);
//	ptr -> display();
//	ptr -> area();
//	return 0;
//}




int main()
{
	dim * ptr;
	cout << "\n1.Rect \n2.Trang \n3.Exit \nChoice : ";
	int opt;
	cin >> opt;
	if(opt > 2)
		return 0;
	if(opt == 1)
		ptr = new rect();
	else
		ptr = new trang();
	ptr -> setData();
	ptr -> display();
	ptr -> area();
	delete ptr;
	return 0;
}
