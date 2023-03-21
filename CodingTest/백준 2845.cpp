#include <iostream>

using namespace std;

int main()
{
	int m,s,size;
	int input;
	cin >> m >> s;
	size = m * s;
	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		cout << input - size << " ";
	}
}