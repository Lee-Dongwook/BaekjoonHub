#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 100000
using namespace std;

int ch[MAX];

class Edge {
public:
	int node[2];
	int distance;
	Edge(int a, int b, int distance)
	{
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}
	bool operator<(Edge &edge)
	{
		return this->distance < edge.distance;
	}

};

int getParent(int node)
{
	if (ch[node] == node) return node;
	return getParent(ch[node]);
}

void unionParent(int node1, int node2)
{
	node1 = getParent(node1);
	node2 = getParent(node2);
	if (node1 < node2) ch[node2] = node1;
	else ch[node1] = node2;
}

bool isCycle(int node1, int node2)
{
	node1 = getParent(node1);
	node2 = getParent(node2);

	if (node1 == node2)return true;
	else return false;
}

int main(void)
{
	vector<Edge> v;
	int V, E;
	cin >> V >> E;
	for (int i = 0; i < E; i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		v.push_back({ a,b,c });
	}

	sort(v.begin(), v.end());

	for (int i = 1; i < V; i++)
	{
		ch[i] = i;
	}

	int sum = 0;

	for (int i = 0; i < v.size(); i++)
	{
		if (!isCycle(v[i].node[0], v[i].node[1]))
		{
			sum += v[i].distance;
			unionParent(v[i].node[0], v[i].node[1]);
		}
	}

	cout << sum;
	return 0;
}
