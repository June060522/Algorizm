#include <string>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    for (int i = 0; i < progresses.size(); i++)
    {
        int day = 0;
        while (progresses[i] < 100)
        {
            progresses[i] += speeds[i];
            day++;
        }
        q.push(day);
    }

    while (!q.empty())
    {
        int size = 1;
        int saveNum = q.front();
        q.pop();
        while (!q.empty() && q.front() <= saveNum)
        {
            q.pop();
            size++;
        }
        answer.push_back(size);
    }
    return answer;
}