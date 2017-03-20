#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll> adj[100];
bool visited[100];

void dfs(ll s)
{
    visited[s] = true;
    for(ll i = 0; i < adj[s].size(); ++i)
    {
        if(visited[adj[s][i]] == false)
            dfs(adj[s][i]);
    }
}

void initialize()
{
    for(ll i = 0; i < 10; ++i)
        visited[i] = false;
}

int main()
{
    ll nodes, edges, x, y, connectedComponents = 0;
    cin >> nodes;                       //Number of nodes
    cin >> edges;                       //Number of edges
    for(ll i = 0; i < edges; ++i)
    {
        cin >> x >> y;
        //Undirected Graph
        adj[x].push_back(y);                   //Edge from vertex x to vertex y
        adj[y].push_back(x);                   //Edge from vertex y to vertex x
    }

    initialize();                           //Initialize all nodes as not visited

    for(ll i = 1; i <= nodes; ++i)
    {
        if(visited[i] == false)
        {
            dfs(i);
            connectedComponents++;
        }
    }
    cout << "Number of connected components: " << connectedComponents << endl;
    return 0;
}
