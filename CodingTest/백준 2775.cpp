//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int DP[15][15];
//	for (int i = 0; i < 15; i++)
//	{
//		DP[0][i] = i + 1;
//		DP[i][0] = i + 1;
//	}
//
//	for (int i = 1; i < 15; i++)
//	{
//		for (int j = 2; j < 15; j++)
//		{
//			DP[i][j] = DP[i - 1][j] + DP[i][j - 1];
//		}
//	}
//}