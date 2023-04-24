#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
	map<string, double> m;
	string a;
	double cnt = 0;
	while (getline(cin,a))
	{
		cnt++;
		if (m.find(a) == m.end())
			m.insert(make_pair(a, 1));
		else
			++m[a];
	}
	cout << fixed;
	cout.precision(4);
	while (!m.empty())
	{
		cout << m.begin()->first << " " << m.begin()->second / cnt * 100 << '\n';
		m.erase(m.begin());
	}
}