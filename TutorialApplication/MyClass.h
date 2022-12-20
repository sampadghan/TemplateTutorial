#pragma once
// multiple Parameter
template <class T1, class T2>
class MyClass
{
private:
	T1 num1;
	T2 num2;

public:
	MyClass()
	{
		this->num1 = 0;
		this->num2 = 0;
	}
	MyClass(T1 num1, T2 num2)
	{
		this->num1 = num1;
		this->num2 = num2;
	}
	auto multiple()
	{
		return num1 * num2;
	}
	auto add()
	{
		return num1 + num2;
	}
};
