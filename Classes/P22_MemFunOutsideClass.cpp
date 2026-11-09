// Member Function Definition Outside the Class

#include<iostream>
#include<stdlib.h>
using namespace std;

class Book
{
		int bno;
		char bnm[15];
		int bprice;
	public:
		void setData();
		void setData(int);
		void display();
		int getNo()
		{
			return bno;
		}
		int getPrice()
		{
			return bprice;
		}
		char *getName()
		{
			return bnm;
		}
};

void Book :: setData(int no)
{
	bno = no;
	cout << "\n Enter Book Name : ";
	cin >> bnm;
	cout << "\n Enter Book Price : ";
	cin >> bprice;
}

void Book :: setData()
{
	cout << "\n Book Data\n Enter Book Number : ";
	cin >> bno;
	cout << "\n Enter Book Name : ";
	cin >> bnm;
	cout << "\n Enter Book Price : ";
	cin >> bprice;
}

void Book :: display()
{
	cout << "\n Book Data \n No : " << bno << "\n Name : " << bnm << " \n Price : " << bprice;
}

// 1st Main

/*int main()
{
	Book b;
	b.setData();
	b.display();
	return 0;
} */

// 2nd main

/*int main()
{
	Book *ptr;
	ptr = new Book();
	ptr -> setData();
	ptr -> display();
	delete ptr;
	return 0;
}


// 3rd main: Array Of Objects Of Type Book
int main()
{
	Book b[5];
	int i = 0;
	while(i < 5)
	{
		b[i].setData(i + 1);
		i++;
	}
	for(i = 0 ; i < 5 ; i++)
		b[i].display();
	return 0;
}*/

// Use of New Operator to Make Avialable Memory For Array of Objects of Type Book
int main()
{
	Book *b = new Book[5];
	int i = 0;
	while(i < 5)
	{
		b[i].setData();
		i++;
	}
	for(i = 0 ; i < 5 ; i++)
		b[i].display();
	delete[]b;
	return 0;
}
