#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	int cnt = 0;
	while (true)
	{
		cnt = 0;
		getline(cin,a);
		if (a == "#")
		{
			return 0;
		}
		for(int i = 0; i <a.length(); i++)
			a[i] = tolower(a[i]);

		for (int i = 0; i < a.length(); i++)
		{
			if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
				cnt++;
		}

		cout << cnt << endl;
	}
}