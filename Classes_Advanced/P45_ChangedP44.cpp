#include<iostream>
#include<stdlib.h>

using namespace std;

class Result
{
		int rno;
		double avg;
	public:
		Result()
		{
			rno = 0;
			avg = 0.0;
		}
		
		
		Result(int a , double b)
		{
			rno = a;
			avg = b;
		}
		
		Result(Result &t)
		{
			rno = t.rno;
			avg = t.avg;
		}
		
		~Result()
		{
			
		}
		
		void display()
		{
			cout << "\n Roll No : " << rno << "\n Avg : " << avg;
		}
};


class Marks
{
		int rno;
		int mrk[5];
	public:
		Marks();
		~Marks(){
			
		};
		void setData();
		void display();
		int total();
		operator int()
		{
			return rno;
		}
		
		operator double()
		{
			double avg = double(total()) / 5;
			return avg;
		}
		
		operator Result()
		{
			int a = *this;             // Marks to int Type Conversion
			double b = *this;          // Calls Operator double defn
			Result r(a , b);
			return r;
		}
};




Marks :: Marks()
{
	rno = 0;
	for(int i = 0 ; i < 5 ; i++)
		mrk[i] = 0;
}

int Marks :: total()
{
	int i = 1 , tot = mrk[0];
	while(i < 5)
		tot += mrk[i++];
	return tot;
}

void Marks :: setData()
{
	cout << "\n Roll No : ";
	cin >> rno;
	cout << "\n Marks : \n";
	for(int i = 0 ; i < 5 ; i++)
		cin >> mrk[i];
}

void Marks :: display()
{
	cout << "\n Roll No : " << rno;
	cout << "\n Marks \n";
	for(int i = 0 ; i < 5 ; i++)
		cout << " " << mrk[i];
}

int main()
{
	Marks m;
	m.setData();
	m.display();
	Result r;
	r = m;
	r.display();
	return 0;
}
