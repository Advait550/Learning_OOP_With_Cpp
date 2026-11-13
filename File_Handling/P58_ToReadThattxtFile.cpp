// Program to read Num.txt

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main()
{
	ifstream in("num.txt");
	cout << "\n Enter Number : ";
	int d;
	while(1)
	{
		in >> d;
		if(in.eof())
			break;
		cout << d << " ";
	}
	in.close();
	return 0;
}
