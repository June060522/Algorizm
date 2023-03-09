#include <iostream>

using namespace std;

int main()
{
	int a,b,r = 0;
	cin.tie(NULL);
	std::ios_base::sync_with_stdio(false);
	cin >> r;
	for (int i = 0; i < r; i++)
	{
		cin >> a >> b;
		cout << a + b << "\n";
	}
}