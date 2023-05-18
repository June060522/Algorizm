#include <iostream>
#include <list>

using namespace std;

int arr[200001] = { 0 };
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);
	int ncnt;
	int qcnt;
	int fval;
	int input;
	cin >> ncnt >> qcnt >> fval;
	for (int i = 1; i <= ncnt; i++)
	{
		cin >> input;
		arr[i] = input;
	}

	for (int i = 0; i < qcnt; i++)
	{
		cin >> input;
		if (input < ncnt)
		{
			cout << arr[input + 1] << "\n";
		}
		else
		{
			input -= fval - 1;
			input %= ncnt - fval + 1;
			cout << arr[input + fval] << "\n";
		}
	}
}