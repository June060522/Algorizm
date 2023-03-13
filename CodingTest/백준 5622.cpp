#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	string input = "";
	float sum = 0;
	cin >> input;
	for (int i = 0; i < input.size(); i++)
	{
		if((float)input[i] - 64 >= 19)
			sum += ceil(((float)input[i] - 65) / 3) + 2;
		else
			sum += ceil(((float)input[i] - 64) / 3) + 2;

		if (input[i] == 'Z')
			sum -= 1;
	}

	cout << sum;
}