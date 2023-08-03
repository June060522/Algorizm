//#include <iostream>
//#include <string>
//#include <cmath>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	int answer = 0;
//	int k;
//	string s;
//	cin >> k >> s;
//	reverse(s.begin(), s.end());
//	while (s.find('1') != string::npos)
//	{
//		int idx = s.find('1');
//		int idx2 = idx;
//		while (idx2 <= s.length() && s[idx2] == '1')
//		{
//			idx2++;
//		}
//		int idx3 = idx2;
//		while (idx3 <= s.length() && s[idx3] == '0')
//		{
//			idx3++;
//		}
//		int idx4 = idx3;
//		while (idx4 <= s.length() && s[idx4] == '1')
//		{
//			idx4++;
//		}
//		if (//answer이 얼마나 더해지냔)
//		{
//			answer++;
//			s[idx] = '0';
//		}
//		else
//		{
//			answer += pow(2, idx);
//			for (int i = idx; i < idx2; i++)
//			{
//				s[i] = '0';
//			}
//		}
//		if (idx2 < s.length())
//			s[idx2] = '1';
//	}
//	cout << answer;
//}