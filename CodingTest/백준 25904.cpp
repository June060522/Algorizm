#include <iostream>

using namespace std;

int main()
{
	int person = 0,startHigh = 0;
	cin >> person >> startHigh;
	int* arr = new int[person];
	int idx = 0;
	for (int i = 0; i < person; i++)
	{
		cin >> arr[i];
	}

	while (true)
	{
		if (idx == person)
			idx = 0;
		if (arr[idx] < startHigh)
		{
			cout << ++idx;
			return 0;
		}
		idx++;
		startHigh++;
	}
}