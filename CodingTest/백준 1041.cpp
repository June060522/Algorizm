//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	long long int a = 0;
//	long long int arr[6];
//	long long int sum = 0;
//	cin >> a;
//
//	for (int i = 0; i < 6; i++)
//		cin >> arr[i];
//
//	sort(arr, arr + 6);
//
//	if(a == 1)
//	{
//		for (int i = 0; i < 5; i++)
//			sum += arr[i];
//		cout << sum;
//		return 0;
//	}
//
//	sum += arr[0] * a * a;
//	sum += arr[2] * 4;
//	sum += arr[1] * ((a * 2) + ((a - 2) * 2));
//
//	for (int i = 1; i < a; i++)
//	{
//		sum += arr[0] * ((a * 2) + ((a - 2) * 2));
//		sum += arr[1] * 4;
//	}
//
//
//	cout << sum;
//}