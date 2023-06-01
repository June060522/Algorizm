#include <string>
#include <queue>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int curWeight = 0;
    queue<int> q;

    for (int i = 0; i < truck_weights.size(); i++)
    {
        while (true)
        {
            if (q.size() == bridge_length)
            {
                curWeight -= q.front();
                q.pop();
            }

            if (curWeight + truck_weights[i] <= weight)
                break;

            q.push(0);
            answer++;
        }

        q.push(truck_weights[i]);
        curWeight += truck_weights[i];
        answer++;
    }
    answer += bridge_length;
    return answer;
}