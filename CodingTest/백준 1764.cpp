#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	int repeat1, repeat2;
	cin >> repeat1 >> repeat2;
	set<string> inputs;
	set<string> answer;
	string input;
	for (int i = 0; i < repeat1; i++)
	{
		cin >> input;
		inputs.insert(input);
	}

	for (int i = 0; i < repeat2; i++)
	{
		cin >> input;
		if (inputs.find(input) != inputs.end())
			answer.insert(input);
	}
	cout << answer.size() << '\n';
	for (auto i : answer)
		cout << i << '\n';
}