#include <iostream>
#include <math.h>

using namespace std;

void TowerMove(int,int, int, int);
int main()
{
	int num = 0;
	cin >> num;
	int k = (int)(pow(2, num) - 1);
	cout << k << "\n";
	TowerMove(num,1, 2, 3);
}

void TowerMove(int num,int one ,int two, int three)
{
	if (num == 1)
		cout << one << " " << three << "\n";
	else
	{
		TowerMove(num - 1, one, three, two);
		cout << one<< " "<< three << "\n";
		TowerMove(num - 1, two, one, three);
	}
	return;
}