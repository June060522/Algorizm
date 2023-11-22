//#include <string>
//#include <vector>
//
//using namespace std;
//
//long long solution(int n, vector<int> times) {
//    long long answer = 0;
//
//    long long low = 0, high = times.back(), middle;
//    high *= n;
//    while (low <= high)
//    {
//        long long save = 0;
//        middle = (low + high) / 2;
//        for (auto i : times)
//        {
//            save += middle / i;
//        }
//
//        if (save < n)
//        {
//            low = middle + 1;
//        }
//        else
//        {
//            answer = middle;
//            high = middle - 1;
//        }
//    }
//    return answer;
//}