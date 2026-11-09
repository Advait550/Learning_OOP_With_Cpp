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
		void display();
};

void Book :: setData()
{
	cout << "\n Enter Book Number : ";
	cin >> bno;
	cout << "\n Enter Book Name : ";
	cin >> bnm;
	cout << "\n Enter Book Price : ";
	cin >> bprice;
}

void Book :: display()
{
	cout << "\n Book Number : " << bno;
	cout << "\n Book Name : " << bnm;
	cout << "\n Book Price : " << bprice;
}

//int main()
//{
//	Book a;
//	a.setData();
//	a.display();
//	return 0;
//}

//int main()
//{
//	Book * a;
//	a = new Book;
//	a -> setData();
//	a -> display();
//	delete a;
//	return 0;
//}

//int main()
//{
//	Book b[5];
//	int i = 0;
//	while(i < 5)
//	{
//		b[i].setData();
//		i++;
//	}
//	for(i = 0 ; i < 5 ; i++)
//		b[i].display();
//	return 0;
//}


//int main()
//{
//	int n , i = 0;
//	Book *ptr;
//	cout << "\n Enter Number Of Books To Be Listed : ";
//	cin >> n;
//	ptr = new Book [n];
//	while(i < n)
//	{
//		ptr[i].setData();
//		i++;
//	}
//	for(i = 0 ; i < n ; i++)
//		ptr[i].display();
//	delete [] ptr;
//	return 0;
//}
