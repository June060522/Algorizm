#include <iostream>

using namespace std;

int main()
{
	int cnt;
	float sum = 0.0, max = 0;
	cin >> cnt;

	float arr[cnt];//백준에서는 댐 

	for (int i = 0; i < cnt; i++)
	{
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
	}

	for (int i = 0; i < cnt; i++)
	{
		sum += arr[i] / max * 100;
	}
	cout << sum / cnt;
}