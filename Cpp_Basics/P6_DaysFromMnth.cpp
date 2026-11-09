#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout << "\n Enter Month Number : ";
	int mno , days;
	cin >> mno;
	if(mno < 1 || mno > 12)
		cout << "\n Invalid Month Number.";
	else
	{
		switch(mno)
		{
			case 2:
				days = 28; break;
			case 4:
			case 6:
			case 9:
			case 11:
				days = 30; break;
			default:
				days = 31; break;
		}
		cout << "\n Days: " << days ;
	}
	return 0;
}
