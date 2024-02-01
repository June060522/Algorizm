#include <iostream>

using namespace std;

int main()
{
	int m, n;
	int input;
	
	cin >> m >> n;
	
	for (int i = 0; i < m; i++)
	{
		cin >> input;
		if (i != 0 && i % n == 0)
			cout << endl;
		cout << input << " ";
	}

}