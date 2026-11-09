#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int* ptr;
	ptr = new int;
	cout << "\n Enter Value: ";
	cin >> *ptr;
	*ptr += 5;
	cout << "\n No : " << *ptr;
	delete ptr;
	return 0;
}
