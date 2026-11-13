#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


class A
{
		int a;
	public:
		void set()
		{
			cout << "\n A a : ";
			cin >> a;
		}
		
		void display()
		{
			cout << "\n A a : " << a;
		}
};

class B : public A
{
		int b;
	public:
		void set()
		{
			cout << "\n B b : ";
			cin >> b;
		}
		
		void display()
		{
			cout << "\n B b : " << b;
		}
};

class C : public B
{
		int c;
	public:
		void set()
		{
			cout << "\n C c : ";
			cin >> c;
		}
		
		void display()
		{
			cout << "\n C c : " << c;
		}
};

//int main()
//{
//	A obja;
//	obja.set();
//	obja.display();
//	B objb;
//	objb.set();
//	objb.A :: set();
//	objb.A :: display();
//	objb.display();
//	C objc;
//	objc.set();
//	objc.display();
//	return 0;
//}



// Use of Base Pointer to Access Member Functions

int main()
{
	A obja;
	A *aptr = &obja;
	aptr -> set();
	aptr -> display();
	B objb;
	aptr = &objb;
	aptr -> set();
	aptr -> display();
	((B*)aptr) -> set();
	((B*)aptr) -> display();
	C *cptr = new C;
	cptr -> set();
	cptr -> display();
	return 0;
}













                                                      // Theory   //
                                       
//Pointer To Derived Classes : 
//
//	We can use pointers not only to the base objects but also to the objects of derived classes, pointers to object of a base
//	class are type compatible with pointers to object of a derived class. Therefore a single pointer variable can be made to
//	point to objects belonging to derived classes. Consider a multilevel inheritance where A is a base class & B is a derived 
//	class from A, further class C is derived from B. Consider the following declarations,
//	A *aptr;  Pointer to class A
//	 A obja;  base class object
//	 B objb;  Derived Class Object
//	 aptr = &obja   aptr points to obja
//	 
//	 We can make aptr to point ti the object objb as follows,
//	 aptr = &objb;
//	 
//	 This is perfectly valid with CPP because objb is an object derived from class A, However, there is a problem in using aptr
//	 to access public members of the derived class B. Using aptr we can access only those members which are inherited from A
//	 and not the members originally belonging to B, in case member of B has the same name as one of the members of A, then any
//	 reference to that member by aptr will always access the base class member.
//	 
//	 
//	 	Although CPP permits a base pointer to point to any object derived from that base, the pointer can not be directly used
//	to access all the members of the derived class, We may have to use another pointer declared as pointer to the derived type.
//	
//	
//	
//	
//	-> Virtual Functions : 
//	
//		As mentioned earlier, polymorphism refers to the property by which objects belonging to diffrent classes are able to 
//	respond to the same message but on diffrent forms, an essential requirement of polymorphism is therefore the ability to refer 
//	the objects without any regard to their classes. Here we use, the pointer to the base class to refer to all the derived objects
//	but we just discovered that, a base pointer even when it is made to contain an address of a derived class always executes
//	the functions in the base class. The compiler simply ignores the contents of the pointer and chooses the member function
//	that matches the type of the pointer. How do we then achieve polymorphism? It is achieved using what is known as 
//	virtual        
//		
//		When we use the same fn name in the both base and derived classes, the function in base class is declared as virtual
//	using the keyword ,virtual preceding its normal declaration. When a function is made virtual, CPP determines which function
//	to use at run time based on the type of object pointed to by the base pointer, rather than the type of the pointer thus
//	by making the base pointer to point to diffrent objects, we can execute diffrent versions of the virtual functions.
