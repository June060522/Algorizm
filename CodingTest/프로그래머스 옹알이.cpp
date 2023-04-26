#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for (int i = 0; i < babbling.size(); i++)
    {
        bool one = true;
        bool two = true;
        bool three = true;
        bool four = true;
        int idx = 0;
        while (babbling[i].length() > idx)
        {
            if (babbling[i][idx] == 'a' && babbling[i][idx + 1] == 'y'
                && babbling[i][idx + 2] == 'a')
            {
                idx += 3;
            }
            else if (babbling[i][idx] == 'y' && babbling[i][idx + 1] == 'e')
            {
                idx += 2;
            }
            else if (babbling[i][idx] == 'w' && babbling[i][idx + 1] == 'o'
                && babbling[i][idx + 2] == 'o')
            {
                idx += 3;
            }
            else if (babbling[i][idx] == 'm' && babbling[i][idx + 1] == 'a')
            {
                idx += 2;
            }
            else
            {
                answer--;
                break;
            }
        }
        answer++;
    }
    return answer;
}
int main()
{
    vector<string> v;
    v.push_back("ye");
    cout << solution(v);
}