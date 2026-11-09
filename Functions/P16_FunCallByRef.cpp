#include<iostream>
#include<stdlib.h>
using namespace std;
void swap(int &a , int &b)
{
	int c = a;
	a = b;
	b = c;
}

int main()
{
	cout << "\n Enter 2 Numbers:\n";
	int p , q;
	cin >> p >> q;
	cout << "\n Before Swapping: " << "\n p : " << p << "\n q: " << q;
	swap(p , q);
	cout << "\n After Swapping: " << "\n p : " << p << "\n q : " << q;
	return 0;
}
