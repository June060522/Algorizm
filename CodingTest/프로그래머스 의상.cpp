#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> m;
    int answer = 0;
    for (int i = 0; i < clothes.size(); i++)
    {
        m[clothes[i][1]]++;
    }
    answer = 1;
    for (auto i : m)
        answer *= i.second + 1;
    return answer - 1;
}

int main() {
    solution({ {"yellow_hat", "headgear"}, { "blue_sunglasses", "eyewear"}, { "green_turban", "headgear"} });
    solution({ {"crow_mask", "face"}, { "blue_sunglasses", "face"}, { "smoky_makeup", "face"} });
}