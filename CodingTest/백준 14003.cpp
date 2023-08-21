#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int>vec;
int arr[1000001];
int check[1000001];
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int repeat = 0;
	int cnt = 0;
	int imax = 0;
	int savecnt = 0;


	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> arr[i];
		auto iter = lower_bound(vec.begin(), vec.end(), arr[i]) - vec.begin();
		check[i] = iter;
		if (iter + vec.begin() == vec.end())
		{
			vec.push_back(arr[i]);
			cnt++;
		}
		else
		{
			vec[iter] = arr[i];
		}
	}
	cout << cnt << "\n";

	vector<int>ans;
	for (int i = repeat - 1; repeat >= 0; i--)
	{
		if (cnt < 1)
			break;
		if (check[i] == cnt - 1)
		{
			ans.push_back(arr[i]);
			cnt--;
		}
	}
	while (!ans.empty()) {
		cout << ans.back() << " ";
		ans.pop_back();
	}
}