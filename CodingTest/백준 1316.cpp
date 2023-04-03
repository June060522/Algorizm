#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int repeat = 0;
	int cnt = 0;
	bool isChk = false;
	string input;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		vector<char> v;
		cin >> input;
		for (int j = 0; j < input.size(); j++)
		{
			isChk = false;
			if (j == 0)
			{
				v.push_back(input[j]);
			}
			else if(input[j] != input[j-1])
			{
				for (int k = 0; k < v.size() - 1; k++)
				{
					if (input[j] == v[k])
						isChk = true;
				}
				if (isChk)
					break;
				v.push_back(input[j]);
			}

			if (j == input.size() - 1)
				cnt++;
		}
	}
	cout << cnt;
}