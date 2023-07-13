#include<iostream>
#include <algorithm>

using namespace std;

int num[21];
bool isVisit[21];
int answer = 0;
int goal = 0;
void backTraking(int n, int cnt, int nowSum, int k)
{
	if (nowSum == goal && cnt > 0)
		answer++;

	if (n == cnt)
	{
		return;
	}


	for (int i = k; i < n; i++)
	{
		nowSum += num[i];
		backTraking(n, cnt + 1, nowSum, i + 1);
		nowSum -= num[i];
	}
}

int main()
{
	int n;
	cin >> n >> goal;

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	backTraking(n, 0, 0, 0);
	cout << answer;
}