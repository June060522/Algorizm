#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int answer = 0;
vector<pair<int, int>> v;

int main()
{
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int repeat, input1, input2;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input1 >> input2;
		v.push_back({ input2, input1 });
	}
	sort(v.begin(), v.end());
	int last = 0;
	for (int i = 0; i < repeat; ++i)
	{
		if (v[i].second >= last)
		{
			answer++;
			last = v[i].first;
		}
	}

	cout << answer;
}