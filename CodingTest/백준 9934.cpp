#include <iostream>
#include <vector>

using namespace std;

int n;

struct tree
{
	int left;
	int right;
};

vector<int> answer[11];

void setTree()
{

}

int main()
{
	cin >> n;
	int repeat = 1;
	for (int i = 1; i < n; i++)
		repeat += repeat + 1;

	int input;
	for (int i = 0; i < repeat; i++)
	{
		cin >> input;
	}
}