#include <iostream>

using namespace std;

int main()
{
	int h, m, s, h1, m1, s1;
	for (int i = 0; i < 3; i++)
	{
		cin >> h >> m >> s >> h1 >> m1 >> s1;
		h1 -= h;
		m1 -= m;
		s1 -= s;
		if (s1 < 0)
		{
			m1--;
			s1 += 60;
		}
		if (m1 < 0)
		{
			h1--;
			m1 += 60;
		}
		cout << h1 << " " << m1 << " " << s1 << endl;
	}
}