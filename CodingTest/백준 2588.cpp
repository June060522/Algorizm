#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	int C = B;

	for (int i = 0; i < 3; i++)
	{
		cout << A * (B % 10) << endl;
		B /= 10;
	}

	cout << A * C;
}