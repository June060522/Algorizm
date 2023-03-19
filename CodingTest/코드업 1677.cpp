#include <iostream>

using namespace std;

void horizontal(int);
void vertical(int);
int main()
{
	int a, b;
	cin >> a >> b;
	vertical(a - 2);
	for (int i = 0; i < b - 2; i++)
	{
		horizontal(a - 2);
	}
	vertical(a - 2);
}

void horizontal(int a)
{
	cout << "|";
	for (int i = 0; i < a; i++)
		cout << " ";
	cout << "|\n";
}

void vertical(int a)
{
	cout << "+";
	for (int i = 0; i < a; i++)
		cout << "-";
	cout << "+\n";
}