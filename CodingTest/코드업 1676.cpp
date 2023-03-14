#include <iostream>

using namespace std;

int main()
{
	int cnt = 0;
	cin >> cnt;
	int rank = 0;
	int* company = new int[cnt];

	for (int i = 0; i < cnt; i++)
	{
		cin >> company[i];
	}
	for (int i = 0; i < cnt; i++)
	{
		rank = 1;
		for (int j = 0; j < cnt; j++)
		{
			if (company[i] < company[j])
				rank++;
		}
		cout << rank << endl;
	}
}