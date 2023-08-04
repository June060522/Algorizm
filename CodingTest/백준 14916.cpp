#include <iostream>
using namespace std;
int Dp[100001] = {0,-1,1,-1,2,1,3,2,4,3};
int main()
{
	for (int i = 10; i < 100001; i++)
	{
		Dp[i] = Dp[i - 5] + 1;
	}
	int input;
	cin >> input;
	cout << Dp[input];
}