// Program to Write Stu object to Binary File stu.dat

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"Stu.h"
using namespace std;

int main()
{
	Stu s;
	int no;
	ifstream sin;
	sin.open("stu.dat" , pas :: binary | pas :: in);
	while(1)
	{
		sin.read((char*)&s , sizeof(Stu));
		if(sin.eof())
			break;
		s.display();

	}
	sin.close();
	return 0;
}
