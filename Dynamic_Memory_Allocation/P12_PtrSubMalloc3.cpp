#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int * ptr;
	ptr = new int [5];
	int i = 0;
	cout << "\n Enter Data: \n";
	while(i < 5)
	{
		cin >> ptr[i];
		i++;
	}
	cout << "\n Data : ";
	for(i = 0 ; i < 5 ; i++)
		cout << ptr[i] << " ";
	delete []ptr;
}
