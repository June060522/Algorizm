#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int one, two, three;
	int cnt = 0;
	cin >> one >> two >> three;

	if (one > two)
		swap(one, two);
	if (two > three)
		swap(three, two);

	if (one == two)
		cnt++;
	if (one == three)
		cnt++;
	if (three == two)
		cnt++;

	switch (cnt)
	{
	case 3:
		cout << 10000 + three * 1000;
		break;
	case 1:
		if(one == two)
			cout << 1000 + two * 100;
		else
			cout << 1000 + three * 100;
		break;
	case 0:
		cout << three * 100;
		break;
	}

}