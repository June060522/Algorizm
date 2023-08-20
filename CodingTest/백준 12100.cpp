#include <iostream>

using namespace std;

int answer = 0;
int n = 0;
int arr[21][21][5][4];



void BackTraking(int n)
{
	if (n == 5)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				answer = max(answer, arr[i][j]);
			}
		}
	}
	else
	{

	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> arr[i][j];
	}

	BackTraking(0);

	cout << answer;
}