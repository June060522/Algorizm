//#include <iostream>
//
//using namespace std;
//
//void tie();
//void travel(int, int, bool[]);
//bool checkTravel(bool[]);
//int minMoney = 0;//����Ұ�
//int pilsu = 0; // Ÿ���ϴ� �װ���
//int startAirplane[79];//������
//int endAirplane[79];//������
//int price[79];//����
//int additionAirplainStart[201];//�߰��� Ż�� �ִ� �װ���
//int additionAirplainEnd[201];//�߰��� Ż�� �ִ� �װ���
//int additionAirplainPrice[201];//�߰��� Ż�� �ִ� �װ���
//int additionCnt = 0;//�߰��� Ż�� �ִ� �װ���
//
//int main()
//{
//	tie();
//
//	bool hadUse[79];//����߳���?
//	int airplaneCnt = 0; // �װ���
//	cin >> airplaneCnt >> pilsu;
//	for (int i = 0; i < pilsu; i++)
//	{
//		cin >> startAirplane[i] >> endAirplane[i] >> price[i];
//		minMoney += price[i];
//		hadUse[i] = false;
//	}
//
//	cin >> additionCnt;
//
//	for (int i = 0; i < additionCnt; i++)
//	{
//		cin >> additionAirplainStart[i] >> additionAirplainEnd[i] >> additionAirplainPrice[i];
//		minMoney += additionAirplainPrice[i];
//	}
//	minMoney *= 3;
//	travel(1, 0, hadUse);
//
//	cout << minMoney;
//}
//
////����� �ð� �ٿ���
//void tie()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//}
//
//void travel(int nowPos, int money, bool use[])
//{
//	if (minMoney < money)//�̵� ����� ��������
//	{
//		//for (int i = 0; i < pilsu; i++)
//		//	cout << use[i] << " ";
//		//cout << money << endl;
//		return;
//	}
//
//	if (checkTravel(use) && nowPos == 1)//��� ���� ���� ó������ ���ƿ�����
//	{
//		cout << "���� ��~" << endl;
//		if (money < minMoney)
//			minMoney = money;
//		return;
//	}
//
//	for (int i = 0; i < pilsu; i++)//�ʼ��� �����ϴ°�
//	{
//		if (startAirplane[i] == nowPos)
//		{
//			use[i] = true;
//			travel(endAirplane[i], money + price[i], use);
//			use[i] = false;
//		}
//
//		if (endAirplane[i] == nowPos)
//		{
//			use[i] = true;
//			travel(startAirplane[i], money + price[i], use);
//			use[i] = false;
//		}
//	}
//
//	for (int i = 0; i < additionCnt; i++)//�ʼ��� �ƴѰ�
//	{
//		if (additionAirplainStart[i] == nowPos)
//			travel(additionAirplainEnd[i], money + additionAirplainPrice[i], use);
//
//		if (additionAirplainEnd[i] == nowPos)
//			travel(additionAirplainStart[i], money + additionAirplainPrice[i], use);
//	}
//}
//
//bool checkTravel(bool use[])
//{
//	for (int i = 0; i < pilsu; i++)
//		if (!use[i])
//			return false;
//
//	return true;
//}