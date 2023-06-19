#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    set<int> s;
    for (int i = 0; i <= 9; i++)
        s.insert(i);

    for (int i = 0; i < numbers.size(); i++)
    {
        s.erase(numbers[i]);
    }

    for (auto i : s)
        answer += i;
    return answer;
}