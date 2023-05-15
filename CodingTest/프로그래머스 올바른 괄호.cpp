#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack <char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ')')
        {
            if (!st.empty())
                st.pop();
            else
                return false;
        }
        else
            st.push(s[i]);
    }
    if (st.empty())
        return true;
    else
        return false;
}