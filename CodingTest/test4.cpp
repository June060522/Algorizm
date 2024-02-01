#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector < int>v;
	int m, n;
	int input;
	int answer = 0;
	cin >> m >> n;
	for (int i = 0; i < m; ++i)
	{
		cin >> input;
		v.push_back(input);
	}

	for (int j = m - 1; j >= 0; --j)
	{
		while (n >= v[j])
		{
			n -= v[j];
			answer++;
		}
	}
	cout << answer;
}