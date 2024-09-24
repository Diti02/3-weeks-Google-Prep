#include<bits/stdc++.h>
using namespace std;
//TC: O(n)+ O(n+m)
//SC: O(n+m)
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adjList[n];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cout<<i<<"-->"
        for(int j=0;j<adj[i].size();j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

//For weighted graph
// Create adjacency list for a weighted graph
    vector<pair<int, int>> adjList[n];
    
    // Input the edges
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;  // u and v are vertices, w is the weight
        adjList[u].push_back({v, w});
        adjList[v].push_back({u, w});  
    }