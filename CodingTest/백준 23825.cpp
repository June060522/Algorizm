#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n, m, l;
    int num;
    int max = 0;
    int save, plus = 0;
    int saveL = 0;
    int result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        queue<int> q;
        cin >> m >> l;
        saveL = l;
        for (int j = 0; j < m; j++)
        {
            cin >> num;
            if (num > max)
            {
                max = num;
            }
            q.push(num);
        }
        while (q.front() != max)
        {
            save = q.front();
            q.pop();
            cout << q.front();
            q.push(save);
            if (saveL < 0)
            {
                plus++;
                result = m - plus;
            }
            else
            {
                saveL--;
                result = saveL;
            }
        }
        cout << result << '\n';
    }
}