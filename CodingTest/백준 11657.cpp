#include <iostream>
#include <vector>
#include <tuple>
using namespace std;
typedef tuple<int, int, int> edge;
int main() {
    int n, m;
    int f, s, t;
    bool minus = false;
    vector<long> dis;
    vector<edge> edges;

    cin >> n >> m;
    dis.resize(n + 1);
    fill(dis.begin(), dis.end(), 2147483647);
    for (int i = 0; i < m; i++) {
        cin >> f >> s >> t;
        edges.push_back({ f, s, t });
    }
    dis[1] = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < m; j++) {
            edge medge = edges[j];
            f = get<0>(medge);
            s = get<1>(medge);
            t = get<2>(medge);

            if (dis[f] != 2147483647 && dis[s] > dis[f] + t) {
                dis[s] = dis[f] + t;
            }
        }
    }
    for (int j = 0; j < m; j++) {
        edge medge = edges[j];
        f = get<0>(medge);
        s = get<1>(medge);
        t = get<2>(medge);

        if (dis[f] != 2147483647 && dis[s] > dis[f] + t) {
            minus = true;
        }
    }
    if (minus) {
        cout << -1;
    }
    else {
        for (int i = 2; i <= n; i++) {
            if (dis[i] == 2147483647)
                cout << -1 << "\n";
            else
                cout << dis[i] << "\n";
        }
    }
}