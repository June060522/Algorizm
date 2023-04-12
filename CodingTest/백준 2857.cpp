#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int i = 1;
	int cnt = 0;
	while (cin >> s)
	{
		if (s.find("FBI") != string::npos)
		{
			cout << i << " ";
			cnt++;
		}
		i++;
	}

	if (cnt == 0)
	{
		cout << "HE GOT AWAY!";
	}
}