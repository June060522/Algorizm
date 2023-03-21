#include <iostream>

using namespace std;

int inputArr[100000];
int maxKg = 0;
void check(int);
void organize(int);
int main()
{
	int cnt = 0;
	cin >> cnt;
	for (int i = 0; i < cnt; i++)
	{
		cin >> inputArr[i];
		organize(i);
	}

	check(0);
	cout << maxKg;
}

void organize(int index)
{
	if (index == 0)
		return;
	if (inputArr[index] > inputArr[index - 1])
	{
		swap(inputArr[index], inputArr[index - 1]);
		organize(index - 1);
	}
}
void check(int cnt)
{
	int sumC = 0;
	if (inputArr[cnt] == NULL)
		return;
	sumC += inputArr[cnt];
	sumC *= cnt + 1;
	if (sumC > maxKg)
	{
		maxKg = sumC;
	}
	check(cnt + 1);
}