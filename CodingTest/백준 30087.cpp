#include <iostream>

using namespace std;

int main()
{
	string s;
	int repeat = 0;
	cin >> repeat;
	for (int i = 0; i < repeat; i++)
	{
		cin >> s;
		if (s == "Algorithm")
			cout << "204";
		else if (s == "DataAnalysis")
			cout << "207";
		else if (s == "ArtificialIntelligence")
			cout << "302";
		else if (s == "CyberSecurity")
			cout << "B101";
		else if (s == "Network")
			cout << "303";
		else if (s == "Startup")
			cout << "501";
		else if (s == "TestStrategy")
			cout << "105";

		cout << '\n';
	}
}