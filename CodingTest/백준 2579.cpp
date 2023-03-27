//#include <iostream>
//
//using namespace std;
//
//int arr[300] = { 0 };
//int cnt = 0;
//int maxsum = 0;
//void Climb(int,int,int);
//int main()
//{
//	cin >> cnt;
//	for (int i = 0; i < cnt; i++)
//	{
//		cin >> arr[i];
//	}
//	Climb(0, 0, 0);
//	Climb(0, 1, 1);
//	cout << maxsum;
//}
//
//void Climb(int totalSum, int idx, int two)
//{
//	totalSum += arr[idx];
//	if (two > 2 || idx > cnt)
//		return;
//
//	if (idx == cnt)
//	{
//		if (totalSum > maxsum)
//			maxsum = totalSum;
//
//		return;
//	}
//	Climb(totalSum, idx + 1, two + 1);
//	Climb(totalSum, idx + 2, 0);
//}