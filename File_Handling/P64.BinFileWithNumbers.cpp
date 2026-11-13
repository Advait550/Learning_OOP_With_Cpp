// Create a Binary File Containing Integer Numbers


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include"Stu.h"
using namespace std;

int main()
{
	int no;
	ofstream out;
	out.open("num.dat" , ios :: binary | ios :: out);
	while(1)
	{
		cout << "\n Enter No : ";
		cin >> no;
		if(no == 0)
			break;
		out.write((char*)&no , sizeof(int));
	}
	out.close();
	return 0;
}
