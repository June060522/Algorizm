#include <iostream>

using namespace std;

int aArr[100][100];
int bArr[100][100];
int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> aArr[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> bArr[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << aArr[i][j] + bArr[i][j] << ' ';
		}
		cout << endl;
	}

}