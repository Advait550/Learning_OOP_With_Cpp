#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int a , int b)
{
	int c = a;
	a = b;
	b = c;	
}
int main()
{
	cout << "\n Enter 2 Numbers:\n";
	int a , b;
	cin >> a >> b;
	cout << "\n Before Swapping: " << "\n a : " << a << "\n b: " << b;
	swap(a , b);
	cout << "\n After Swapping: " << "\n a : " << a << "\n b: " << b;
	return 0;
}
