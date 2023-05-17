#include <iostream>
using namespace std;
int main()
{
	int answer = 0;
	int temp = 0;
	int repeat = 0;
	int a, b, c;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b >> c;
		b += c;
		temp = a * b;
		if (a == b)
			temp *= 2;
		answer = max(answer, temp);
	}
	cout << answer;
}