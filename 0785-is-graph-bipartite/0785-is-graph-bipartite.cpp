class Solution {
public:
    bool check(vector<vector<int>>&graph,int start,vector<int>&colour){
        queue<int>q;
	    q.push(start);
	    colour[start]=0;
	    while(!q.empty()){
	        int frontnode=q.front();
	        q.pop();
	        for(auto neig:graph[frontnode]){
	            if(colour[neig]==-1){
	                colour[neig]=1-colour[frontnode];
	                q.push(neig);
	            }
	            else if(colour[neig]==colour[frontnode]){
	                    return false;
	                }
	            }
	        }
	    return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>colour(V,-1);
	    for(int i=0;i<V;i++){
	        if(colour[i]==-1){
	            if(check(graph,i,colour)==false){
	                return false;
	            }
	        }
	    }
	    return true;
    }
};