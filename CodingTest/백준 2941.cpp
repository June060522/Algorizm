#include <iostream>

using namespace std;

int main()
{
	//c= ,c-, dz=,d-,lj,nj,s=,z=
	string input = "";

	cin >> input;
	int cnt = 0;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '-')
		{
			if (input[i - 1] == 'c' || input[i - 1] == 'd')
				cnt--;
		}
		else if (input[i] == 'j')
		{
			if (input[i - 1] == 'l' || input[i - 1] == 'n')
				cnt--;
		}
		else if (input[i] == '=')
		{
			if (input[i - 2] == 'd' && input[i - 1] == 'z')
				cnt -= 2;
			else if (input[i - 1] == 'c' || input[i - 1] == 's' || input[i - 1] == 'z')
				cnt--;
		}
		cnt++;
	}
	cout << cnt;
}