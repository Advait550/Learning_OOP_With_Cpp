// Program to Read Binary File Containing Numbers

#include<iostream>
#
#include<stdio.h>
#include<stdlib.h>
#include"Stu.h"
using namespace std;

int main()
{
	int no;
	ifstream in;
	in.open("num.dat" , ios :: binary | ios :: in);
	while(1)
	{
		in.read((char*)&no , sizeof(int));
		if(in.eof())
			break;
		cout << no << " ";
	}
	in.close();
	return 0;
}
