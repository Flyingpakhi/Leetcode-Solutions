class Solution {
public:
    bool findPath(unordered_map<int,list<int>>&adj,vector<bool>&visited,int src,int dest){
        visited[src]=true;
        queue<int>q;
        q.push(src);
        while(!q.empty()){
            int frontNode=q.front();
            if(frontNode==dest){
                return true;
            }
            q.pop();
            for(auto i:adj[frontNode]){
                if(!visited[i]){
                    visited[i]=true;
                    q.push(i);
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int,list<int>>adj;
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool>visited(n);
        bool ans=findPath(adj,visited,source,destination);
        return ans;
    }
};