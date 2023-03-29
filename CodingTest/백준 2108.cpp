#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int arr[500001];
vector <int> v;
int main()
{
	long long size = 0, iSum = 0, cnt = 1, maxCnt = 0;
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		iSum += arr[i];
	}

	sort(arr, arr + size);

	//1번
	int save1 = round((long double)iSum / (long double)size);
	if (save1 == -0)
		cout << 0 << endl;
	else
		cout << save1 << endl;

	//2번
	cout << arr[size / 2] << endl;
	//3번
	for (int i = 0; i < size; i++)
	{

		if (i == size - 1 || arr[i] != arr[i + 1])
		{
			if (cnt > maxCnt)
			{
				maxCnt = cnt;
				v.clear();
				v.push_back(arr[i]);
			}
			else if (cnt == maxCnt)
			{
				v.push_back(arr[i]);
			}
			cnt = 1;
		}
		else
		{
			cnt++;
		}

	}
	sort(v.begin(), v.end());
	if (v.size() > 1)
		cout << v[1] << endl;
	else
		cout << v[0] << endl;
	//4번
	cout << arr[size - 1] - arr[0];
}