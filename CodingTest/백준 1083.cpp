#include <iostream>

using namespace std;

int arr[51];
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int repeat = 0;
	int input = 0;
	int cnt = 0;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		arr[i] = input;
	}
	cin >> cnt;

	while (true)
	{
		//�ΰ� ã�Ƽ� �� ����
		//�ε����� ������ �ֳ�? üũ
		for (int i = 0; i < repeat; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				swap(arr[i], arr[i + 1]);
				cnt--;
				break;
			}
			if (i == repeat - 1)
				cnt = 0;
		}

		if (cnt == 0)
			break;
	}

	for (int i = 0; i < repeat; i++)
	{
		cout << arr[i] << " ";
	}
}