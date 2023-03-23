#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	int repeat;
	cin >> repeat;
	for (int i = 1; i <= repeat; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << j << " ";

		cout << endl;
	}
}