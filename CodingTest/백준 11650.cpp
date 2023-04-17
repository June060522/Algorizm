#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int,int>> p;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int repeat = 0;
	cin >> repeat;
	int num, num1;
	for (int i = 0; i < repeat; i++)
	{
		cin >> num >> num1;
		p.push_back({ num,num1 });
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < repeat; i++)
		cout << p[i].first << " " << p[i].second << '\n';
}