#include<iostream>

using namespace std;
class MyTime
{
		int h , m ,s;
	public:
		MyTime()
		{
			h = m = s = 0;
		}
		MyTime(int a , int b = 0 , int c = 0)
		{
			h = a;
			m = b;
			s = c;
		}
		MyTime(long int d)
		{
			h = d / 3600;
			d = d % 3600;
			m = d / 60;
			s = d % 60;
		}
		MyTime(const MyTime &t)
		{
			h = t.h;
			m = t.m;
			s = t.s;
		}
		~MyTime(){}
		
		int getHr()
		{
			return h;
		}
		int getMn()
		{
			return m;
		}
		int getSs()
		{
			return s;
		}
		
		long int toSeconds()
		{
			return h * 3600l + m * 60 + s;           // l represents as calculated value will be long int
		}
		
		void setTime(long int a)
		{
			h = a / 3600;
			a = a % 3600;
			m = a / 60;
			s = a % 60;
		}
		
		void setTime(int a , int b = 0 , int c = 0)
		{
			h = a;
			m = b;
			s = c;
		}
		
		void setTime(const MyTime &k)
		{
			h = k.h;
			m = k.m;
			s = k.s;
		}
		
		void setTime()
		{
			cout << "\n Hr : " ; 
			cin >> h;
			cout << "\n Mn : " ;
			cin >> m;
			cout << "\n Ss : " ;
			cin >> s;	
		}
		
		MyTime add(MyTime & k)
		{
			long int a = toSeconds();
			long int b = k.toSeconds();
			MyTime c(a + b);              // i.e MyTimr c; c = a + b;
			return c;
		}
		
		MyTime sub( MyTime &t)
		{
			long int a = toSeconds();
			long int b = t.toSeconds();
			long int c = labs(a - b);
			MyTime d(c);
			return d;
		}
		
		void display()
		{
			cout << "\n H : " << h << "\t M : " << m << "\t S : " << s;
		}
		
		int isMore(MyTime &t)
		{
			long int a = toSeconds();
			long int b = t.toSeconds();
			return a > b;
		}
		
		int isLess(MyTime &t)
		{
			long int a = toSeconds();
			long int b = t.toSeconds();
			return a < b;
		}
};

