#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
	unordered_set<int>s;
	int m, n, k, l;
	for (int i = 0; i < 4; i++)
	{
		cin >> m >> n >> k >> l;
		for (int j = m; j < k; j++)
		{
			for (int o = n; o < l; o++)
			{
				s.insert(j * 1000 + o);
			}
		}
	}
	cout << s.size();
}