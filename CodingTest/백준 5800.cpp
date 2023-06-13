#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int repeat, inputrepeat,input,cha, save;
	cin >> repeat;
	for (int i = 1; i <= repeat; i++)
	{
		int arr[51];
		cha = 0;
		cout << "Class " << i << '\n';
		cin >> inputrepeat;
		for (int j = 0; j < inputrepeat; j++)
		{
			cin >> input;
			arr[j] = input;
		}
		sort(arr, arr + inputrepeat);
		cout << "Max " << arr[inputrepeat - 1];
		cout << ", Min " << arr[0];
		for (int j = 0; j < inputrepeat - 1; j++)
		{
			save = arr[j + 1] - arr[j];
			if (save > cha)
				cha = save;
		}
		cout << ", Largest gap " << cha << '\n';
	}
}