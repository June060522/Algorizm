#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

bool visited[26][26];
char zone[26][26];
int cnt = 0;
int repeat = 0;
vector<int> v;

void Dfs(int x, int y)
{
	if (
		!visited[x][y] && zone[x][y] == '1')
	{
		cnt++;
		visited[x][y] = true;
		Dfs(x + 1, y);
		Dfs(x, y + 1);
		Dfs(x, y - 1);
		Dfs(x - 1, y);
	}
}

int main()
{
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		for (int j = 0; j < repeat; j++)
		{
			cin >> zone[i][j];
		}
	}

	for (int i = 0; i < repeat; i++)
	{
		for (int j = 0; j < repeat; j++)
		{
			if (!visited[i][j] && zone[i][j] == '1')
			{
				cnt = 1;
				visited[i][j] = true;
				Dfs(i + 1, j);
				Dfs(i, j + 1);
				Dfs(i, j - 1);
				Dfs(i - 1, j);

				v.push_back(cnt);
			}
		}
	}

	sort(v.begin(), v.end());
	cout << v.size() << '\n';
	for (auto i : v)
		cout << i << '\n';
}