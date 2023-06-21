#include<iostream>
using namespace std;

int main()
{
	int num, idx;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> idx;
		for (int j = 0; j < idx; j++)
		{
			cout << "=";
		}
		cout << '\n';
	}
}