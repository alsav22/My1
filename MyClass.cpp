#include "MyClass.h"
#include <iostream>

MyClass::~MyClass()
{
}

void MyClass::show()
{
	std::cout << "x = " << x << std::endl;
}
