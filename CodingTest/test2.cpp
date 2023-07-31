//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//    int input, result = 1000001;
//    cin >> input;
//    string str = to_string(input);
//
//    for (int i = 0; i < str.size(); ++i)
//    {
//        for (int j = 0; j < str.size(); ++j)
//        {
//            if (i == j)
//                continue;
//            swap(str[i], str[j]);
//            if (stoi(str) > input)
//            {
//                if (result > stoi(str))
//                    result = stoi(str);
//            }
//        }
//    }
//
//    if (result == 1000001)
//        cout << 0;
//    else
//        cout << result;
//}