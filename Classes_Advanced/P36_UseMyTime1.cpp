#include<iostream>
#include<stdlib.h>
#include"MyTime.h"
using namespace std;

int main()
{
	MyTime a(7 , 20 , 30);
	a.display();
	a.setTime();
	a.display();
	return 0;
}
