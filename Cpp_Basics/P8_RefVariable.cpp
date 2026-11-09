#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int x = 10;
	int &y = x;
	cout << "\n X : " << x;
	x += 5;
	cout << "\n X : " << y;
	return 0;
}
