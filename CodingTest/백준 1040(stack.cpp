#include <iostream>
#include <stack>
#include <set>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long a, b, count = 0;// a = �⺻��, b = ���ڰ���, count = �ߺ����� Ȯ��
	cin >> a >> b;// a,b �Է�
	long long answer = a; // ���� ���
	stack<int> s; // a�� ���� ���� s
	
	set<int> chk; //�ߺ� Ȯ�� chk 

	long long c = 1;//c����   => �ڸ��� ���߱� & answer�� ����

	int num = 0; // ť�� ��� ���� �����ϴ� ����
	long long multiple = 0;
	bool check = false;//������� ���� ���� ����
	for (int i = 1; i < b; i++)
	{
		c *= 10;//�ڸ��� ���߱�
	}
	if (c > a)//�ּ� �ڸ����� a���� ũ��
	{
		answer = 10;
		for (int i = 2; i < b; i++)
			answer = answer * 10 + i;// 10 +2345....�Է�
	}

	while (true)//������ �Ϸ�ɶ�����
	{
		count = 0;// ���� �ʱ�ȭ;
		check = false;
		multiple = 1;
		chk.clear();
		c = answer;
		while (answer > 0)
		{
			s.push(answer % 10);//�ڸ��� �ϳ���
			answer /= 10;// 10�� ������
		}//���ÿ� answer�ֱ�
		int size = s.size();
		for (int i = 0; i < size; i++)// ������ �����ŭ �ݺ�
		{
			if (chk.count(s.top()) == 0)// s�� ���� �ȴ�� ������
			{
				if (count < b)// count�� ������ �������� ������
				{
					count++;//count�� ���ϰ�
					chk.insert(s.top());//chk�� ��´�
				}
				else//�ƴϸ�
				{
					while (chk.count(s.top()) == 0)//üũ�� ���� ������ ����
					{
						s.top()++;//���Ѵ�.
						if (s.top() > 9)// 9���� Ŀ����
						{
							s.top() = 9;
							for (int i = 0; i < s.size(); i++)
							{
								multiple *= 10;//10�� ���ϰ�
							}
							c += multiple; //answer����Ȱ��� 1�÷��ְ�
							check = true;
							while (!s.empty())//������ �����������
							{
								multiple /= 10;
								c -= s.top() * multiple;
								s.pop();//�����
							}
							answer = c;// answer�� �־��ְ�
							break;// ���� ���Ϲ� �Ѿ��
						}
					}
				}
			}
			if (check)
				break;
			answer = answer * 10 + s.top();//answer�� �ڷ� �о�� ���̱�
			s.pop();//s�� �����
		}
		if (check)
			continue;
		if (count != b)//���� ī��Ʈ�� �Է°��� �ٸ���
			answer++;//���ϱ�
		else//�ƴϸ�
			break;//���߱�
	}

	cout << answer;
}