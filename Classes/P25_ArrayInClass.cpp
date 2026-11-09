#include<iostream>
#include<stdlib.h>
using namespace std;

class Result
{
		int rno;
		int mrk[5];
	public:
		void init();
		void setData(int);
		void setData();
		void setMarks();
		void display();
		int total();
		int avg();
		
		int getNo()
		{
			return rno;
		}
		
		int equals(int no)
		{
			return (rno == no);
		}
		
		int isMore(Result &t)
		{
			return (total() > t.total());
		}
};

void Result :: init()
{
	rno = 0;
	for(int i = 0 ; i < 5 ; i++)
		mrk[i] = 0;
}

int Result :: total()
{
	int i = 1 , tot = mrk[0];
	while(i < 5)
	{
		tot += mrk[i];
		i++;
	}
	return tot;
}

int Result :: avg()
{
	return total() / 5;
}

void Result :: display()
{
	cout << "\n Roll NO : " << rno;
	cout << "\n Marks :  ";
	for(int i = 0 ; i < 5 ; i++)
		cout << "  " << mrk[i];
	cout << "\n Total : " << total();
	cout << "\n Average : " << avg();
}

void Result :: setMarks()
{
	cout << "\n Marks : \n";
	for(int i = 0 ; i < 5 ; i++)
		cin >> mrk[i];
}

void Result :: setData(int n)
{
	rno = n;
	setMarks();
}

void Result :: setData()
{
	cout << "\n Roll No : ";
	cin >> rno;
	setMarks();
}

int main()
{
	Result d , p;
	d.setData(101);
	d.display();
	p.setData();
	p.display();
	if(d.equals(101))
		cout << "\n Found";
	else
		cout << "\n Not Found";
	if(d.isMore(p))
		cout << "\n d is at Top";
	else
		cout << "\n p is at Top";
	return 0;
}
