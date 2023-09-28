#include <iostream>
#include <vector>

using namespace std;

int n;

struct tree
{
	int left;
	int right;
};

tree t[10][10];
vector<int> answer[11];

void setTree(int num, int deep)
{
	//if(t[deep])
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
		setTree(input, 1);
	}

	for (int i = 0; i < n; i++)
	{
		for (size_t j = 0; j < answer[i].size(); j++)
		{
			cout << answer[i][j] << " ";
		}
		cout << '\n';
	}
}