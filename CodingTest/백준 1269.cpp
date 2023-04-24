#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<long long> set1;
	long long repeat1, repeat2, input;
	cin >> repeat1 >> repeat2;
	for (int i = 0; i < repeat1 + repeat2; i++)
	{
		cin >> input;
		if (set1.find(input) == set1.end())
			set1.insert(input);
		else
			set1.erase(input);
	}
	cout << set1.size();
}