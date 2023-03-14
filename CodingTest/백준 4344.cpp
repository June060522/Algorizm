#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int repeat = 0;
	int input = 0;
	float average = 0;
	float person = 0;
	
	cin >> repeat;
	cout << fixed;
	cout.precision(3);

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		float* score = new float[input];
		average = 0;
		person = 0;

		for (int j = 0; j < input; j++)
		{
			cin >> score[j];
			average += score[j];
		}
		average /= input;

		for (int j = 0; j < input; j++)
		{
			if (average < score[j])
				person++;
		}

		cout << (person / input * 100) << "%" << endl;
	}
}