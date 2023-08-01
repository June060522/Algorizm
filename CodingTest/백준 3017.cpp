#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool visited[61];
char input2Arr[61];
bool complete = false;
string input1, input2, answer;
void BackTrackingUp(string& a, int idx)
{
	if (complete || a < input1)
		return;
	if (idx >= input1.length())
	{
		complete = true;
		return;
	}
	else
	{
		for (int i = 0; i < input2.length(); ++i)
		{
			if (visited[i] || (idx == 0 && input2Arr[i] == '0'))continue;
			visited[i] = true;
			a[idx] = input2Arr[i];
			BackTrackingUp(a, idx + 1);
			if (complete)
				return;
			visited[i] = false;
		}
	}
}

void BackTrackingDown(string& a, int idx)
{
	if (complete || a >= input1)
		return;

	if (idx >= input1.length())
	{
		complete = true;
		return;
	}
	else
	{
		for (int i = input2.length() - 1; i >= 0; --i)
		{
			if (visited[i] || (idx == 0 && input2Arr[i] == '0'))continue;
			visited[i] = true;
			a[idx] = input2Arr[i];
			BackTrackingDown(a, idx + 1);
			if (complete)
				return;
			visited[i] = false;
		}
	}
}

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	cin >> input1 >> input2;

	for (int i = 0; i < input2.length(); i++)
	{
		input2Arr[i] = input2[i];
	}

	sort(input2Arr, input2Arr + input2.length());

	for (int i = 0; i < input1.length(); i++)
		answer += '9';
	BackTrackingUp(answer, 0);
	if (!complete)
		answer = "0";
	complete = false;
	cout << answer << '\n';
	answer = "";

	fill(visited, visited + 61, false);

	for (int i = 0; i < input1.length(); i++)
		answer += '0';
	BackTrackingDown(answer, 0);
	if (!complete)
		answer = "0";
	cout << answer;
}