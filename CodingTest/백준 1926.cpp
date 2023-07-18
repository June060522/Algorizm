#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char zone[502][502];
bool visited[502][502];
vector<int> pictureSize;
int iSize = 0;
int m, n;

void DFS(int x, int y)
{
	if (x >= 0 && y >= 0 && x < m && y < n && !visited[x][y] && zone[x][y] == '1')
	{
		visited[x][y] = true;
		iSize++;
		DFS(x + 1, y);
		DFS(x - 1, y);
		DFS(x, y + 1);
		DFS(x, y - 1);
	}
}

int main()
{
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> zone[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!visited[i][j] && zone[i][j] == '1')
			{
				visited[i][j] = true;
				iSize = 1;
				DFS(i + 1, j);
				DFS(i - 1, j);
				DFS(i, j + 1);
				DFS(i, j - 1);
				pictureSize.push_back(iSize);
			}
		}
	}

	sort(pictureSize.begin(), pictureSize.end(), greater<>());

	cout << pictureSize.size() << '\n';
	if (pictureSize.empty())
		cout << 0;
	else
		cout << pictureSize.front();
}