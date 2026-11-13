// Program to read stu.txt


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

int main()
{
	ifstream sin("stu.txt");
	int no , mrk;
	char nm[15];
	cout << "\n Student Data : \n";
	while(1)
	{
		sin >> no >> nm >> mrk;
		if(sin.eof())
			break;
		cout << "\n Roll No : " << no << "\n Name : " << nm << "\n Marks : " << mrk;
	}
	sin.close();
	return 0;
}
