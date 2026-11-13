#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define N 5
using namespace std;

class Array
{
	protected:
		int arr[N];
	public:
		Array();
		~Array()
		{
			
		}
		void setData();
		void display();
};

Array :: Array()
{
	for(int i = 0 ; i < N ; i++)
		arr[i] = 0;
}

void Array :: setData()
{
	cout << "\n Data : \n";
	for(int i = 0 ; i < N ; i++)
		cin >> arr[i];
}

void Array :: display()
{
	cout << "\n Data : \n";
	for(int i = 0 ; i < N ; i++)
		cout << " " << arr[i];
}

class Search : public Array
{
	public:
		Search() : Array()
		{
			
		}
		~Search()
		{
			
		}
		int isordered();
		int bsearch(int sv);
		int ssearch(int sv);
};

int Search :: isordered()
{
	int i;
	for(i = 1 ; i < N ; i++)
	{
		if(arr[i] < arr[i - 1])
			break;
	}
	if(i == 1)
		return 1;
	else
		return 0;
}

int Search :: ssearch(int sv)
{
	int i = 0;
	while(i < N)
	{
		if(arr[i] == sv)
			break;
		i++;
	}
	if(i == N)
		return 0;
	else
		return 1;
}

int Search :: bsearch(int sv)
{
	if(isordered() == 0)
		return 0;
	int l = 0 , r = N - 1 , mid;
	do
	{
		mid = (l + r) / 2;
		if(arr[mid] == sv)
			break;
		if(sv < arr[mid])
			r = mid - 1;
		else
			l = mid + 1;
	}while(l <= r);
	if(l <= r)
		return 1;
	else
		return 0;
}


class Sort : public Array
{
	public:
		Sort().Array()
		{
			
		}
		~Sort()
		{
			
		}
		void ssort();
		void bsort();
};

void Sort :: ssort()
{
	int i = 0 , j , pos , tmp;
	while(i < N - 1)
	{
		pos = i;
		for(j = i + 1 ; j < N ; j++)
		{
			if(arr[j] < arr[pos])
				pos = j;
		}
		if(i != pos)
		{
			tmp = arr[i];
			arr[i] = arr[pos];
			arr[pos] = tmp;
		}
		i++;
	}
}


void Sort :: bsort()
{
	int i = 0 , j , tmp;
	for(i = 0 ; i < N - 1 ; i++)
	{
		for(j = 0 ; j < N - i - 1 ; j++)
		{
			if(arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}



int main()
{
	Search p;
	int res;
	p.setData();
	p.display();
	int flg = p.isordered();
	if(flg == 1)
		res = p.bsearch(42);
	else
		res = p.ssearch(42);
	if(res == 1)
		cout << "\n Found.";
	else
		cout << "\n Not Found.";
	Sort q;
	q.setData();
	q.display();
	q.ssort();
	q.display();
	return 0;
}
