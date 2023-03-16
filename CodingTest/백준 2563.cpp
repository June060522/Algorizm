#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int i = 0;
	int j = 0;
	cin >> num;
	bool arr[100][100];

	for (int a = 0; a < 100; a++)
	{
		for (int b = 0; b < 100; b++)
			arr[a][b] = true;
	}

	for (int r = 0; r < num; r++)
	{
		cin >> i >> j;
		for(int k = i; k < i + 10; k++)
		{
			for (int l = j; l < j + 10; l++)
			{
				arr[l-1][k-1] = false;
			}
		}
	}

	int answer = 0;
	for (int k = 0; k < 100; k++)
	{
		for (int l = 0; l < 100; l++)
		{
			if (!arr[k][l])
				answer++;
		}
	}
	cout << answer;
}