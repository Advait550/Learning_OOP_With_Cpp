#include<iostream>
#include<stdlib.h>
using namespace std;

inline void display()
{
	cout << "\n Welcome";
	return;
}
inline int sqr(int n)
{
	return (n*n);
}
inline int cube(int n)
{
	return (n*n*n);
}
int main()
{
	display();
	cout << "\n Sqr : " << sqr(7);
	cout << "\n Cube: " << cube(7);
	return 0;
}
