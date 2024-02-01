//#include <iostream>
//#include <string>
//#include <vector>
//#include <cmath>
//#include <algorithm>
//#include <queue>
//#include <stack>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <unordered_set>
//#include <climits>
//
//using namespace std;
//int n, d, k;
//int student[30001];
//int answer = 0;
//
//void DFS(int ing,int m,int o)
//{
//	if (m == k)
//	{
//		int temp = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if ((student[i] & ing) == student[i])
//				temp++;
//		}
//		answer = max(answer, temp);
//		return;
//	}
//
//	if (o > d)
//		return;
//
//	for (int i = o; i <= d; i++)
//	{
//		DFS(ing + (1 << (i - 1)), m + 1, i + 1);
//	}
//}
//
//int main()
//{
//	cin >> n >> d >> k;
//
//	int temp = 0,repeat, input;
//	for (int i = 1; i <= n; i++)
//	{
//		temp = 0;
//		cin >> repeat;
//		for (int j = 0; j < repeat; j++)
//		{
//			cin >> input;
//			temp += (1 << (input - 1));
//		}
//		student[i] = temp;
//	}
//
//	for (int i = 1; i <= d; i++)
//	{
//		DFS((1 << (i - 1)), 1, i + 1);
//	}
//
//	cout << answer;
//}