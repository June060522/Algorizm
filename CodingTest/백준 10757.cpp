//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	string a;
//	string b;
//
//	cin >> a >> b;
//
//	vector<int> v;
//
//
//	for (int i = 0; i < a.length(); i++)
//	{
//		v.push_back(((int)a[a.length() - i]) + 1);
//	}
//
//	for (int j = 0; j < b.length(); j++)
//	{
//		v[j] += ((int)b[b.length()- j] +1);
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
//
//
//	for (int i = 0; i < v.size(); i++)
//	{
//		cout << v[i];
//	}
//}