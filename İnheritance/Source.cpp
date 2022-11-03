#include <iostream>
using namespace std;

//Single Inheritance
//Only One Class Derived From One Base Class.

//Single Inheritance Syntax
//class A   // base class
//{
//    ..........
//};
//class B : acess_specifier A   // derived class
//{
//    ...........
//};

//Example :
class Base {
public:
	int a;
	void FirstData() {
		cout << "Enter a : ";
		cin >> a;
	}
};

class Derive : public Base {
	int b;
public:
	void SecondData() {
		cout << "Enter b : ";
		cin >> b;
	}
	void Sum() {
		cout << "Sum of numbers = " << a + b;
	}
};

void main() {
	Derive sum;
	sum.FirstData();
	sum.SecondData();
	sum.Sum();
}



//Multilevel inheritance
//One Class Derived From One Base Class. Other Derived Class
//Derived From First Derived Class.

//Multilevel Inheritance Syntax
//class A   // base class
//{
//    ..........
//};
//class B : acess_specifier A   // derived class
//{
//    ...........
//};
//class C : acces_specifier B   //derived class
//{
//	  ...........
//};

//Exapmle : 
class A {
public:
	A() {
		//Base Class Constructor
	}
};

class B : public A {
public:
	B() {
		//Derived Class Constructor
	}
};

class C : public B {
public:
	C() {
		//Derived Class Constructor
	}
};

void main() {
	C object;
}



//Multiple inheritance
//One Derived Class Derived From Two Or More Base Classes.

//Multiple inheritance Syntax
//class A   // base class
//{
//    ..........
//};
//class B : // base class
//{
//    ...........
//};
//class C : acces_specifier A, acces_specifier B   //derived class
//{
//	  ...........
//};

//Example :
class A {
public:
	A() {
		cout << "A" << endl;
	}
};

class B {
public:
	B() {
		cout << "B" << endl;
	}
};

class Derived : public A,public B{

};

void main() {
	Derived multiple;
}



//Hierarchical inheritance
//Two Or More Than Derived Classes Derived From One Base Class.

//Hierarchical inheritance Syntax
//class base_class {
//	... .. ...
//};
//
//class first_derived_class : public base_class {
//	... .. ...
//};
//
//class second_derived_class : public base_class {
//	... .. ...
//};
//
//class third_derived_class : public base_class {
//	... .. ...
//};

//Example : 
class Basee {
public:
	Basee() {
		cout<<"Base Class!!!" << endl;
	}
};

class Derived1 : public Basee {
public:
	Derived1() {
		cout << "1st Derived Class!!!" << endl;
	}
};

class Derived2 : public Basee {
public:
	Derived2() {
		cout << "2nd Derived Class!!!" << endl;
	}
};

void main() {
	Derived1 object1;
	Derived2 object2;
}
