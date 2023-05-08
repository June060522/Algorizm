#include <iostream>
#include <stack>

using namespace std;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	stack<char> s;
	string input;
	cin >> input;

	for (int i = 0; i < input.length(); i++)
	{
		if (input[i] == '+' || input[i] == '-')
		{
			while (!s.empty() && s.top() != '(')//스택이 비워져있지 않고 '('이 아닐동안
			{
				cout << s.top();//출력하고 꺼내기
				s.pop();
			}
			s.push(input[i]);//+나-넣기
		}
		else if (input[i] == '*' || input[i] == '/')
		{
			while (!s.empty() && (s.top() == '*' || s.top() == '/'))//스택이 비워져있지 않고 맨위가 *나/가 아니면
			{
				cout << s.top();//출력하고 꺼내기
				s.pop();
			}
			s.push(input[i]);//*나/넣기
		}
		else if (input[i] == '(')
		{
			s.push(input[i]);//(넣기
		}
		else if (input[i] == ')')
		{
			while (s.top() != '(')//(가 아닐때까지
			{
				cout << s.top();//출력하고 꺼내기
				s.pop();
			}
			s.pop();//(꺼내기
		}
		else
		{
			cout << input[i];// 연산자가 아니면 출력
		}
	}

	while(!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}