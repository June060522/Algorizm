#include <iostream>

using namespace std;

int main()
{
	int input = 0;
	cin >> input;
	int line = 0,sum = 0;
	int save = 0;
	while (sum < input)
	{
		++line;
		sum += line;
	}

	save = sum - input;
	if (line % 2 == 0)
	{
		cout << line - save << "/" << 1 + save;
	}
	else
	{
		cout << 1 + save << "/" << line - save;
	}
}