#include <string>
#include<stack>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.length(); i++)
    {
        bool isTrue = true;
        s += s[0];
        s.erase(s.begin());
        stack<char> st;

        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == ']')
            {
                if (!st.empty() && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            else if (s[j] == ')')
            {
                if (!st.empty() && st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            else if (s[j] == '}')
            {
                if (!st.empty() && st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    isTrue = false;
                    break;
                }
            }
            else
            {
                st.push(s[j]);
            }
        }

        if (st.empty() && isTrue)
            answer++;
    }
    return answer;
}