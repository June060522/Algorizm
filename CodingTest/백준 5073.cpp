#include <iostream>

using namespace std;

int main()
{
	int a = -1, b = -1, c = -1;
	while (true)
	{
		cin >> a >> b >> c;
		
		if (a + b + c == 0)
			break;
		
		if (a > b)
			swap(a, b);
		if (b > c)
			swap(b, c);
		
		if (a == b && b == c)
			cout << "Equilateral" << '\n';
		else if (a + b <= c)
			cout << "Invalid" << '\n';
		else if (a == b || b == c || c == a)
			cout << "Isosceles" << '\n';
		else
			cout << "Scalene" << '\n';
			
	}
}