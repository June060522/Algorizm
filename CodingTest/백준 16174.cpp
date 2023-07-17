#include<iostream>
using namespace std;

bool visited[65][65];
int zone[65][65];
bool iswin = false;
int zoneSize = 0;

void Dfs(int x, int y)
{
	if (x >= zoneSize || y >= zoneSize || x < 0 || y < 0 || visited[x][y])
		return;

	visited[x][y] = true;

	if (zone[x][y] == -1)
	{
		iswin = true;
		return;
	}

	Dfs(x, y + zone[x][y]);
	Dfs(x + zone[x][y], y);
}

int main()
{
	cin >> zoneSize;
	for (int i = 0; i < zoneSize; i++)
	{
		for (int j = 0; j < zoneSize; j++)
		{
			cin >> zone[i][j];
		}
	}

	Dfs(0, 0);

	if (!iswin)
		cout << "Hing";
	else
		cout << "HaruHaru";
}