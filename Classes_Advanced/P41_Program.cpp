#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

class Number
{
		int no;
	public:
		Number()
		{
			no = 0;
		}
		Number(int a)
		{
			no = a;
		}
		Number(Number &t)
		{
			no = t.no;
		}
		~Number()
		{
			
		}
		
		friend istream & operator >> (istream &in , Number &t)
		{
			cout << "\n No : ";
			in >> t.no;
			return in;
		}
		
		friend ostream &operator << (ostream &out , Number &t)
		{
			out << "\n No : " << t.no;
			return out;
		}
		
		Number operator + (int a)
		{
			Number t;
			t.no = no + a;
			return t;
		}
		
		Number operator - (int a)
		{
			Number t(no - a);            // 2nd constructor will get used
			return t;
		}
		
		Number operator + (Number &k)
		{
			Number t;
			t.no = no + k.no;      // OR   Number t(no + k.no)
			return t;
		}
		
		Number operator - (Number &k)
		{
			Number t(no - k.no);      
			return t;
		}
		
		void operator - ()
		{
			no = -no;                     // call from main -> -p;
		}
		
		Number operator += (int a)       // p += 3;
		{
			no = no + a;
			return * this;            // since this holds address of an invoking object
		}
		
		Number operator -= (int a)      
		{
			no = no - a;
			return * this;            
		}
		
		Number operator ++ ()                 // pre-increment
		{
			no++;
			return * this;
		}
		
		Number operator -- ()                 // pre-decrement
		{
			no--;
			return * this;
		}
		
		Number operator ++ (int)              // Post Increment
		{
			Number t(no++);                   // Number t ; t = no++
			return t;
		}
};
		
		int main()
		{
			Number p , q , r;
			cin >> p >> q;
			cout << p << q;
			r = p + 3;
			cout << r;
			p += 4;
			cout << p;
			q = ++p;
			cout << p << q;
			q = p++;
			cout << p << q;
			-p;
			cout << p;
			-p;
			cout << p;
			return 0;
		}




