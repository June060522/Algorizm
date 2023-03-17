//#include <iostream>
//
//using namespace std;
//
//int f(long long, long long);
//int main()
//{
//	long long a;
//	cin >> a;
//	int c = 2;
//	while (a > 1)
//	{
//		int set = f(a, c);
//		if (set == 1)
//			c++;
//		else
//		{
//			cout << c << endl;
//			a /= set;
//		}
//	}
//}
//
//int f(long long a, long long b)
//{
//	int remember = 0;
//	while (b != 0)
//	{
//		remember = a % b;
//		a = b;
//		b = remember;
//	}
//	return a;
//}