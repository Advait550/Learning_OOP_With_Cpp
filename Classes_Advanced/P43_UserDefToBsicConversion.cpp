#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Result
{
		int no;
		double mrk;
	public:
		Result()
		{
			no = 0;
			mrk = 0.0;
		}
		
		Result (int a , double b)
		{
			no = a;
			mrk = b;
		}
		
		Result (Result &t)
		{
			no = t.no;
			mrk = t.mrk;
		}
	
		~Result()
		{
			
		}
		
		operator int()
		{
			return no;
		}
		
		operator double()
		{
			return mrk;
		}
		
		friend istream & operator >> (istream &in , Result &t)
		{
			cout << "\n Roll No : ";
			in >> t.no;
			cout << "\n Marks : ";
			in >> t.mrk;
			return in;
		}
		
		friend ostream & operator << (ostream &out , Result &t)
		{
			out << "\n Roll No : " << t.no << "\n Marks : " << t.mrk;
			return out;
		}
};

int main()
{
	Result a;
	cin >> a;
	cout << a;
	int b = a;                // Conversion to int i.e. rno will be assigned to b
	double c = a;             // Conversion to double i.e. mrks will be assigned to c
	cout << "\n Roll No : " << b << "\n Marks : " << c;
	return 0;
}
