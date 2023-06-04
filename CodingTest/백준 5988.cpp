#include <iostream>
#include <string>
using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	int repeat = 0;
	string input;
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if ((input[input.length() - 1] - '0') % 2 == 0)
			cout << "even" << '\n';
		else
			cout << "odd" << '\n';
	}
}