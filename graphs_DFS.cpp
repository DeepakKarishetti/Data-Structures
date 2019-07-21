// Simple implementation of graphs in Depth First Search in C++

#include <iostream>
#include <vector>

using namespace std;

// add edge in an undirected graph connecting together
void add_edge(vector <int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// perform DFS recursively from a vertex u
void DFS_fun(int u, vector <int> adj[], vector <bool> &visited)
{
	visited[u] = true;
	cout << u << " ";

	for (int i = 0; i < adj[u].size(); i++)
	{
		if (visited[adj[u][i]] == false)
		{
			DFS_fun(adj[u][i], adj, visited);
		}
	}
}

// performs DFS on all unvisited vertices
void DFS(vector <int> adj[], int b)
{
	vector <bool> visited(b, false);
	for (int u = 0; u < b; u++)
	{
		if (visited[u] == false)
		{
			DFS_fun(u, adj, visited);
		}
	}
}

int main()
{
	int V = 5;
	
	vector <int> *adj = new vector <int> [V];

	add_edge(adj, 0, 1);
	add_edge(adj, 0, 4);
	add_edge(adj, 1, 2);
	add_edge(adj, 1, 3);
	add_edge(adj, 1, 4);
	add_edge(adj, 2, 3);
	add_edge(adj, 3, 4);
	DFS(adj, V);
	
	return 0;
}
