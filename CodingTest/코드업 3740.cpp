#include <iostream>

using namespace std;

int w[100];
int v[100];
int DP[100][10000];
int main()
{
	int repeat = 0, maxSize = 0;
	int weigt = 0, value = 0;
	cin >> repeat >> maxSize;
	for (int i = 0; i < repeat; i++)
	{
		cin >> weigt >> value;
		w[i] = weigt;
		v[i] = value;
	}

	for (int i = 1; i <= repeat; i++)
	{
		for (int j = 1; j <= maxSize; j++)
		{

		}
	}
	cout << DP[repeat][1];

}