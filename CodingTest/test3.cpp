#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int destX[4] = { -1, 1, 0, 0 };
int destY[4] = { 0, 0, -1, 1 };

int BFS(int x, int y, int r, int c, bool check[101][101]) {
	queue<pair<int, int>> q;
	q.push({ x, y });
	check[y][x] = true;

	while (q.empty() == false) {
		pair<int, int> node = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			pair<int, int> next = { node.first + destX[i], node.second + destY[i] };

			if(next.first < 0 || next.second > )
			if(check[next.second])
		}
	}
	
}

int main() {
	int t;

	cin >> t;

	while (t--) {
		int r;
		int c;

		char map[101][101] = {};
		bool check[101][101] = {};

		cin >> r >> c;

		for (int i = 0; i < r; i++) {
			string line;
			cin >> line;
			
			for (int j = 0; j < c; j++) {
				map[i][j] = line[j];
			}
		}

		queue<pair<int, int>> q;
		

	}
}