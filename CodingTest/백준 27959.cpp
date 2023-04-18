#include <iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	N *= 100;
	if (N >= M)
		cout << "Yes";
	else
		cout << "No";
}