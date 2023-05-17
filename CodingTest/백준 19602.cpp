#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	a += b * 2 + c * 3;
	if (a >= 10)
		cout << "happy";
	else
		cout << "sad";
}