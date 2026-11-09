#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{
	cout << "\n Enter City Name: ";
	char a[50];
	cin >> a;
	int len = strlen(a);
	cout << "\n City: " << a << "\n Length: " << len;
	return 0;
}
