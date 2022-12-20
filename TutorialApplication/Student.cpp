#include "Student.h"

Student::Student()
{
	this->marks = 0;
	this->numbers = 0;
}
int Student::getnumber()
{
	return this->numbers;
}

int Student::getmark()
{
	return this->marks;
}
