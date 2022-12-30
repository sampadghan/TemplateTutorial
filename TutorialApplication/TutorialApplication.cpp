#include <iostream>
#include "MyTemplate.h"
#include "Tcalc.h"
#include "MyClass.h"
#include <stdio.h>
#include <math.h>
#include "Student.h"
#include "FunctionTemplate.h"
int main()
{
	//Class Template Varible
	Tcalc<float> myobj;
	//Class Template Pointer
	Tcalc<float>* ptr = nullptr;
	ptr = &myobj;
	std::cout << myobj.add(10, 10) << std::endl;
	std::cout << myobj.multiply(10, 10) << std::endl;
	std::cout << ptr->add(10, 10) << std::endl;
	std::cout << ptr->multiply(10, 10) << std::endl;

	MyClass<int, float> obj1(10, 20);
	MyClass<int, float>* ptr1 = nullptr;
	ptr1 = &obj1;
	std::cout << obj1.add() << std::endl;
	std::cout << obj1.multiple() << std::endl;
	std::cout << ptr1->add() << std::endl;
	std::cout << ptr1->multiple() << std::endl;

	MyTemplate<int>  myobj1;
	myobj1.hello();
	myobj1.add(20, 20);

	//Dynamic allocation
	MyTemplate<float>* tempPtr = NULL;
	tempPtr = new MyTemplate<float>;
	tempPtr->hello();
	delete tempPtr;
	//tempPtr = NULL;

	MyClass<int, float>* tempPtr1 = NULL;
	tempPtr1 = new MyClass<int, float>(10, 45);
	tempPtr1->multiple();
	delete tempPtr1;

	Student ram = Student();
	ram.getmark();
	ram.getnumber();

	//Function Template
	//max<float>(10, 20);
	std::cout << max<float>(10, 20) << std::endl;
	return 0;
}