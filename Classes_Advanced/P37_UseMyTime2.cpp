#include<iostream>
#include<stdlib.h>
#include"MyTime.h""
using namespace std;

int main()
{
	MyTime a , b , c;
	a.setTime();
	b.setTime();
	c = a.sub(b);
	a.display();
	b.display();
	c.display();
	return 0;
}
