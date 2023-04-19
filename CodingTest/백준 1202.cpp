#include <iostream>
#include <queue>
#include <set>
using namespace std;
priority_queue<pair<long long int, long long int>> jells;
multiset<long long int>v;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	long long int n, k;
	long long int a, b, limitW;
	long long int maxVal = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		jells.push(make_pair(b, a));
	}
	for (int i = 0; i < k; i++)
	{
		cin >> limitW;
		v.insert(limitW);
	}

	for (int i = 0; i < k; i++)
	{
		if (v.size() == 0|| jells.empty())
			break;
		if (jells.top().second <= *v.lower_bound(jells.top().second))
		{
			v.erase(v.lower_bound(jells.top().second));
			maxVal += jells.top().first;
		}
		else
			i--;

		jells.pop();
	}

	cout << maxVal;
}