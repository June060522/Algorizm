#include <iostream>
#include <stack>
using namespace std;
int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	stack<pair<int,int>> s;

	int input;
	int repeat;

	long long cnt = 0;

	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
		if(!s.empty())
			s.push(input);
		else
		{
			
		}
	}

	cout << cnt;
}