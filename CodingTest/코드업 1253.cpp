#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int one, two;
	cin >> one >> two;
	if (one > two)
		swap(one, two);
	for (int i = one; i <= two; i++)
		cout << i << " ";
}