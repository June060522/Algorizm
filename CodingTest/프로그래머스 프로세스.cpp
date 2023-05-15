#include <string>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> priorities, int location) {
	queue<pair<int, int>> q;
	for (int i = 0; i < priorities.size(); i++)
	{
		q.push(make_pair(priorities[i], i));
	}
	sort(priorities.begin(), priorities.end() , greater<int>());
	int answer = 0;
	while (true)
	{
		if (q.front().first == priorities[answer])
		{
			if (q.front().second == location)
			{
				answer++;
				break;
			}
			q.pop();
			answer++;
		}
		else
		{
			q.push(q.front());
			q.pop();
		}
	}
	return answer;
}