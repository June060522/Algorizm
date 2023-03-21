#include <iostream>

using namespace std;

int main()
{
	int one, two, three;
	cin >> one >> two >> three;
	if (one > two)
		swap(one, two);

	if (two > three)
		swap(two, three);

	if (one > two)
		swap(one, two);
	cout << one << " " << two << " " << three;
}