#include <iostream>

using namespace std;
int main()
{
	string a;
	string b;
	cin >> a >> b;
	long long int sum = 0;
	long long int answer = 0;

	for (int i = 0; i < b.length(); i++)
	{
		sum += b[i] - '0';
	}
	
	for (int i = 0; i < a.length(); i++)
	{
		answer += sum * (a[i] - '0');
	}

	cout << answer;
}