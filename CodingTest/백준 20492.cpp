#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;
	cout << num / 100 * 78 << " " << (num / 100 * 80) + ((num / 100 * 20) /100 * 78);
}