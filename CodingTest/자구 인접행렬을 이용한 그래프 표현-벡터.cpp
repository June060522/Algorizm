#include <iostream>
#include <vector>
using namespace std;

#define MAX_VTXS 256

class AdjMatGraph
{
protected:
	int size;
	vector<char> vertices;
	vector<vector<int>> adj;
public:
	AdjMatGraph() { reset(); }
	AdjMatGraph(int n) { reset(n); }

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
	void reset(int n = 0)
	{
		if (n != 0)
		{
			vertices.resize(n);
			adj.resize(n);
			for (int i = 0; i < n; i++)
				adj[i].resize(n);
		}
		else
		{
			vertices.resize(MAX_VTXS);
			adj.resize(MAX_VTXS);
			for (int i = 0; i < MAX_VTXS; i++)
				adj[i].resize(MAX_VTXS);
		}

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
					if (j == 0) cout << "  ";
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
}