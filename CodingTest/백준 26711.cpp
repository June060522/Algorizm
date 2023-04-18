#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string a;
	string b;

	cin >> a >> b;

	vector<int> v;

	if (a.size() < b.size())
		swap(a, b);

	for (int i = 0; i < a.length(); i++)
	{
		v.push_back(((int)a[a.length() - i - 1] - 48));
	}

	for (int j = 0; j < b.length(); j++)
	{
		v[j] += ((int)b[b.length() - j - 1] - 48);
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] >= 10)
		{
			if (i + 1 == v.size())
			{
				v.push_back(1);
			}
			else
			{
				v[i + 1]++;
			}
			v[i] -= 10;
		}
	}



	for (int i = v.size() - 1; i >= 0; i--)
	{
		cout << v[i];
	}
}