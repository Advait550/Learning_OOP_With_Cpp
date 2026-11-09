#include<iostream>
#include<stdlib.h>
using namespace std;

class Number
{
		int no;
	public : 
		void setData()
		{
			cout << "\n No : " ;
			cin >> no;
		}
		
		void display()
		{
			cout << "\n No : " << no;
		}
		
		friend void update(Number & , int);
};

void update(Number &t , int val)
{
	t.no = t.no + val;
}

int main()
{
	Number a;
	a.setData();
	a.display();
	update(a , 5);
	a.display();
	return 0;
}
