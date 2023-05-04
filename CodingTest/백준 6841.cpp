#include <iostream>

using namespace std;

int main()
{
	string a;
	while (cin >> a)
	{
		if (a == "CU")
			cout << "see you";
		else if (a == ":-)")
			cout << "I¡¯m happy";
		else if (a == ":-(")
			cout << "I¡¯m unhappy";
		else if (a == ";-)")
			cout << "wink";
		else if (a == ":-P")
			cout << "stick out my tongue";
		else if (a == "(~.~)")
			cout << "sleepy";
		else if (a == "TA")
			cout << "totally awesome";
		else if (a == "CCC")
			cout << "Canadian Computing Competition";
		else if (a == "CUZ")
			cout << "because";
		else if (a == "TY")
			cout << "thank-you";
		else if (a == "YW")
			cout << "you¡¯re welcome";
		else if (a == "TTYL")
			cout << "talk to you later";
		else
			cout << a;

		cout << '\n';
	}
}