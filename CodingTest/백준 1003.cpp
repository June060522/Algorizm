#include <iostream>
using namespace std;

long long int Dp0[41] = { 1 ,0 ,1};
long long int Dp1[41] = { 0 ,1 ,1};


int main()
{
	for (int i = 3; i < 41; i++)
	{
		Dp0[i] = Dp0[i - 1] + Dp0[i - 2];
		Dp1[i] = Dp1[i - 1] + Dp1[i - 2];
	}
	int n, input;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		cout << Dp0[input] << " " << Dp1[input] << '\n';
	}
}