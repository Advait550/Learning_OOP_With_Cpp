//Prog to create Text file containing numbers

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main()
{
	ofstream out("num.txt");
	cout << "\n Enter Numbers : ";
	int d;
	while(1)
	{
		cin >> d;
		if(d == 0)
			break;
		out << d << " ";
	}
	out.close();
	return 0;
}
