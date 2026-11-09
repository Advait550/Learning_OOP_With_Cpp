#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int * ptr;
	ptr = new int (10);
	cout << "\n No : " << *ptr;
	*ptr += 5;
	cout << "\n No : " << *ptr;
	delete ptr;
	return 0;
}
