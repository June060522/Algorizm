#include <iostream>
#include <list>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N, K;

	cin >> N >> K;
	list <int> circleList;
	for (int i = 1; i <= N; i++)
		circleList.push_back(i);
	list<int>::iterator target = circleList.begin();

	cout << '<';
	while (N > 0)
	{
		for (int i = 1; i < K; i++)
		{
			target++;
			if(target == circleList.end())
				target = circleList.begin();
		}
		if (N == 1)
		{
			cout << *target;
			break;
		}
		cout << *target << ", ";
		N--;
		target = circleList.erase(target);
		if (target == circleList.end())
			target = circleList.begin();
	}
	cout << '>';
}