//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int arr[10001] = { 0 };
//
//void F(int);
//void C(int);
//int cnt = 0;
//int idx = 0;
//int main()
//{
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	cin >> cnt;
//	for (int i = 0; i < cnt; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = cnt - 1; i >= 0; i--)
//	{
//		if (i == 0)
//		{
//			cout << "-1";
//			break;
//		}
//		else if(arr[i] < arr[i - 1])
//		{
//			idx = i;
//			break;
//		}
//	}
//
//	if (idx != 0)
//	{
//		arr[idx - 1]--;
//		F(idx - 1);
//		for (int i = idx + 1; i <= cnt; i++)
//		{
//			C(i - 1);
//		}
//		for (int i = 0; i < cnt; i++)
//			cout << arr[i] << " ";
//	}
//}
//
//void F(int idx1)
//{
//	for (int i = idx1 + 1; i < cnt; i++)
//	{
//		if (arr[idx1] == arr[i])
//		{
//			arr[i]++;
//			break;
//		}
//	}
//	arr[idx1]++;
//}
//
//void C(int idx1)
//{
//	if (idx1 == idx)
//		return;
//
//	if (arr[idx1] > arr[idx1 - 1])
//	{
//		swap(arr[idx1], arr[idx1 - 1]);
//		C(idx1 - 1);
//	}
//}