#include <iostream>
#include <math.h>
#include <stack>
using namespace std;

int num[1001];
int Dp[1001];
int Dp2[1001];
int answer = 0;
int main()
{
	stack<int> s;
	int save = 0;
	int n = 0;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		Dp[i] = 1;
		Dp2[i] = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j < i; j++)
		{
			if (num[i] > num[j])
			{
				if (Dp[i] < Dp[j] + 1)
				{
					Dp[i] = Dp[j] + 1;
					Dp2[i] = j;
				}

			}
		}
		if (Dp[i] > answer)
		{
			answer = Dp[i];
			save = i;
		}
	}

	cout << answer << '\n';
	s.push(num[save]);
	while (num[Dp2[save]] != 0)
	{
		s.push(num[Dp2[save]]);
		save = Dp2[save];
	}

	while (!s.empty())
	{
		cout << s.top() << " "; s.pop();
	}
}