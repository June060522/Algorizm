#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (int i = 0; i < commands.size(); i++)
    {
        vector<int> v;
        for (int j = commands[i][0] - 1; j <= commands[i][1] - 1; j++)
        {
            v.push_back(array[j]);
        }

        sort(v.begin(), v.end());

        answer.push_back(v[commands[i][2] - 1]);
    }

    return answer;
}

int main()
{
    vector<int> array{ 1,5,2,6,3,7,4 };
    vector<vector<int>> commands{ vector<int>{2,5,3},vector<int>{4,4,1},vector<int>{1,7,3} };
    solution(array, commands);
}