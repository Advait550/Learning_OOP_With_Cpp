#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	cout << "\n Enter Numbers: \n";
	int i = 0 , max , min , x;
	do{
		cin >> x;
		if(i == 0)
			min = max = x;
		else
		{
			if(x > max)
				max = x;
			else
			{
				if(x < min)
					min = x;
			}
		}
		i++;
	}while(i < 10);
	cout << "\n Maximum : " << max << "\n Minimum : " << min;
	return 0;
}
