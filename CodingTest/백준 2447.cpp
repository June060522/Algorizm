#include <iostream>

using namespace std;

void PrintStar(int, int, bool);
void Print(int, int, int, bool);
char starArr[10000][10000];
int main()
{
	int n = 0;
	cin >> n;
	int solveN = n;
	int cnt = 0;
	while (solveN != 1)
	{
		solveN /= 3;
		cnt++;
	}

	if (cnt == 1)
	{
		PrintStar(0, 0, true);
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == 1 && j == 1)
					Print(cnt - 1, i * 3, j * 3, false);
				else
					Print(cnt - 1, i * 3, j * 3, true);
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << starArr[i][j];
		}
		cout << endl;
	}
}

void PrintStar(int isize, int jsize, bool b)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((i == 1 && j == 1) || !b)
				starArr[isize + i][jsize + j] = ' ';
			else
				starArr[isize + i][jsize + j] = '*';
		}
	}
}

void Print(int size, int isize, int jsize, bool b)
{
	if (size == 1)
	{
		PrintStar(isize, jsize, b);
		return;
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
				Print(size - 1, isize * 3 + i * 3, jsize * 3 + j * 3, false);
			else
				Print(size - 1, isize * 3 + i * 3, jsize * 3 + j * 3, b);
		}
	}
}