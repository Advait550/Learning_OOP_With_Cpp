#include<iostream>
#include<stdlib.h>
#include<iomanip.h>
using namespace std;
int main()
{
	cout << setw(4) << 1234 << " " << setw(15) << setiosflags(ios :: left) << "Kirankumar" << " " <<
			resetiosflags(ios :: left) << setw(6) << setprecision(2) << setfill('#') << 9.28 << setfill('') << endl;
	cout << setw(4) << 6 << " " << setw(15) << setiosflags(ios :: left) << "Deepa" << " " <<
			resetiosflags(ios :: left) << setw(6) << setprecision(2) << 8.63 << endl;
		return 0;
}
