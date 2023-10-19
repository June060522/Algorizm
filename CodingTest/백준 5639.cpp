#include <iostream>

using namespace std;

void Fast()
{
	cin.tie(nullptr); cout.tie(nullptr);
	ios::sync_with_stdio(false);
}

struct Tree
{
	Tree* left;
	Tree* right;
	int val = 0;
};
Tree mainTree;

void SetTree(int num,Tree& tree)
{
	if (tree.val == 0)
		tree.val = num;
	else
	{
		if (num < tree.val)
		{
			if (tree.left == NULL)
				tree.left = new Tree();
			SetTree(num, *tree.left);
		}
		else
		{
			if (tree.right == NULL)
				tree.right = new Tree();
			SetTree(num, *tree.right);
		}
	}
}

void PrintTree(Tree& tree)
{
	if (tree.left != NULL)
		PrintTree(*tree.left);

	if (tree.right != NULL)
		PrintTree(*tree.right);

	cout << tree.val << '\n';
}

int main()
{
	Fast();
	int num;
	while (cin >> num)
	{
		SetTree(num, mainTree);
	}

	PrintTree(mainTree);
}