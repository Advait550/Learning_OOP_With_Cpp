#include<iostream>
using namespace std;




class Stu
{
		int no;
		char nm[15];
		int mrk;
	public:
		Stu()
		{
			no = mrk = 0;
			nm[0] = '\0';
		}
		~Stu()
		{
			
		}
		void setData(int a)
		{
			no = a;
			cout << "\n Name : ";
			cin >> nm;
			cout << "\n Marks : ";
			cin >> mrk;
		}
		void display()
		{
			cout << "\n Roll No : " << no << "\n Name : " << nm << "\n Marks : " << mrk;
		}
		int getNo()
		{
			return no;
		}
		int getMarks()
		{
			return mrk;
		}
};
