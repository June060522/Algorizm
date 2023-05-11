#include <iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		cout << i << " ";
		if (i % 6 == 0)
			cout << "Go! ";
	}
	if(num % 6 != 0)
	cout << "Go! ";
}