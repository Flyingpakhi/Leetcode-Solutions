class Solution {
public:
    bool topoSort(int V, vector<int> adj[],vector<int>&ans) 
	{
	    vector<int>indeg(V,0);
	    for(int i=0;i<V;i++){
	        for(auto it:adj[i]){
	            indeg[it]++;
	        }
	    }
	    queue<int>q;
	    for(int i=0;i<V;i++){
	        if(indeg[i]==0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int node=q.front();
	        q.pop();
	        ans.push_back(node);
	        for(auto i:adj[node]){
	            indeg[i]--;
	            if(indeg[i]==0){
	                q.push(i);
	            }
	    }
	}
	if(ans.size()!=V){
        ans.clear();
        return false;
    }
        return true;
}
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>adj[numCourses];
        vector<int>ans;
	    for(int i=0;i<prerequisites.size();i++){
	        int f=prerequisites[i][0];
	        int s=prerequisites[i][1];
	        adj[s].push_back(f);
	    }
	    bool res=topoSort(numCourses,adj,ans);
        return ans;
        
    }
};