#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int hanoi(int h, int from, int by, int to)
{
    if (h == 1)
    {
        cout << from << " " << to << "\n";
    }
    else
    {
        hanoi(h - 1, from, to, by);
        cout << from << " " << to << "\n";
        hanoi(h - 1, by, from, to);
    }
    return 0;
}
vector<int> v;

void CountHanoi(int i) {
    if (i == 0) return;
    
    for (int i = v.size()-1; i >= 0; i--)
    {
        v[i] *= 2;
        if (v[i] >= 10)
        {
            if (i == v.size() - 1)
            {
                v.push_back(1);
            }
            else
            {
                v[i + 1] += 1;
            }
            v[i] -= 10;
        }
    }

    return (CountHanoi(i - 1));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    v.push_back(1);
    CountHanoi(n);
    v[0] -= 1;
    
    for(int i = v.size()-1; i >= 0; i--)
        cout << v[i];

    cout << "\n";
    if (n <= 20)
        hanoi(n, 1, 2, 3);
    else
        return 0;
}