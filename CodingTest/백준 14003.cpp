#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;
vector<int>vec;
vector<pair<int, int>>answer;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int repeat = 0;
	int cnt = 0;
	int imax = 0;
	int input = 0;
	int savecnt = 0;


	cin >> repeat;
	vec.push_back(-1000000001);
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input > vec.back())
		{
			vec.push_back(input);
			cnt++;
			answer.push_back(make_pair(input, i));
		}
		else
		{
			pair<int, int> p = make_pair(input, i);
			vector<int>::iterator iter = lower_bound(vec.begin(), vec.end(), input);
			*iter = input;
			vector<pair<int, int>>::iterator iters = lower_bound(answer.begin(), answer.end(), p);
			if ((iters == answer.end() || p.second < (iters + 1)->second) &&
				(iters == answer.begin() || p.second > (iters - 1)->second))
				*iters = p;
		}
	}
	cout << cnt << "\n";

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i].first << " ";
}