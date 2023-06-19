#include<iostream>
#include <unordered_set>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	unordered_set<int> us;
	int repeat = 0;
	cin >> repeat;
	int input;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		us.insert(input);
	}

	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if (us.find(input) == us.end())
			cout << 0 << " ";
		else
			cout << 1 << " ";
	}
}