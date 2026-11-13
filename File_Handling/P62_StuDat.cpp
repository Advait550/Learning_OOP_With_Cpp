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
	ofstream sout;
	sout.open("stu.dat" , pas :: binary | pas :: out);
	while(1)
	{
		cout << "\n Roll No : ";
		cin >> no;
		if(no == 0)
			break;
		s.setData(no);
		sout.write((char*)&s , sizeof(Stu));
	}
	sout.close();
	return 0;
}
