#pragma once
#pragma once
#include <iostream>
template<class T>
class MyTemplate
{
public:
	void hello();
	T add(T num1, T num2);
};

template<class T>
inline void MyTemplate<T>::hello()
{
	std::printf("Hello World\n");
}

template<class T>
inline T MyTemplate<T>::add(T num1, T num2)
{
	return num1 + num2;
}
