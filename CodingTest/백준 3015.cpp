//#include <iostream>
//#include <stack>
//using namespace std;
//int main()
//{
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//	ios::sync_with_stdio(false);
//
//	stack<int> s;
//	stack<int> save;
//	stack<int> solution;
//
//	int input;
//	int repeat;
//
//	int cnt = 0;
//
//	cin >> repeat;
//	for (int i = 0; i < repeat; i++)
//	{
//		cin >> input;
//		s.push(input);
//	}
//
//	int max = 0;
//	while (!s.empty())
//	{
//		solution = save;
//		while (!solution.empty() && s.top() <= solution.top())
//		{
//			cnt++;
//			solution.pop();
//		}
//
//		if (!solution.empty())
//			cnt++;
//
//		while (!save.empty() && s.top() > save.top())
//		{
//			save.pop();
//		}
//		save.push(s.top());
//		s.pop();
//	}
//
//	cout << cnt;
//}