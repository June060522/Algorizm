#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int answerArr[200005];

int find(int x)
{
	if (v[x] == x)
		return x;
	return v[x] = find(v[x]);
}


int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios::sync_with_stdio(false);

	v.resize(200005);
	int testcase = 0;
	cin >> testcase;

	for (int i = 0; i < testcase; i++)
	{
		int answer = 0;
		unordered_map<string, int> collection;
		int idx = 1;
		int repeat = 0;
		string name, name2;
		int save1, save2;
		fill(v.begin(), v.end(), 0);
		fill(answerArr, answerArr + 200005, 1);

		cin >> repeat;
		for (int j = 0; j < repeat; j++)
		{
			cin >> name >> name2;

			if (collection.find(name) == collection.end())
			{
				collection.insert(make_pair(name, idx++));
				v[collection[name]] = collection[name];
			}
			if (collection.find(name2) == collection.end())
			{
				collection.insert(make_pair(name2, idx++));
				v[collection[name2]] = collection[name2];
			}

			save1 = find(collection[name]);
			save2 = find(collection[name2]);

			if (save1 != save2)
			{
				v[save2] = save1;
				answerArr[save1] += answerArr[save2];
			}
			answer = max(answerArr[save1], answerArr[save2]);

			cout << answer << '\n';
		}
	}
}