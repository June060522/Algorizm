#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string arrS[100000];
bool check(string a, string b)
{
	string sa = "";
	sa += a[0];
	sa += a[1];
	sa += a[2];
	string sb = "";
	sb += b[0];
	sb += b[1];
	sb += b[2];
	int ai = stoi(sa);
	int bi = stoi(sb);

	if(ai < bi)
		return true;

	return false;
} 

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int repeat = 0;
	cin >> repeat;
	string s;
	getline(cin, s);
	for (int i = 0; i < repeat; i++)
		getline(cin, arrS[i]);

	sort(arrS, arrS + repeat, check);

	for (int i = 0; i < repeat; i++)
	{
		cout << arrS[i] << "\n";
	}
}
