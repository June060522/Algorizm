//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <stack>
//
//using namespace std;
//vector<int>vec;
//int main()
//{
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	ios::sync_with_stdio(false);
//	int repeat = 0;
//	int cnt = 0;
//	int input = 0;
//
//
//	cin >> repeat;
//	vec.push_back(-1000000001);
//	for (int i = 0; i < repeat; i++)
//	{
//		cin >> input;
//		if (input > vec.back())
//		{
//			vec.push_back(input);
//			cnt++;
//		}
//		else
//		{
//			pair<int, int> p = make_pair(input, i);
//			vector<int>::iterator iter = lower_bound(vec.begin(), vec.end(), input);
//			*iter = input;
//		}
//	}
//	cout << cnt << "\n";
//}