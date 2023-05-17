#include <iostream>
using namespace std;

int main()
{
	int repeat = 0;
	int a, b, c;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b >> c;
		if (a < b)
			swap(a, b);
		cout << min(b, c) << '\n';
	}
}