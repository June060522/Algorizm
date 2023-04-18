#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	long long a, b;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		cout << a + b << endl;
	}
}