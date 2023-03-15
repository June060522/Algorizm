#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int sum = 0;
	while (true)
	{
		sum = 0;
		cin >> n;
		if (n == -1)
			return 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
				sum += i;
		}

		if (sum == n)
		{
			cout << n << " = " << "1";
			for (int i = 2; i < n; i++)
			{
				if (n % i == 0)
					cout << " + " << i;
			}
		}
		else
		{
			cout << n << " is NOT perfect.";
		}
		cout << endl;
	}
}