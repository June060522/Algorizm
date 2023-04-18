//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void F(int);
//vector<long long int> v;
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	int n = 0;
//	cin >> n;
//	v.push_back(1);
//	F(n);
//	for (int i = v.size() - 1; i >= 0; i--)
//		cout << v[i];
//}
//
//void F(int num)
//{
//	if (num == 0 || num == 1)
//		return;
//
//	for (int i = 0; i < v.size(); i++)
//		v[i] *= num;
//	for (int i = 0; i < v.size(); i++)
//	{
//		while (v[i] >= 10)
//		{
//			v[i] -= 10;
//			if (i == v.size() - 1)
//				v.push_back(1);
//			else
//				v[i + 1] += 1;
//		}
//	}
//	F(num - 1);
//}