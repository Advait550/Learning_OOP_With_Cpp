#include<iostream>
#include<stdlib.h>
using namespace std;
void display()
{
	cout << "\n Welcome";
}
void display(int a)
{
	cout << "\n Data :" << a;
}
void diaplay(double d)
{
	cout << "\n Data :" << d;
}
void display(long int a)
{
	cout << "\n Data :" << a;
}
int main()
{
	display();
	display('A');
	display(10);
	display(9.2);
	return 0;
}

