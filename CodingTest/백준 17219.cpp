#include <iostream>
#include <map>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	map<string, string> m;
	int repeat1, repeat2;
	string input1, input2;
	cin >> repeat1 >> repeat2;
	for (int i = 0; i < repeat1; i++)
	{
		cin >> input1 >> input2;
		m.insert(make_pair(input1, input2));
	}

	for (int i = 0; i < repeat2; i++)
	{
		cin >> input1;
		cout << m[input1] << '\n';
	}
}