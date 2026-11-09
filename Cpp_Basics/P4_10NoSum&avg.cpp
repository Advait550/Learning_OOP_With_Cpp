#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout << "\n Enter 10 Numbers: \n";
	int i = 0 , x , tot = 0;
	do{
		cin >> x;
		tot += x;
		i++;
	}while(i < 10);
	cout << "\n Sum Is: " << tot <<"\n Avg Is: " << (tot / 10);
	return 0;
}
