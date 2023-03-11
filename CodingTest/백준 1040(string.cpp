#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	long long a, b, count;
	cin >> a >> b;
	long long answer = a;
	long long k = 0;
	set<int> str;

	int c = 1;
	for (int i = 1; i < b; i++)
	{
		c *= 10;
	}
	if (c > a)
	{
		answer = 10;
		for(int i = 2; i < b;i++)
			answer = answer * 10 + i;
	}
	while (true)
	{
		k = answer;
		count = 0;
		str.clear();
		while (k != 0)
		{
			if (str.count(k % 10) == 0)
			{
				count++;
				str.insert(k % 10);
			}
			k /= 10;

		}
		if (count == b)
			break;
		else
			answer++;
	}
	cout << answer;
}