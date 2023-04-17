#include <iostream>

using namespace std;

int main()
{
	string str;
	double f;
	string str2;
	double sum = 0;
	double hajum = 0;
	int avg = 20;
	for (int i = 0; i < 20; i++)
	{
		cin >> str >> f >> str2;
		if (str2 == "A+")
			sum += f * 4.5f;
		else if (str2 == "A0")
			sum += f * 4.0f;
		else if (str2 == "B+")
			sum += f * 3.5f;
		else if (str2 == "B0")
			sum += f * 3.0f;
		else if (str2 == "C+")
			sum += f * 2.5f;
		else if (str2 == "C0")
			sum += f * 2.0f;
		else if (str2 == "D+")
			sum += f * 1.5f;
		else if (str2 == "D0")
			sum += f * 1.0f;
		else if (str2 == "F")
			sum += 0;
		else
		{
			avg--;
			continue;
		}

		hajum += f;
	}

	cout << fixed;
	cout.precision(6);
	cout << sum / hajum;
}