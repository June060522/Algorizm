#include <iostream>
#include <cmath>

using namespace std;

int answer = 2;
int gameSize = 0;
int arr[21][21][11];

bool checkUp(int n)
{
	for (int i = 1; i < gameSize; i++)
	{
		for (int j = 1; j <= gameSize; j++)
		{
			if (arr[i][j][n] == arr[i + 1][j][n] || arr[i + 1][j][n] == 0)
				return true;
		}
	}
	return false;
}

bool checkDown(int n)
{
	for (int i = 2; i <= gameSize; i++)
	{
		for (int j = 1; j <= gameSize; j++)
		{
			if (arr[i][j][n] == arr[i - 1][j][n] || arr[i - 1][j][n] == 0)
				return true;
		}
	}
	return false;
}

bool checkLeft(int n)
{
	for (int i = 1; i <= gameSize; i++)
	{
		for (int j = 2; j <= gameSize; j++)
		{
			if (arr[i][j][n] == arr[i][j - 1][n] || arr[i][j - 1][n] == 0)
				return true;
		}
	}
	return false;
}

bool checkRight(int n)
{
	for (int i = 1; i <= gameSize; i++)
	{
		for (int j = 1; j < gameSize; j++)
		{
			if (arr[i][j][n] == arr[i][j + 1][n] || arr[i][j + 1][n] == 0)
				return true;
		}
	}
	return false;
}

void moveDown(int n)
{
	int lastMerge;
	int idx;
	for (int j = 1; j <= gameSize; j++)
	{
		lastMerge = gameSize + 1;
		for (int i = gameSize - 1; i >= 1; i--)
		{
			idx = i;
			while (idx <= gameSize - 1)
			{
				if (arr[idx][j][n] == arr[idx + 1][j][n] && arr[idx + 1][j][n] != 0 && lastMerge > idx + 1)
				{
					lastMerge = idx + 1;
					arr[idx + 1][j][n] += arr[idx][j][n];
					arr[idx][j][n] = 0;
					idx++;
				}
				else if (arr[idx + 1][j][n] == 0)
				{
					arr[idx + 1][j][n] = arr[idx][j][n];
					arr[idx][j][n] = 0;
					idx++;
				}
				else
					break;
			}
		}
	}
}

void moveUp(int n)
{
	int lastMerge;
	int idx;
	for (int j = 1; j <= gameSize; j++)
	{
		lastMerge = 0;
		for (int i = 2; i <= gameSize; i++)
		{
			idx = i;
			while (idx >= 2)
			{
				if (arr[idx][j][n] == arr[idx - 1][j][n] && arr[idx - 1][j][n] != 0 && idx - 1 > lastMerge)
				{
					lastMerge = idx - 1;
					arr[idx - 1][j][n] += arr[idx][j][n];
					arr[idx][j][n] = 0;
					idx--;
				}
				else if (arr[idx - 1][j][n] == 0)
				{
					arr[idx - 1][j][n] = arr[idx][j][n];
					arr[idx][j][n] = 0;
					idx--;
				}
				else
					break;
			}
		}
	}
}

void moveLeft(int n)
{
	int lastMerge;
	int idx;
	for (int i = 1; i <= gameSize; i++)
	{
		lastMerge = 0;
		for (int j = 2; j <= gameSize; j++)
		{
			idx = j;
			while (idx >= 2)
			{
				if (arr[i][idx][n] == arr[i][idx - 1][n] && arr[i][idx - 1][n] != 0 && idx - 1 > lastMerge)
				{
					lastMerge = idx - 1;
					arr[i][idx - 1][n] += arr[i][idx][n];
					arr[i][idx][n] = 0;
					idx--;
				}
				else if (arr[i][idx - 1][n] == 0)
				{
					arr[i][idx - 1][n] = arr[i][idx][n];
					arr[i][idx][n] = 0;
					idx--;
				}
				else
					break;
			}
		}
	}
}

void moveRight(int n)
{
	int lastMerge;
	int idx;
	for (int i = 1; i <= gameSize; i++)
	{
		lastMerge = gameSize + 1;
		for (int j = gameSize - 1; j >= 1; j--)
		{
			idx = j;
			while (idx <= gameSize - 1)
			{
				if (arr[i][idx][n] == arr[i][idx + 1][n] && arr[i][idx + 1][n] != 0 && lastMerge > idx+1)
				{
					lastMerge = idx + 1;
					arr[i][idx + 1][n] += arr[i][idx][n];
					arr[i][idx][n] = 0;
					idx++;
				}
				else if (arr[i][idx + 1][n] == 0)
				{
					arr[i][idx + 1][n] = arr[i][idx][n];
					arr[i][idx][n] = 0;
					idx++;
				}
				else
					break;
			}
		}
	}
}

void Copy(int n)
{
	for (int i = 1; i <= gameSize; i++)
	{
		for (int j = 1; j <= gameSize; j++)
		{
			arr[i][j][n] = arr[i][j][n - 1];
		}
	}
}

void Print(int n)
{
	for (int i = 1; i <= gameSize; i++)
	{
		for (int j = 1; j <= gameSize; j++)
		{
			cout << arr[i][j][n] << " ";
		}
		cout << '\n';
	}
	cout << '\n' << '\n';
}

void BackTraking(int n)
{
	if (n == 11)
	{
		for (int i = 1; i <= gameSize; i++)
		{
			for (int j = 1; j <= gameSize; j++)
			{
				answer = max(answer, arr[i][j][5]);
			}
		}
	}
	else
	{
		//if (checkUp(n - 1))
		{
			Copy(n);
			moveUp(n);
			BackTraking(n + 1);
		}

		//if (checkDown(n - 1))
		{
			Copy(n);
			moveDown(n);
			BackTraking(n + 1);
		}

		//if (checkLeft(n - 1))
		{
			Copy(n);
			moveLeft(n);
			BackTraking(n + 1);
		}

		//if (checkRight(n - 1))
		{
			Copy(n);
			moveRight(n);
			BackTraking(n + 1);
		}
	}
}

int main()
{
	cin >> gameSize;
	for (int i = 1; i <= gameSize; i++)
	{
		for (int j = 1; j <= gameSize; j++)
		{
			cin >> arr[i][j][0];
			answer = max(answer, arr[i][j][0]);
		}
	}
	BackTraking(1);

	cout << answer;
}
