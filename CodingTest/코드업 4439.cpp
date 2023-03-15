#include <iostream>

using namespace std;

int length = 0;
void slide(int, int, int numarr[], bool boolarr[]);
int minvalue = 361;
int input = 0;
int main()
{
	bool arr[21] = { NULL };
	int inputarr[21] = { 0 };
	int index = 0;

	cin >> length;

	for (int i = 0; i < length; i++)
		arr[i] = false;

	for (int i = 0; i < 2; i++)
	{
		cin >> input;
		arr[input - 1] = true;
	}

	cin >> input;

	for (int i = 0; i < input; i++)
	{
		cin >> inputarr[i];
	}
	slide(0, 0, inputarr, arr);

	cout << minvalue;
}

void slide(int index, int cnt, int numarr[], bool boolarr[])
{
	if (index == input)
	{
		if (minvalue > cnt)
			minvalue = cnt;
		return;
	}
	for (int i = 0; i < length; i++)
	{
		if (boolarr[i])
		{
			swap(boolarr[numarr[index] - 1], boolarr[i]);
			slide(index + 1, cnt + ((numarr[index] - (i + 1)) > 0 ? numarr[index] - (i + 1) : (i + 1) - numarr[index]), numarr, boolarr);
			swap(boolarr[numarr[index] - 1], boolarr[i]);
		}
	}

}