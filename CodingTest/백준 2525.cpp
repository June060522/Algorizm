#include <iostream>

using namespace std;

int main()
{
	int h, m, a;

	cin >> h >> m >> a;

	m += a;
	while (m >= 60)
	{
		m -= 60;
		h += 1;

		if (h > 23)
		{
			h = 0;
		}
	}

	cout << h << " " << m;
}