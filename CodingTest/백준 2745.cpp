#include <iostream>
using namespace std;

int main()
{
	string str;
	int num;
	int cnt;
	int save = 1;
	cin >> str >> num;
	int answer = 0;

	for (int i = str.length() - 1; i >= 0; i--)
	{
		if (str[i] <= '9' && str[i] >= '0')
			cnt = str[i] - '0';
		else
			cnt = str[i] - 'A' + 10;

		answer += cnt * save;
		save *= num;
	}

	cout << answer;
}