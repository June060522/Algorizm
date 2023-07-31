#include <iostream>
#include <set>

using namespace std;

set<string> se;
string arr[11];
bool visited[11];
int cnt = 0;
int answer = 0;
int repeat = 0;

void backTracking(int idx, string s)
{
	if (idx > cnt)
	{
		if (se.find(s) == se.end())
		{
			se.insert(s);
			answer++;
		}
	}
	else
	{
		for (int i = 1; i <= repeat; i++)
		{
			if (visited[i]) continue;
			visited[i] = true;
			s += arr[i];
			backTracking(idx + 1, s);
			s.erase(s.length() - arr[i].length());
			visited[i] = false;  
		}
	}
}

int main()
{
	cin >> repeat >> cnt;
	for (int i = 1; i <= repeat; i++)
	{
		cin >> arr[i];
	}
	backTracking(1, "");
	cout << answer;
}