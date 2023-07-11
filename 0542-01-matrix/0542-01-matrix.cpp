class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
	    int m=mat[0].size();
	    queue<pair<pair<int,int>,int>>q;
	    vector<vector<int>>visited(n,vector<int>(m,-1));
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(mat[i][j]==0){
	                q.push({{i,j},0});
	                visited[i][j]=0;
	            }
	        }
	    }
	    int delr[]={-1,0,1,0};
	    int delc[]={0,1,0,-1};
	    while(!q.empty()){
	        int row=q.front().first.first;
	        int col=q.front().first.second;
	        int t=q.front().second;
	        q.pop();
	        for(int i=0;i<4;i++){
	            int nrow=row+delr[i];
	            int ncol=col+delc[i];
	            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && mat[nrow][ncol]==1 && visited[nrow][ncol]==-1){
	                visited[nrow][ncol]=t+1;
	                q.push({{nrow,ncol},t+1});
	            }
	        }
	    }
	    return visited;
    }
};