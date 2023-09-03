#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int answer = 0;
	int a, b;
	int repeat;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b;
		answer = max(answer, a * b);
	}

	cout << answer;
}