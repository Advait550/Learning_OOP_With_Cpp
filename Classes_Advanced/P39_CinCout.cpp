#include<iostream>
#include<Stdlib.h>
#include<stdio.h>
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
		Result(Result &t)
		{
			rno = t.rno;
			mrk = t.mrk;
		}
		~Result()
		{
			
		}
		
		friend istream & operator >> (istream &in , Result &t)
		{
			cout << "\n Roll No : ";
			in >> t.rno;
			cout << "\n Marks : ";
			in >> t.mrk;
			return in;
		}
		
		friend ostream & operator << (ostream &out , Result &t)
		{
			out << "\n Roll No : " << t.rno << "\n Marks : " << t.mrk;
			return out;
		}
};

int main()
{
	Result d;
	cin >> d;
	cout << d;
	return 0;
}
