#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	int idx = 1;
	while (true)
	{
		getline(cin,str);
		if (str == "0")
			return 0;

		cout << "Case "<<idx<<": Sorting... done!\n";
		idx++;
	}
}