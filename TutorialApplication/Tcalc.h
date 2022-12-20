#pragma once
template <class A_Type>
class Tcalc
{
private:
public:
	A_Type multiply(A_Type x, A_Type y)
	{
		return x * y;
	}
	A_Type add(A_Type x, A_Type y)
	{
		return x + y;
	}
};