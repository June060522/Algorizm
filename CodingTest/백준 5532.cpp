#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int L;
	float A, B, C, D;
	float day = 0;
	cin >> L >> A >> B >> C >> D;
	A /= C;
	B /= D;
	day = A > B ? A : B;
	L -= ceil(day);

	cout << L;
}