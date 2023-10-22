#include <iostream>

using namespace std;

int main()
{
	int* p = new int;
	int* pA = new int[10];
	int* pA2 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	*p = 10;

	delete p;
	delete[] pA;
	delete[] pA2;
}