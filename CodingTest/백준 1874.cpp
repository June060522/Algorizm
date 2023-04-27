#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	stack<int> s;
	vector<char> v;
	int index = 1;
	int repeat = 0;
	cin >> repeat;
	int input;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		while (s.empty() || input > s.top())
		{
			s.push(index);
			v.push_back('+');
			index++;
		}

		if (input < s.top())
		{
			cout << "NO";
			return 0;
		}
		else if (input == s.top())
		{
			v.push_back('-');
			s.pop();
		}
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << '\n';
}