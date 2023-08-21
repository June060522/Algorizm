#include<iostream>
#include <queue>

using namespace std;

int n;
int answer;

int graph[100001];
int isVisted[100001] = { 0 };

void Dfs(int start)
{
	if (isVisted[start] == 0) return;

}

int main()
{
	int repeat = 0;
	int Input;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> n;
		answer = n;
		for (int j = 1; j <= n; j++)
		{
			cin >> Input;
			graph[i] = Input;
		}

		for (int j = 1; j <= n; j++)
			Dfs(j);

		cout << answer;
	}
}