#include <iostream>
#include "Header.h"

int mySpace::func(int x)
{
	return x + 10;
}

int main()
{
	std::cout << mySpace::func(5);
	return 0;
}