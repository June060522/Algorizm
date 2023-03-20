#include <iostream>

using namespace std;

int repeat = 0;
int doorCnt = 0;
int inputArr[21];
int minValue = 361;
void Slide(int, int, int, int);
int solve(int, int);
int main()
{
	int openDoor1, openDoor2;

	cin >> doorCnt >> openDoor1 >> openDoor2 >> repeat;

	for (int i = 0; i < repeat; i++)
		cin >> inputArr[i];

	Slide(openDoor1, openDoor2, 0, 0);
	cout << minValue;
}

void Slide(int openDoor1, int openDoor2, int idx, int cnt)
{
	//종료조건
	if (cnt > minValue)
		return;
	if (idx >= repeat)
	{
		if (cnt < minValue)
		{
			minValue = cnt;
		}
		return;
	}

	Slide(openDoor1, inputArr[idx], idx + 1,cnt + solve(inputArr[idx], openDoor2));
	Slide(inputArr[idx], openDoor2, idx + 1,cnt + solve(inputArr[idx], openDoor1));
}

int solve(int a, int b)
{
	if (a > b)
		return a - b;
	else
		return b - a;
}