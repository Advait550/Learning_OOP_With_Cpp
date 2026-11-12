#include<iostream>
#include<stdlib.h>

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
		void display();
		int total();
		int avg()
		{
			return total() / noe;
		}
};

void dynobj :: setData()
{
	cout << "\n Information Count : ";
	cin >> noe;
	ptr = new int [noe];
	cout << "\n Data:\n";
	for(int i = 0 ; i < noe ; i++)
		cin >> ptr[i];
}

int dynobj :: total()
{
	int i = 0 , tot = 0;
	while(i < noe)
	{
		tot += ptr[i];
		i++;
	}
	return tot;
}

void dynobj :: display()
{
	int i = 0;
	cout << "\n Data: \n";
	while(i < noe)
	{
		cout << "  " << ptr[i];
		i++;
	}
	cout << "\n Total : " << total();
	cout << "\n Average : " << avg();
}

int main()
{
	dynobj k;
	k.setData();
	k.display();
	return 0;
}
