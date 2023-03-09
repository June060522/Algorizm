#include <iostream>

using namespace std;

int main()
{
	int a,b,r = 0;
	cin >> r;

	for (int i = 1; i <= r; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << endl;
	}
}