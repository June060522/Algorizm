#include <iostream>

using namespace std;

int main()
{
	int repeat = 0;
	string a = "";
	cin >> repeat;

	for (int i = 0; i < repeat; i++)
	{
		cin >> a;
		cout << a[0] << a[a.size()-1]<<endl;
	}
}