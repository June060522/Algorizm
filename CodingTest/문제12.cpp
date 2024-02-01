//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int Dp[3001][3001];
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//
//	string s = "0", s1 = "0";
//	string input;
//	cin >> input;
//	s += input;
//	cin >> input;
//	s1 += input;
//
//	for (int i = 0; i < s.length(); i++)
//	{
//		for (int j = 0; j < s1.length(); j++)
//		{
//			if (i == 0 || j == 0)
//			{
//				Dp[i][j] = 0;
//				continue;
//			}
//
//			if (s[i] == s1[j])
//			{
//				Dp[i][j] = Dp[i - 1][j - 1] + 1;
//			}
//			else
//			{
//				Dp[i][j] = max(Dp[i - 1][j], Dp[i][j - 1]);
//			}
//		}
//	}
//
//	long long answer = 0;
//
//	int num = Dp[s.length() - 1][s1.length() - 1];
//	int k = s.length();
//	int k1 = s1.length();
//	if (k > k1)
//		swap(k, k1);
//
//	answer += num * a;
//	answer += (k1 - k) * b;
//
//	cout << answer;
//}