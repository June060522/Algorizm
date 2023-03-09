//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int a, b, count;
//	cin >> a >> b;
//	int answer = a;
//	int k = 0;
//	string str;
//
//	while (true)
//	{
//		k = answer;
//		count = 0;
//		str.clear();
//		while (k != 0)
//		{
//			if (str.find(k % 10) == string::npos)
//			{
//				count++;
//				str.push_back(k % 10);
//			}
//			k /= 10;
//
//		}
//		if (count == b)
//			break;
//		else
//			answer++;
//	}
//	cout << answer;
//}