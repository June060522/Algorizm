//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a, b, c;
//	int cnt = 0;
//	int multiple = 1;
//	int remain = 0;
//	int repeat = 0;
//	cin >> a >> b >> c;
//
//	while (multiple < c)
//	{
//		multiple *= a;
//		cnt++;
//	}
//	remain = multiple % c;
//	
//	if (cnt > 0)
//		repeat = b / cnt;
//	else
//		repeat = 0;
//
//	for (int i = 1; i < repeat; i++)
//	{
//		remain += remain;
//	}
//	repeat = b % cnt;
//	for (int i = 1; i < repeat; i++)
//	{
//		remain += a;
//	}
//	remain %= c;
//	cout << remain;
//}