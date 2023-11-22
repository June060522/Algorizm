//#include <iostream>
//#include <map>
//#include <set>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr); cout.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	int testcase,repeat1,repeat2,input;
//	cin >> testcase;
//
//	for (int i = 0; i < testcase; i++)
//	{
//		int answer = 0;
//		vector<int>v1;
//		vector<int>v2;
//		cin >> repeat1 >> repeat2;
//
//		for (int j = 0; j < repeat1; j++)
//		{
//			cin >> input;
//			v1.push_back(input);
//		}
//
//		for (int j = 0; j < repeat2; j++)
//		{
//			cin >> input;
//			v2.push_back(input);
//		}
//		sort(v2.begin(), v2.end());
//		for (auto i : v1)
//		{
//			answer += lower_bound(v2.begin(), v2.end(), i) - v2.begin();
//		}
//
//		cout << answer << '\n';
//	}
//}