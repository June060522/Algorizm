#include <iostream>
#include <vector>
#include <algorithm>
#include <memory.h>

using namespace std;

long long int answer[100001];
long long int deep[100001];
vector<int> v[100001];
long long int cnt = 1;
void Dfs(int start, int de)
{
	if (answer[start] == 0)
	{
		answer[start] = cnt++;
		deep[start] = de;
		for (int i = 0; i < v[start].size(); i++)
			Dfs(v[start][i], de + 1);
	}
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	long long int size = 0, repeat = 0, start = 0, a, b;
	long long int ianswer = 0;
	cin >> size >> repeat >> start;

	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}

	for (int i = 1; i <= size; i++)
		sort(v[i].begin(), v[i].end());
	Dfs(start, 0);

	for (int i = 1; i <= size; i++)
		ianswer += answer[i] * deep[i];
	cout << ianswer;
}