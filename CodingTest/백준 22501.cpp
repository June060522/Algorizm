#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;
int use = 0;
int recursion(const char* s, int l, int r) {
    use++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() 
{
    int repeat = 0;
    char a[1001];
    cin >> repeat;
    for (int i = 0; i < repeat; i++)
    {
        cin >> a;
        use = 0;
        cout << isPalindrome(a) << ' ' << use << endl;
    }
}