#include <iostream>

using namespace std;
int sum(int);
int sum1(int);
int main()
{
	//int n;
	//cin >> n;
	//cout << sum(n) << endl;
	//cout << sum1(n) << endl
	
	string str;
	clock_t start, end;
	int n;
	cin >> n;
	start = clock();
	for (int i = 0; i < n; i++)
	{
		//str += "X"; //원래 문자열에 X를 더해줌
		str = str + "X";// 
	}
	end = clock();
	cout << end - start << endl;
}

int sum(int i)//O(n)
{
	int sum = 0;
	for (int j = 1; j <= i; j++)
		sum += j;
	return sum;
}

int sum1(int i)//O(1)
{
	return int(i * (i + 1) / 2);
}