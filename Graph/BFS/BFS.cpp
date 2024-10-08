//TC: O(V+2E)
//SC: O(3V)
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>ans;
        vector<int>vis(V,0);
        vis[0]=1;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            ans.push_back(node);
            
            for(auto it: adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }                
            }
        }
        return ans;
    }
};