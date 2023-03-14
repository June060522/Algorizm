#include <iostream>

using namespace std;

int main()
{
	int inputarr[3] = { 0 };
	int answerarr[3] = { 0 };
	int rank = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> inputarr[i];
	}
	for (int i = 0; i < 3; i++)
	{
		rank = 0;
		for (int j = 0; j < 3; j++)
		{
			if (inputarr[i] > inputarr[j])
				rank++;
		}
		answerarr[rank] = inputarr[i];
	}

	for (int i = 0; i < 3; i++)
		cout << answerarr[i] << " ";
}