#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	vector<int> v;
	int repeat = 0, input,cnt = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());

	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		bool isComplete = false;
		int start = 0, end = v.size() - 1,mid;
		cin >> input;
		while (start <= end)
		{
			mid = (start + end) / 2;
			if (v[mid] == input)
			{
				cout << 1;
				isComplete = true;
				break;
			}
			else if (v[mid] < input)
				start = mid + 1;
			else
				end = mid - 1;
			
		}
		if (!isComplete)
			cout << 0;

		cout << '\n';
	}
}