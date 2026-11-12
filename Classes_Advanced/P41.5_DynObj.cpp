#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

class dynobj
{
		int noe;
		int *ptr;
	public:
		dynobj()
		{
			noe = 0;
			ptr = NULL;
		}
		~dynobj()
		{
			if(ptr != NULL)
				delete [] ptr;
		}
		void setData();
		int total();
		void display();
		float avg(){
			return total()/noe;
		}
};

void dynobj :: setData()
{
	cout << "\n Enter Number of Elements : ";
	cin >> noe;
	ptr = new int [noe];
	cout << "\n Enter Data : \n";
	for(int i = 0 ; i < noe ; i++)
	{
		cin >> ptr[i];
	}
}

int dynobj :: total()
{
	int tot = 0 , i = 0;
	while(i < noe)
	{
		tot += ptr[i];
		i++;
	}
	return tot;
}

void dynobj :: display()
{
	for(int i = 0 ; i < noe ; i++)
		cout << ptr[i] << " ";
}

int main()
{
	dynobj a;
	a.setData();
	a.display();
	cout << "\n Total : " << a.total();
	cout << "\n Average : " << a.avg();
	return 0;
}
