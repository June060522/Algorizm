#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct node
{
	int index = 0;
	node* left;
	node* right;
};

node* makeTree(vector<vector<int>>& nodeinfo, int start, int end)
{
	if (start > end) return NULL;
	int maxHeight = nodeinfo[start][1];
	int curNodeIdx = start;
	for (int i = start + 1; i <= end; i++)
	{
		if (maxHeight < nodeinfo[i][1])
		{
			maxHeight = nodeinfo[i][1];
			curNodeIdx = i;
		}
	}
	node* nd = new node();
	nd->index = nodeinfo[curNodeIdx][2];
	nd->left = makeTree(nodeinfo, start, curNodeIdx - 1);
	nd->right = makeTree(nodeinfo, curNodeIdx + 1, end);
	return nd;
}

vector<int> pre;
vector<int> post;

void Preorder(node* tree)
{
	pre.push_back(tree->index);
	if (tree->left != NULL)
		Preorder(tree->left);
	if (tree->right != NULL)
		Preorder(tree->right);
}

void Postorder(node* tree)
{
	if (tree->left != NULL)
		Postorder(tree->left);
	if (tree->right != NULL)
		Postorder(tree->right);

	post.push_back(tree->index);
}

vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
	vector<vector<int>> answer;

	for (int i = 0; i < nodeinfo.size(); i++)
		nodeinfo[i].push_back(i + 1);

	sort(nodeinfo.begin(), nodeinfo.end());
	node* tree = makeTree(nodeinfo, 0, nodeinfo.size() - 1);

	Preorder(tree);
	Postorder(tree);

	answer.push_back(pre);
	answer.push_back(post);

	return answer;
}

int main()
{
	vector<vector<int>>v = solution({ {5, 3},{11, 5},{13, 3},{3, 5},{6, 1},{1, 3},{8, 6},{7, 2},{2, 2} });
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
}