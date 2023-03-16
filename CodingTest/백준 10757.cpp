//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	unsigned long long a = 0;
//	unsigned long long b = 0;
//
//	vector<int> v;
//	cin >> a >> b;
//
//	for (int i = 0; a > 0; i++)
//	{
//		v.push_back(a % 10);
//		a /= 10;
//	}
//
//	for (int j = 0; b > 0; j++)
//	{
//		v[j] += b % 10;
//		b /= 10;
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i] >= 10)
//		{
//			if (i + 1 == v.size())
//			{
//				v.push_back(1);
//			}
//			else
//			{
//				v[i + 1]++;
//			}
//			v[i] -= 10;
//		}
//	}
//
//	for (int i = v.size() - 1; i >= 0; i--)
//	{
//		cout << v[i];
//	}
//}#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	unsigned long long a = 0;
//	unsigned long long b = 0;
//
//	vector<int> v;
//	cin >> a >> b;
//
//	for (int i = 0; a > 0; i++)
//	{
//		v.push_back(a % 10);
//		a /= 10;
//	}
//
//	for (int j = 0; b > 0; j++)
//	{
//		v[j] += b % 10;
//		b /= 10;
//	}
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		if (v[i] >= 10)
//		{
//			if (i + 1 == v.size())
//			{
//				v.push_back(1);
//			}
//			else
//			{
//				v[i + 1]++;
//			}
//			v[i] -= 10;
//		}
//	}
//
//	for (int i = v.size() - 1; i >= 0; i--)
//	{
//		cout << v[i];
//	}
//}