#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


class Sem1
{
	protected:
		int t1 , t2 , o1;
	public:
		Sem1()
		{
			t1 = t2 = o1 = 0;
		}
		
		~Sem1()
		{
			
		}
		
		void setSem1()
		{
			cout << "\n Theory Marks : ";
			cin >> t1 >> t2;
			cout << "\n Oral Marks : ";
			cin >> o1;
		}
		
		void display()
		{
			cout << "\n Sem1 Theory \n " << t1 << " " << t2;
			cout << "\n Sem1 Oral \n " << o1;
		}
};


class Sem2
{
	protected:
		int t1 , t2 , o1 , o2;
	public:
		Sem2()
		{
			t1 = t2 = o1 = 0;
		}
		
		~Sem2()
		{
			
		}
		
		void setSem2()
		{
			cout << "\n Theory Marks : ";
			cin >> t1 >> t2;
			cout << "\n Oral Marks : ";
			cin >> o1 >> o2;
		}
		
		void display()
		{
			cout << "\n Sem1 Theory \n " << t1 << " " << t2;
			cout << "\n Sem1 Oral \n " << o1 << " " << o2;
		}
};


class Result : public Sem1 , public Sem2
{
	protected:
		int ttot , otot;
	public:
		Result() : Sem1() , Sem2()
		{
			ttot = otot = 0;
		}
		~Result()
		{
			
		}
		
		void setData()
		{
			ttot = Sem1 :: t1 + Sem1 :: t2 + Sem2 :: t1 + Sem2 :: t2;
			otot = Sem1 :: o1 + Sem2 :: o1 + o2;
		}
		
		void display()
		{
			Sem1 :: display();
			Sem2 :: display();
			cout << "\n Theory Total : " << ttot;
			cout << "\n Oral Total : " << otot;
		}
};


int main()
{
	Result r;
	r.setSem1();
	r.Sem1 :: display();
	r.setSem2();
	r.Sem2 :: display();
	r.setData();
	r.display();
	return 0;
}
