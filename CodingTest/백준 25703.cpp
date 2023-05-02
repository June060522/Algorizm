#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	cout << "int a;\n";
	for (int i = 1; i <= num; i++)
	{
		cout << "int ";
		if (i == 1)
		{
			cout << "*ptr = &a;";
		}
		else
		{
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			if(i - 1 > 1)
				cout << "ptr" << i << " = &ptr" << i-1<<";";
			else
				cout << "ptr" << i << " = &ptr"<<";";
		}
		cout << '\n';
	}
}