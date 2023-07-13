#include<iostream>
#include <algorithm>

using namespace std;

int arr[9];
int num[9];
bool isVisit[9];
int answer = 1000000;
int minVal;
void backTraking(int n, int cnt)
{
	if (n == cnt)
	{
		int save = 0;
		for (int i = 0; i < cnt; i++)
		{
			save = save * 10 + arr[i];
		}
		if (save < answer && save > minVal)
			answer = save;
		return;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			if (isVisit[i] == true) continue;
			arr[cnt] = num[i];
			isVisit[i] = true;
			backTraking(n, cnt + 1);
			isVisit[i] = false;
		}
	}
}

int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		num[i] = s[i] - '0';
		minVal = minVal * 10 + num[i];
	}
	sort(num, num + s.length());

	backTraking(s.length(), 0);

	if (answer == 1000000)
		cout << 0;
	else
		cout << answer;
}