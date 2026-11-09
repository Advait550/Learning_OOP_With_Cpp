#include<iostream>
#include<stdlib.h>
using namespace std;


//Keyword    type_name

class student
{                                                      // Beg of Class name
	private:
		int no;                                       // Data Members
		char nm[15];         
	public:
		void setData()
		{
			cout << "\n Roll No : ";
			cin >> no;
			cout << "\n Name : ";
			cin >> nm;
		}                                            // Member Functions
		void display()
		{
			cout << "\n Roll No : " << no;
			cout << "\n Name : " << nm;
		}
};                                                  // End of class def 

int main()
{
	student a;
	a.setData();
	a.display();
	return 0;
}
