#include <iostream>

using namespace std;

bool f(int);
int main()
{
	int num = 0;
	int answer = 0;
	cin >> num;
	if (num < 100)//100보다 작으면 무조건 한수
	{
		cout << num;
		return 0;
	}
	else
	{
		answer = 99;
		for (int i = 100; i <= num; i++)
		{
			if (f(i))
				answer++;
		}
	}
	cout << answer;
}

bool f(int a)
{//공차 구해서 하기
	int numarr[4] = { 0 };
	int rhdck = 0;
	if (a == 1000)
		return false;
	for (int i = 0; i < 3; i++)
	{
		numarr[i] = a % 10;
		a /= 10;
	}
	rhdck = numarr[0] - numarr[1];

	for (int i = 0; i < 2; i++)
	{
		if (rhdck != numarr[i] - numarr[i + 1])
			return false;

	}
	return true;
}