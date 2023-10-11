#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];
vector<int> answer[11];

void setTree(int start, int end, int deep)
{
	if (deep == n)
		return;
	int mid = (start + end) / 2;
	answer[deep].push_back(arr[mid]);
	setTree(start, mid - 1, deep + 1);
	setTree(mid + 1, end, deep + 1);
}

int main()
{
	cin >> n;
	int repeat = 1;
	for (int i = 1; i < n; i++)
		repeat += repeat + 1;

	int input;
	for (int i = 1; i <= repeat; i++)
	{
		cin >> arr[i];
	}
	setTree(1, repeat, 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < answer[i].size(); j++)
			cout << answer[i][j] << " ";

		cout << '\n';
	}
}