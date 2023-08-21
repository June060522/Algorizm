#include <iostream>
#include <queue>
#include <cmath>

int LCS[1001][1001];

using namespace std;

int main()
{
	string a, b,c;
	a += '0';
	b += '0';
	cin >> c;
	a += c;
	cin >> c;
	b += c;


	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j < b.length(); j++)
		{
			if (i == 0 || j == 0)
			{
				LCS[i][j] = 0;
				continue;
			}

			if (a[i] == b[j])
			{
				LCS[i][j] = LCS[i - 1][j - 1] + 1;
			}
			else
			{
				LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
			}
		}
	}

	cout << LCS[a.length() - 1][b.length() - 1];
}