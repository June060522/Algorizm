#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n, m;
	cin >> n >> m;

	string save1, save2, save3, save4;

	for (int i = 0; i < n.length(); i++)
	{
		if (n[i] == '6')
			save1 += '5';
		else
			save1 += n[i];
		if (n[i] == '5')
			save2 += '6';
		else
			save2 += n[i];
	}

	for (int i = 0; i < m.length(); i++)
	{
		if (m[i] == '6')
			save3 += '5';
		else
			save3 += m[i];
		if (m[i] == '5')
			save4 += '6';
		else
			save4 += m[i];
	}

	cout << stoi(save1) + stoi(save3) << " " << stoi(save2) + stoi(save4);
}