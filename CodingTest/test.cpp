#include <iostream>

using namespace std;

int main()
{
	char str1[] = { 'c','+','+'};//O
	char str2[] = "C++";//O
	char str3[] = { "C++"};//O

	for (int i = 0; i < 3; i++)
	{
		cout << str3[i];
	}
}