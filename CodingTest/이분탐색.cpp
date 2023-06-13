#include <iostream>
#include <vector>

using namespace std;

void BinarySearcu(vector<int>& age)
{
	int left = 0, right = age.size();
	int middle = 0;
	string input;
	while (left < right)
	{
		middle = (left + right) / 2;

		cout << age[middle] << endl;
		cin >> input;
		if (input == "YES")
		{
			cout << "헤헤";
			return;
		}
		else if (input == "UP")
		{
			left = middle + 1;
		}
		else if (input == "DOWN")
		{
			right = middle - 1;
		}
	}
	cout << "누구세요?";
}

int main()
{
	vector<int>age;
	int min, max;
	cout << "나이의 최솟값, 최대값 입력 : ";
	cin >> min >> max;
	for (int i = min; i <= max; i++)
	{
		age.push_back(i);
	}
	cout << "나이가 맞다면 YES, 더 많다면 UP, 더 작다면 DOWN을 입력하세요." << endl;
	BinarySearcu(age);
}