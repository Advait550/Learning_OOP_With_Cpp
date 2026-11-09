#include<iostream>
#include<stdlib.h>
using namespace std;
int x = 1000;
int main()
{
	int x = 10;
	{
		int x = 100;
		cout << "\n X: " << x << "\t" << ::x;
	}
	cout << "\n X: " << x << "\t" << ::x;
	return 0;
}
