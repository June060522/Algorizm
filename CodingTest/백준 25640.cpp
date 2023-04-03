#include <iostream>

using namespace std;

int main()
{
	string compareMBTI,input;
	int cnt = 0;
	int repeat = 0;
	cin >> compareMBTI >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (input == compareMBTI)
			cnt++;
	}

	cout << cnt;
}