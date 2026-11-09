#include<iostream>
#include<stdlib.h>
using namespace std;
 
void repli(char ch , int n = 5)
{
	cout << "\n";
	for(int i = 0 ; i < n ; i++)
		cout << ch;
}

int main()
{
	repli('#');
	repli('>' , 3);
	repli('+' , 7);
	return 0;
}
