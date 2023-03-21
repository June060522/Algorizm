#include <iostream>

using namespace std;

int main()
{
	int S = 0;
	int T = 0;
	int score;
	for (int i = 0; i < 4; i++)
	{
		cin >> score;
		S += score;
	}
	for (int i = 0; i < 4; i++)
	{
		cin >> score;
		T += score;
	}

	if (S >= T)
		cout << S;
	else
		cout << T;
}