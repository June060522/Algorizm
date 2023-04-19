#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>multiple;
	vector<int>answer;
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++)
	{
		multiple.push_back(a[i] - '0');
	}

	for (int i = 0; i < b.length(); i++)
	{
		
	}

	for (int i = 0; i < multiple.size(); i++)
	{
		cout << answer[i];
	}
}