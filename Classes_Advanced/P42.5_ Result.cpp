#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

class Result
{
		int rno;
		double mrk;
	public:
		Result()
		{
			rno = 0;
			mrk = 0;
		}
		Result(Result &t)
		{
			rno = t.rno;
			mrk = t.mrk;
		}
		~Result(){}
		friend istream & operator >> (istream &in , Result &t)
		{
			cout << "\n Enter Roll No : ";
			in >> t.rno;
			cout << "\n Enter Marks : ";
			in >> t.mrk;
			return in;
		}
		friend ostream & operator << (ostream &out , Result &t)
		{
			out << "\n Roll no : " << t.rno << "\n Marks : " << t.mrk;
			return out;
		}
		int operator > (int n)
		{
			return (mrk > n);
		}
		int operator < (int n)
		{
			return (mrk < n);
		}
		int operator > (Result &t)
		{
			return (rno > t.rno);
		}
		int operator < (Result &t)
		{
			return (rno < t.rno);
		}
		Result operator + (double d)
		{
			Result a;
			a.rno = rno;
			a.mrk += d;
			return a;
		}
		Result operator - (double d)
		{
			Result a;
			a.rno = rno;
			a.mrk -= d;
			return a;
		}
};

//int main()
//{
//	Result r;
//	cin >> r;
//	cout << r;
//	if(r > 13)
//		cout << "\n it is > 13";
//	else
//		cout << "\n it is <= 13";
//	return 0;	
//}

//int main()
//{
//	Result r , s;
//	cin >> r >> s;
//	cout << r << s;
//	if(r > s)
//		cout << r;
//	else
//		cout << s;
//	s = s + 3.2;
//	cout << s;
//	return 0;
//}

// Array of object of type result
//int main()
//{
//	Result *r = new Result[5];
//	for(int i = 0 ; i < 5 ; i++)
//		cin >> r[i];
//	for(int i = 0 ; i < 5 ; i++)
//		cout << r[i];
//	delete [] r;
//}

// Sorting of Array on roll number basis
int main()
{
	Result r[5];
	for(int i = 0 ; i < 5 ; i++)
		cin >> r[i];
	for(int i = 0 ; i < 5 ; i++)
		cout << r[i];
	int j , pos; Result tmp;
	for(int i = 0 ; i < 4 ; i++)
	{
		pos = i;
		for(j = i + 1 ; j < 5 ; j++)
		{
			if(r[j] < r[pos])
				pos = j;
		}
		if(pos != i)
		{
			tmp = r[pos];
			r[pos] = r[i];
			r[i] = tmp;
		}
	}
	for(int i = 0 ; i < 5 ; i++)
		cout << r[i];
	return 0;
}
