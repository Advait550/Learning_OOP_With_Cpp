// Program to copy source file num.txt with new name pqr.txt


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main()
{
	ifstream in("num.txt");
	ofstream out("pqr.txt");
	int d;
	while(1)
	{
		in >> d;                   //Read From Source
		if(in.eof())
			break;
		out << d << " ";          //Write to Destination
	}
	in.close();
	out.close();
	return 0;
}
