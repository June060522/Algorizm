#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	vector<int> v1;
	vector<int> v2;
	string s;
	string s1;
	bool check = false;
	cin >> s >> s1;
	for (int i = 0; i < s.length(); i++)
	{
		v.push_back((s[i] - '0'));
		v1.push_back((s[i] - '0'));
	}

	for (int i = 0; i < s1.length(); i++)
	{
		v2.push_back((s1[i] - '0'));
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] % 2 == 0)
		{
			v[i] /= 2;
			v1[i] /= 2;
		}
		else
		{
			v[i]--;
			v[i + 1] += 10;
			v[i] /= 2;

			v1[i]--;
			v1[i + 1] += 10;
			v1[i] /= 2;
		}
	}

	for (int i = 0; i < v2.size(); i++)
	{
		if (v2[i] % 2 == 0)
		{
			v2[i] /= 2;
		}
		else
		{
			v2[i]--;
			v2[i + 1] += 10;
			v2[i] /= 2;
		}
	}

	for (int i = 0; i < v2.size(); i++)
	{
		v[v.size() - 1 - i] += v2[v2.size()-1-i];
		if (v[v.size() - 1 - i] >= 10)
		{
			v[v.size() - 1 - i] -= 10;
			v[v.size() - 2 - i]++;
		}
		
		v1[v1.size() - 1 - i] -= v2[v2.size()-1-i];
		if (v1[v1.size() - 1 - i] < 0)
		{
			v1[v1.size() - 1 - i] += 10;
			v1[v1.size() - 2 - i]--;
		}
	}

	for (int i = 0; i < v1.size(); i++)
	{
		if (v1[i] < 0)
		{
			v1[i] += 10;
			v1[i + 1]--;
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] >= 10)
		{
			v[i] -= 10;
			v[i+1]++;
		}
	}

	for (int i = 0; i < v1.size(); i++)
	{
		if (!check && v[i] == 0)
			continue;

		cout << v[i];
		check = true;
	}

	cout << endl;
	check = false;
	for (int i = 0; i < v1.size(); i++)
	{
		if (!check && v1[i] == 0)
			continue;

		cout << v1[i];
		check = true;
	}
}