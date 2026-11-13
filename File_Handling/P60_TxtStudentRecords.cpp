// Program to create file containing student records

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main()
{
	ofstream sout("stu.txt");
	int no , mrk;
	char nm[15];
	cout << "\n Student Data : \n";
	while(1)
	{
		cout << "\n Roll No : ";
		cin >> no;
		if(no == 0)
			break;
		cout << "\n Name : ";
		cin >> nm;
		cout << "\n Marks : ";
		cin >> mrk;
		sout << no << " " << nm << " " << "\n";
	}
	sout.close();
	return 0;
}
