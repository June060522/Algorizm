#include <iostream>

using namespace std;

int main()
{
	int total, cnt, a, b, sum = 0;
	cin >> total >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> a >> b;
		sum += a * b;
	}

	if (total == sum)
		cout << "Yes";
	else
		cout << "No";
}