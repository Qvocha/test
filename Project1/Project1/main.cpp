#include <iostream>
#include "Header.h"

using namespace std;

int mySpace::func(int x)
{
	return x + 5;
}

int main()
{
	cout << mySpace::func(10);
	return 0;
}