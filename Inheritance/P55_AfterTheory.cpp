#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


class A
{
		int a;
	public:
		virtual void set()
		{
			cout << "\n A a : ";
			cin >> a;
		}
		
		virtual void display()
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


int main()
{
	A *aptr;
	A obja;
	aptr = &obja;
	aptr -> set();       
	aptr -> display();              // A's
	B objb;
	aptr = &objb;
	aptr -> set();
	aptr -> display();              // B's
	C objc;
	aptr = &objc;
	aptr-> set();
	aptr -> display();             // C's
	return 0;
	
}


                                           // Theory2//
                                   
//		One imp point to remember is that we must access the virtual functions through use of a pointer declared as a pointer to
//	the base class. Remember, run time polymorphism is achieved only whea a virtual function is accessed through a pointer to the
//	base class.
//	
//	
//	-> Rules for Virtual Functions:
//		When virtual functions are created for implementing late binding we should observe some basic rules that satisfy the 
//	compiler requirements.
//	
//	1. The virtual functions must be the members of some class.
//	2. They can not be static members.
//	3. They are accessed by using object pointers.
//	4. A virtual function can be a friend of another class
//	5. A virtual function in a base class must be defined, even though it may not be used
//	6. The prototypes of the base class versions of a virtual function and all the derived class versions must be identical. If two
//	   functions with the same name have diffrent prototypes, CPP considers them as overloaded functions And the virtual mechanism 
//	   is ignored.
//	7. We can not have virtual constructors but we can have virtual destructors
//	8. While a base pointer can point to any type of the derived object, the reverse is not true i.e. to say we can not use a pointer
//	   to a derived class to access an object of the base type
//	9. When a base pointer points to a derived class, incrementing or decrementing it will not make it to point to the next object of
//	   the derived class. It is incremented or decremented only relative to its base type therefore we should not use this method to
//	   move the pointer to the next object.
//	10. If a virtual function is defined in the base class, it need not be necessarily redefined in the derived class, in such cases
//		false will invoke the base function.




//
//-> Pure Virtual Functions : 
//	It is normal practise to declare, a function virtual inside the base class and redefine it in the derived classes, the function
//	inside the base class teldom(rare) used for performing any task. It only serves as a placeholder. Consider following
//	multilevel inheritance:
//									dim
//									|
//									rect
//									  |
//									trang
//									  |
//									  
//									  
//									  
//	 We have not defined any object of the class dim and therefore the function area in the base class can be defined empty.
//	 Such functions are called do-nothing functions. They may be defined as follow,
//	 
//	 						virtual void area() = 0;
//	 						
//	Such funs are called pure virtual functions. A pure virtual function is a function declared in a class that has no definition
//	relative to the base class. In such cases, the compiler requires each derived class to either define themfunction or 
//	redeclare it as a real virtual function. Remember that a class containing pure virtual functions can not be used to 
//	declare any objects of its own, such classes are called Abstract Base Classes. The main objective of an abstract 
//	is to provide some trades to some derived classes and to create base pointer required for achieving run time polymorphism.
