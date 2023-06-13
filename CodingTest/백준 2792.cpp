//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	vector<int> v;
//	int student, color, input, save;
//	cin >> student >> color;
//	for (int i = 0; i < color; i++)
//	{
//		cin >> input;
//		v.push_back(input);
//	}
//	student -= color;
//
//	sort(v.begin(), v.end());
//	while (student-- > 0)
//	{
//		save = ceil(*(v.end() - 1) / (float)2);
//		v.erase(v.end() - 1);
//		int left = 0, right = v.size(), middle = 0;
//		while (left < right)
//		{
//			middle = (left + right) / 2;
//			if (v[middle] > save)
//			{
//				left = middle + 1;
//			}
//			else
//			{
//				right = middle - 1;
//			}
//		}
//		v.insert(v.begin() + middle, save);
//	}
//
//	cout << *(v.end() - 1);
//}