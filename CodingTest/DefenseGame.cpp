//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int solution(int n, int k, vector<int> enemy) {
//    int answer = 0;
//    for (int i = 0; i < enemy.size(); i++)
//    {
//        if (n > enemy[i])
//        {
//            n -= enemy[i];
//        }
//        else if(k > 0)
//        {
//            k--;
//        }
//        else
//            break;
//
//        n -= enemy[i];
//    }
//    return answer;
//}
//
//int main()
//{
//    int answer = solution(7,3, vector<int> {1, 2, 3, 4});
//    cout << answer;
//}