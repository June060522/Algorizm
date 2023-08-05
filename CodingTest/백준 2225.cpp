#include <iostream>
#include <cmath>
using namespace std;

long long Dp[201][201] = { 0 };

int main()
{

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 201; j++)
            Dp[i][j] = 1;
    }

    for (int i = 1; i < 201; i++) {
        for (int j = 1; j < 201; j++) {
            for (int k = i; k >= 0; k--) {
                Dp[i][j] += Dp[k][j - 1];
                Dp[i][j] %= 1000000000;
            }
        }
    }

	int n, k;
	cin >> n >> k;
	cout << Dp[n][k];
}