#include <iostream>
using namespace std;

struct tree
{
	char left;
	char right;
};

tree t[26];

void Preorder(int n)
{
	cout << (char)(n + 'A');

	if(t[n].left != NULL)
		Preorder(t[n].left);

	if(t[n].right != NULL)
		Preorder(t[n].right);
}

void Inorder(int n)
{

	if (t[n].left != NULL)
		Inorder(t[n].left);
	cout << (char)(n + 'A');

	if (t[n].right != NULL)
		Inorder(t[n].right);
}

void Postorder(int n)
{

	if (t[n].left != NULL)
		Postorder(t[n].left);

	if (t[n].right != NULL)
		Postorder(t[n].right);
	cout << (char)(n + 'A');
}

int main()
{
	int repeat = 0;
	cin >> repeat;
	char a, b, c;
	for (int i = 0; i < repeat; i++)
	{
		cin >> a >> b >> c;
		if(b != '.')
			t[a - 'A'].left = b - 'A';
		if(c != '.')
			t[a - 'A'].right = c - 'A';
	}

	Preorder(0);
	cout << '\n';
	Inorder(0);
	cout << '\n';
	Postorder(0);
	cout << '\n';
}