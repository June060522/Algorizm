#include <iostream>
#include <cmath>

using namespace std;

void TowerMove(int,int, int, int);
int main()
{
	int num = 0;
	cin >> num;
	cout << pow(2,num) - 1 << "\n";
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

	
}