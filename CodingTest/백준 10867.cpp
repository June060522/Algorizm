#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> s;
	int input,repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		s.insert(input);
	}

	for (auto i : s)
	{
		cout << i << " ";
	}
}