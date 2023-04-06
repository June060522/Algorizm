#include <iostream>

using namespace std;

const string korea = "KOREA";
const string yonsei = "YONSEI";
int main()
{
	int kIndex = 0;
	int yIndex = 0;
	string input = "";
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == korea[kIndex])
		{
			kIndex++;
		}
		if (input[i] == yonsei[yIndex])
		{
			yIndex++;
		}

		if (kIndex == 5)
		{
			cout << "KOREA";
			return 0;
		}
		if (yIndex == 6)
		{
			cout << "YONSEI";
			return 0;
		}
	}
}