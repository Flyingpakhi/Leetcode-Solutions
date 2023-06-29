class Solution {
public:
    void bfs(vector<vector<int>>&isConnected,unordered_map<int,bool>&visited,int src,int V){
        queue<int>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            int frontnode=q.front();
            // cout<<frontnode<<endl;
            q.pop();
            for(int j=0;j<V;j++){
                if(frontnode==j){
                    continue;
                }
                if(isConnected[frontnode][j]==1 && !visited[j]){
                    visited[j]=true;
                    q.push(j);
                }
            }
        }
  }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V=isConnected.size();
        unordered_map<int,bool>visited;
        int count=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                bfs(isConnected,visited,i,V);
                count++;
            }
        }
        return count;
    }
};