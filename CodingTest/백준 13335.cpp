#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	queue<int> q;
	vector<int>v;
	int cnt, length, weight, input, totalW = 0, iTime = 0;
	cin >> cnt >> length >> weight;
	for (int i = 0; i < cnt; i++)
	{
		cin >> input;
		v.push_back(input);
	}

	for (int i = 0; i < cnt; i++)
	{
		while (true)
		{
			if (length == q.size())
			{
				totalW -= q.front();
				q.pop();
			}
			if (totalW + v[i] <= weight)
				break;

			q.push(0);
			iTime++;
		}


		q.push(v[i]);
		totalW += v[i];
		iTime++;
	}
	iTime += length;
	cout << iTime;
}