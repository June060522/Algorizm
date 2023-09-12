#include <iostream>
#include <string>
#include <vector>

using namespace std;

int answer = 0;

void DFS(int deep, int now, const vector<int>& number, const int target)
{
	if (deep == number.size())
	{
		if (now == target)
			answer++;
	}
	else
	{
		DFS(deep + 1, now + number[deep], number, target);
		DFS(deep + 1, now - number[deep], number, target);
	}
}

int solution(vector<int> numbers, int target) {
	DFS(0, 0, numbers, target);
	return answer;
}

int main()
{
	cout << solution({ 1,1,1,1,1 }, 3);
	cout << endl;
	cout << solution({ 4,1,2,1 }, 4);
}