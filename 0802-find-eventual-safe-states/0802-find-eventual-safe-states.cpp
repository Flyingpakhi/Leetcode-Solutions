class Solution {
public:
    bool dfs(vector<vector<int>>&graph,vector<bool>&visited,vector<bool>&pathvisit,int src,vector<int>&check){
        visited[src]=true;
        pathvisit[src]=true;
        check[src]=0;
        for(auto i:graph[src]){
            if(!visited[i]){
            bool c=dfs(graph,visited,pathvisit,i,check);
            if(c==true){
                return true;
            }
        }
        else if(visited[i]==true && pathvisit[i]==true){
            return true;
        }
    }
    check[src]=1;
    pathvisit[src]=false;
    return false;
    }   
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<bool>visited(graph.size(),false);
        vector<bool>pathvisit(graph.size(),false);
        vector<int>check(graph.size(),0);
        vector<int>safenodes;
        for(int i=0;i<graph.size();i++){
            if(!visited[i]){
                dfs(graph,visited,pathvisit,i,check);
            }
        }
        for(int i=0;i<graph.size();i++){
            if(check[i]==1){
                safenodes.push_back(i);
            }
        }
        return safenodes;
    }
};