//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	stack<string> s;
//	char input = ' ';
//	int num = 0;
//	while (cin >> input)
//	{
//		if (input == 'a')
//			break;
//
//		if (input == ')')
//		{
//			if (s.top() != "72")
//			{
//				if (s.top() == "91" || s.top() == "93" || s.top() == "41")
//				{
//					cout << 0;
//					return 0;
//				}
//				else
//				{
//					s.pop();
//					if (s.top() == "93" || s.top() == "91" || s.top() == "40" || s.top() == "41")
//
//					s.push("2");
//				}
//			}
//			else
//			{
//				num = stoi(s.top());
//				s.pop();
//				if (s.top() == "93" || s.top() == "91" || s.top() == "40" || s.top() == "41")
//				{
//					cout << num * 2 << endl;
//					s.push(to_string(num * 2));
//				}
//				else
//				{
//					num *= 2;
//					num += stoi(s.top());
//					cout << num << endl;
//					s.pop();
//					s.push(to_string(num));
//				}
//			}
//		}
//		else if (input == ']')
//		{
//			if (s.top() != "91")
//			{
//				if (s.top() == "93" || s.top() == "40" || s.top() == "41")
//				{
//					cout << 0;
//					return 0;
//				}
//				else
//				{
//					num = stoi(s.top());
//					s.pop();
//					if (s.top() == "93" || s.top() == "91" || s.top() == "40" || s.top() == "41")
//					{
//						cout << num * 3 << endl;
//						s.push(to_string(num * 3));
//					}
//					else
//					{
//						num *= 3;
//						num += stoi(s.top());
//						s.pop();
//						cout << num << endl;
//						s.push(to_string(num));
//					}
//				}
//			}
//			else
//			{
//				s.pop();
//				s.push("3");
//			}
//		}
//		else
//		{
//			s.push(to_string(input));
//		}
//	}
//	cout << s.top() << endl;
//
//}