// Program to Implement Class Numbers

#include<iostream>
#include<stdlib.h>
using namespace std;

class Number
{
		int no;
	public:
		Number()
		{
			no = 0;
			cout << "\n Default";
		}
		Number(int a)
		{
			no = a;
			cout << "\n Para";
		}
		Number(Number &t)
		{
			no = t.no;
			cout << "\n Copy";
		}
		~Number()
		{
			cout << "\n Destructor";
		}
		void setData(int n)
		{
			no = n;
		}
		void setData()
		{
			cout << "\n No : " ;
			cin >> no;
		}
		void display()
		{
			cout << "\n No : " << no;
		}
};

//int main()
//{
//	Number a;           // default
//	{
//		Number b(10);    // para
//		b.display();
//	}
//	a.setData();
//	a.display();
//	Number c(a);         // copy
//	c.display();
//	return 0;
//}


int main()
{
	Number a;   
	cout << "\n a is declared\n";
	a.display();        // default
	{
		Number b(10); 
		cout << "\n b is declared\n";   // para
		b.display();
	}
	a.setData();
	a.display();
	Number c(a); 
	cout <<"\n c is declared\n";        // copy
	c.display();
	return 0;
}
