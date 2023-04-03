//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int arr[51];
//vector<int> v;
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int cnt = 0;
//	int repeat = 0;
//	int nowIdx = 0;
//	cin >> repeat;
//	fill(arr, arr + 51, 2000);
//
//	for (int i = 0; i < repeat; i++)
//	{
//		cin >> arr[i];
//		if (count(v.begin(), v.end(), arr[i]) == 0)
//			v.push_back(arr[i]);
//	}
//	sort(v.begin(), v.end());
//	sort(arr, arr + 51);
//	if (v.size() == 2)
//	{
//		num1 = v[0];
//		num2 = v[1];
//		for (int i = 0; i < repeat; i++)
//		{
//			if (arr[i] == num2)
//				cout << arr[i] << " ";
//		}
//		for (int i = 0; i < repeat; i++)
//		{
//			if (arr[i] == num1)
//				cout << arr[i] << " ";
//		}
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i < repeat; i++)
//		{
//			if (arr[i] == v[nowIdx])
//			{
//				cout << arr[i] << " ";
//				cnt++;
//			}
//		}
//		while (cnt != repeat)
//		{
//			nowIdx++;
//			if (v[nowIdx] + 1 != v[nowIdx + 1])
//			{
//				for (int i = 0; i < repeat; i++)
//				{
//					if (arr[i] == v[nowIdx])
//					{
//						cout << arr[i] << " ";
//						cnt++;
//					}
//				}
//				continue;
//			}
//			else
//			{
//				nowIdx ++;
//				for (int i = 0; i < repeat; i++)
//				{
//					if (arr[i] == v[nowIdx])
//					{
//						cout << arr[i] << " ";
//						cnt++;
//					}
//				}
//				if (cnt == repeat)
//					return 0;
//				nowIdx -= 1;
//				for (int i = 0; i < repeat; i++)
//				{
//					if (arr[i] == v[nowIdx])
//					{
//						cout << arr[i] << " ";
//						cnt++;
//					}
//				}
//				if (cnt == repeat)
//					return 0;
//
//				nowIdx += 2;
//				for (int i = 0; i < repeat; i++)
//				{
//					if (arr[i] == v[nowIdx])
//					{
//						cout << arr[i] << " ";
//						cnt++;
//					}
//				}
//				if (cnt == repeat)
//					return 0;
//			}
//		}
//	}
//}