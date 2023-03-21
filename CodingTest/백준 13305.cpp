#include <iostream>

using namespace std;

long long distanceArr[100001];
long long price[100001];
long long useMoney = 0;
int town = 0;

void GO(long long, long long);
int main()
{
	cin >> town;
	for (int i = 0; i < town - 1; i++)
		cin >> distanceArr[i];

	for (int i = 0; i < town; i++)
		cin >> price[i];

	GO(0, 0);
	cout << useMoney;
}

void GO(long long oil, long long index)
{
	long long needOil = 0;
	long long townIndex = 1;
	//��������
	if (index >= town)
		return;

	//�������� ���� ��
	if (oil >= distanceArr[index])
		oil -= distanceArr[index];
	//���� �����ϸ�
	else
	{
		//���� �������Ҹ� ã��
		while (true)
		{
			//�̰� �ּҸ� ���Ϲ��� ����
			if (index + townIndex == town - 1)
				break;

			//���� ������
			if (price[index] > price[index + townIndex])
				break;

			townIndex++;
		}
		//�׸��� �Ÿ��� �����
		for (int i = index; i < index + townIndex; i++)
			needOil += distanceArr[i];
		//�׸�ŭ ������
		useMoney += needOil * price[index];
		oil += needOil;
		//�׸��� �޷�!
		oil -= distanceArr[index];
	}
	//���� �������� ���
	GO(oil, index + 1);
}