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
//	int repeat,input;
//	vector<int> v;
//	cin >> repeat;
//
//	for (int i = 0; i < repeat; i++)
//	{
//		cin >> input;
//		v.push_back(input);
//	}
//	cin >> repeat;
//	sort(v.begin(), v.end());
//	for (int i = 0; i < repeat; i++)
//	{
//		cin >> input;
//		cout << upper_bound(v.begin(), v.end(), input) - lower_bound(v.begin(), v.end(), input) << " ";
//	}
//}