#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int input;
	for (int i = 0; i < 9; i++)
	{
		vector<int>v;
		float avg = 0;
		for (int j = 0; j < 9; j++)
		{
			cin >> input;
			avg += input;
			v.push_back(input);
		}
		
		avg /= 9;
		avg = round(avg);
		
		int cha = 100;
		int answer = 0;
		for (int j = 0; j < 9; j++)
		{
			if (abs(v[j] - avg) < cha)
			{
				cha = abs(v[j] - avg);
				answer = v[j];
			}
		}

		cout << avg << " " << answer << endl;
	}
}