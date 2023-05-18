#include <iostream>
using namespace std;

int main()
{
	int people,price,sum = 0;
	cin >> people >> price;
	int* arr = new int[people];
	for (int i = 0; i < people; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	for(int i = 0; i < people; i++)
		cout << price / sum * arr[i] << '\n';
}