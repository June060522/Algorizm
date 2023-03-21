#include <iostream>

using namespace std;

int main()
{
	int hour, min, sec,plus;
	cin >> hour >> min >> sec >> plus;
	sec += plus;
	while (sec >= 60)
	{
		sec -= 60;
		min++;
	}

	while (min >= 60)
	{
		min -= 60;
		hour++;
	}

	while (hour >= 24)
	{
		hour -= 24;
	}

	cout << hour << " " << min << " " << sec;
}