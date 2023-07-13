//#include <iostream>
//#include <set>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	string input;
//	while (cin >> input)
//	{
//		multiset<char> s;
//		vector<char>v;
//		for (int i = 0; i < input.length(); i++)
//		{
//			s.insert(input[i]);
//		}
//		cin >> input;
//		for (int i = 0; i < input.length(); i++)
//		{
//			if (s.find(input[i]) != s.end())
//			{
//				v.push_back(input[i]);
//
//				s.erase(s.find(input[i]));
//			}
//		}
//
//		sort(v.begin(), v.end());
//
//		for (auto a : v)
//			cout << a;
//
//		cout << '\n';
//	}
//}