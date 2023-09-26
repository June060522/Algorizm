#include<iostream>
using namespace std;

int main()
{
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		int n, m, a, b;
		cin >> n >> m;
		for (int j = 0; j < m; j++)
		{
			cin >> a >> b;
		}
		cout << n - 1 << '\n';
	}
}