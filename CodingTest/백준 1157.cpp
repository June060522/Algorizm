#include <iostream>

using namespace std;

int main()
{
	string input = "";
	int arr[26] = { 0 };
	cin >> input;
	int max = 0;
	int num = 0;

	char answer = NULL;
	
	for (int i = 0; i < input.size(); i++)
	{
		input[i] = toupper(input[i]);
		arr[input[i] - 65]++;
	}

	for (int i = 0; i < 26; i++)
	{
		num = 0;
		for (int j = 0; j < input.size(); j++)
		{
			if ((int)input[j] - 65 == i)
				num++;
		}

		if (max < num)
		{
			max = num;
			answer = char(i + 65);
		}
		else if(max == num)
		{
			answer = '?';
		}
	}

	cout << answer;
}