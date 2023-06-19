#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string my_string) {
    string answer = "";
    unordered_set<char> us;
    for (int i = 0; i < my_string.length(); i++)
    {
        if (us.find(my_string[i]) == us.end())
        {
            answer += my_string[i];
            us.insert(my_string[i]);
        }
    }
    return answer;
}