#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    queue<int> q;
    for (int i = 0; i < arr.size(); i++)
    {
        if (q.empty() || q.back() != arr[i])
        {
            q.push(arr[i]);
            answer.push_back(arr[i]);
        }
    }

    return answer;
}