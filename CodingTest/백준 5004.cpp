//#include <iostream>
//
//using namespace std;
//
//void tie();
//void travel(int, int, bool[]);
//bool checkTravel(bool[]);
//int minMoney = 0;//출력할것
//int pilsu = 0; // 타야하는 항공수
//int startAirplane[79];//시작지
//int endAirplane[79];//도착지
//int price[79];//가격
//int additionAirplainStart[201];//추가로 탈수 있는 항공수
//int additionAirplainEnd[201];//추가로 탈수 있는 항공수
//int additionAirplainPrice[201];//추가로 탈수 있는 항공수
//int additionCnt = 0;//추가로 탈수 있는 항공수
//
//int main()
//{
//	tie();
//
//	bool hadUse[79];//사용했나요?
//	int airplaneCnt = 0; // 항공수
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
////입출력 시간 줄여줌
//void tie()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//}
//
//void travel(int nowPos, int money, bool use[])
//{
//	if (minMoney < money)//이동 비용이 많아질때
//	{
//		//for (int i = 0; i < pilsu; i++)
//		//	cout << use[i] << " ";
//		//cout << money << endl;
//		return;
//	}
//
//	if (checkTravel(use) && nowPos == 1)//모든 곳을 가고 처음으로 돌아왓을때
//	{
//		cout << "여행 끝~" << endl;
//		if (money < minMoney)
//			minMoney = money;
//		return;
//	}
//
//	for (int i = 0; i < pilsu; i++)//필수로 가야하는곳
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
//	for (int i = 0; i < additionCnt; i++)//필수가 아닌곳
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