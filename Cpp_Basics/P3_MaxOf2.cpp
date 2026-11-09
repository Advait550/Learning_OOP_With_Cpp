#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout << "\nEnter 2 Numbers: \n";
	int a , b;
	cin >> a >> b;
	cout << "\nMaximum Is: ";
	if(a > b)
		cout << a;
	else
		cout << b;
	return 0;
}
