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
			cout << "����";
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
	cout << "��������?";
}

int main()
{
	vector<int>age;
	int min, max;
	cout << "������ �ּڰ�, �ִ밪 �Է� : ";
	cin >> min >> max;
	for (int i = min; i <= max; i++)
	{
		age.push_back(i);
	}
	cout << "���̰� �´ٸ� YES, �� ���ٸ� UP, �� �۴ٸ� DOWN�� �Է��ϼ���." << endl;
	BinarySearcu(age);
}