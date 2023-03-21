#include <iostream>

using namespace std;

int main()
{
	string name = " ";
	int age = 1;
	int weight = 1;
	while (true)
	{
		cin >> name >> age >> weight;

		if (name == "#" && age == 0 && weight == 0)
			return 0;
		if (age > 17 || weight >= 80)
		{
			cout << name << " Senior" << endl;
		}
		else
		{
			cout << name << " Junior" << endl;
		}
	}
}