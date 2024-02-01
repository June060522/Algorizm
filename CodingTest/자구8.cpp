#include <iostream>
using namespace std;

int main()
{
	string answer;
	string s;
	string temps;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		temps += s[i];

		if (temps == "one")
		{
			answer += "1";
			temps = "";
		}
		else if (temps == "two")
		{
			answer += "2";
			temps = "";
		}
		else if (temps == "three")
		{
			answer += "3";
			temps = "";
		}
		else if (temps == "four")
		{
			answer += "4";
			temps = "";
		}
		else if (temps == "five")
		{
			answer += "5";
			temps = "";
		}
		else if (temps == "six")
		{
			answer += "6";
			temps = "";
		}
		else if (temps == "seven")
		{
			answer += "7";
			temps = "";
		}
		else if (temps == "eight")
		{
			answer += "8";
			temps = "";
		}
		else if (temps == "nine")
		{
			answer += "9";
			temps = "";
		}
		else if (temps == "zero")
		{
			answer += "0";
			temps = "";
		}
	}
	cout << answer;
}