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
			while (!s.empty() && s.top() != '(')//������ ��������� �ʰ� '('�� �ƴҵ���
			{
				cout << s.top();//����ϰ� ������
				s.pop();
			}
			s.push(input[i]);//+��-�ֱ�
		}
		else if (input[i] == '*' || input[i] == '/')
		{
			while (!s.empty() && (s.top() == '*' || s.top() == '/'))//������ ��������� �ʰ� ������ *��/�� �ƴϸ�
			{
				cout << s.top();//����ϰ� ������
				s.pop();
			}
			s.push(input[i]);//*��/�ֱ�
		}
		else if (input[i] == '(')
		{
			s.push(input[i]);//(�ֱ�
		}
		else if (input[i] == ')')
		{
			while (s.top() != '(')//(�� �ƴҶ�����
			{
				cout << s.top();//����ϰ� ������
				s.pop();
			}
			s.pop();//(������
		}
		else
		{
			cout << input[i];// �����ڰ� �ƴϸ� ���
		}
	}

	while(!s.empty())
	{
		cout << s.top();
		s.pop();
	}
}