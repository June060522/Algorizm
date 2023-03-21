#include <iostream>

using namespace std;

int main()
{
	int p, m, t1, t2;
	cin >> p >> m;
	t1 = (p + m) / 2;// (a + b) + (a - b) = 2a
	t2 = p - t1; //(a + b) - a = b
	if (t1 - t2 != m || t1 < 0 || t2 < 0)//a - b == m
	{
		cout << "-1";
	}
	else
	{
		cout << t1 << " " << t2;
	}
}