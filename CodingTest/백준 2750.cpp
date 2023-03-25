#include <iostream>

using namespace std;

int arr[1000];
void F(int[],int);
int main()
{
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> arr[i];
		F(arr, i);
	}

	for (int i = 0; i < repeat; i++)
		cout << arr[i] << "\n";
}

void F(int arr[],int idx)
{
	if (idx == 0)
		return;
	if (arr[idx] < arr[idx - 1])
	{
		swap(arr[idx], arr[idx - 1]);
		F(arr, idx - 1);
	}
}