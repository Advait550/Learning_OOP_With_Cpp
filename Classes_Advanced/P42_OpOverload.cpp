#include<stdio.h>
#include<iostream>
#include<stdlib.h>

using namespace std;

class Result
{
		int rno;
		double mrk;
	public:
		Result()
		{
			rno = 0;
			mrk = 0.0;
		}
		
		Result(Result &k)
		{
			rno = k.rno;
			mrk = k.mrk;
		}
		
		~Result()
		{
			
		}
		
		friend istream & operator >> (istream &in , Result &k)
		{
			cout << "\n Roll No : ";
			in >> k.rno;
			cout << "\n Marks : ";
			in >> k.mrk;
			return in;
		}
		
		friend ostream & operator << (ostream &out , Result &k)
		{
			out << "\n Roll No : " << k.rno << "\n Marks : " << k.mrk;
			return out;
		}
		
		int operator > (int n)
		{
			return (rno > n);
		}
		
		int operator < (int n)
		{
			return (rno < n);
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
			a.mrk = mrk + d;
			return a;
		}
		
		Result operator - (double d)
		{
			Result a;
			a.rno = rno;
			a.mrk = mrk - d;
			return a;
		}
};


//int main()
//{
//	Result r;
//	cin >> r;
//	cout << r;
//	if(r > 13)
//		cout << "\n r > 13";
//	else
//		cout << "\n r < 13";
//return 0;
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



// Array of Objects of Type Result
//int main()
//{
//	Result *r = new Result [5];
//	for(int i = 0 ; i < 5 ; i++)
//		cin >> r[i];
//	for(int i = 0 ; i < 5 ; i++)
//		cout << r[i];
//	delete [] r;
//	return 0;
//}


//Sorting of Array on Roll No Basis (Selection Sort)
int main()
{
	Result r[5];
	for(int i = 0 ; i < 5 ; i++)
		cin >> r[i];
	for(int i = 0 ; i < 5 ; i++)
		cout << r[i];
	int pos , j;
	Result tmp;
	for(int i = 0 ; i < 4 ; i++)
	{
		pos = i;
		for(j = i + 1 ; j < 5 ; j++)
		{
			if(r[j] < r[pos])
			{
				pos = j;
			}
		}
		if(pos != i)
		{
			tmp = r[i];
			r[i] = r[pos];
			r[pos] = tmp;
		}
	}
	cout << "\n\n After Sorting by Roll No : ";
	for(int i = 0 ; i < 5 ; i++)
		cout << r[i];
	return 0;
}
