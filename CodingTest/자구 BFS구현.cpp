#include <iostream>
#include <queue>
using namespace std;

#define MAX_VTXS 256

class AdjMatGraph
{
protected:
	int size;
	char vertices[MAX_VTXS];
	int adj[MAX_VTXS][MAX_VTXS];
	int visited[MAX_VTXS];
public:
	AdjMatGraph() { reset(); }

	char getVertex(int i) { return vertices[i]; }
	int getEdge(int i, int j) {
		return adj[i][j];
	}
	void setEdge(int i, int j, int val) {
		adj[i][j]
			= val;
	}
	bool isEmpty() { return size == 0; }
	bool isFull() { return size >= MAX_VTXS; }
	void reset()
	{
		size = 0;
		for (int i = 0; i < MAX_VTXS; i++)
			for (int j = 0; j < MAX_VTXS; j++)
				setEdge(i, j, 0);
	}
	void insertVertex(const char& c)
	{
		if (!isFull())
			vertices[size++] = c;
	}
	void insertEdge(const int& temp1, const int& temp2)
	{
		setEdge(temp1, temp2, 1);
		setEdge(temp2, temp1, 1);
	}
	void display()
	{
		for (int i = 0; i <= size; i++)
		{
			for (int j = 0; j <= size; j++)
			{
				if (i == 0)
				{
					if (j == 0)
						cout << "  ";
					else
						cout << getVertex(j - 1) << " ";
				}
				else
				{
					if (j == 0)
						cout << getVertex(i - 1) << " ";
					else
						cout << getEdge(i - 1, j - 1) << " ";
				}
			}
			cout << endl;
		}
	}

	void resetVisited()
	{
		for (int i = 0; i < size; i++)
		{
			visited[i] = -1;
		}
	}

	bool isLinked(int u, int v)
	{
		return getEdge(u, v) != 0;
	}

	void BFS(int start)
	{
		queue<int> q;
		visited[start] = 0;
		q.push(start);

		while (!q.empty())
		{
			int x = q.front();
			q.pop();
			cout << getVertex(x) << " ";

			for (int i = 0; i < size; i++)
			{
				if (isLinked(x, i) && visited[i] == -1)
				{
					visited[i] =  visited[x] + 1;
					q.push(i);
				}
			}
		}
		cout << '\n';
		for (int i = 0; i < size; i++)
			cout << visited[i] << " ";
	}
};

AdjMatGraph g;

int main()
{
	int n, m, temp1, temp2;
	cout << "정점의 개수와 간선의 수 :";
	cin >> n >> m;
	cout << "간선의 시작정점과 끝 정점 :" << endl;

	for (int i = 0; i < n; i++)
		g.insertVertex('A' + i);

	for (int i = 0; i < m; i++)
	{
		cin >> temp1 >> temp2;
		g.insertEdge(temp1, temp2);
	}
	cout << "인접 행렬로 표현한 그래프" << endl;
	g.display();
	cout << "BFS 탐색 = > ";
	g.resetVisited();
	g.BFS(0);
	return 0;
}