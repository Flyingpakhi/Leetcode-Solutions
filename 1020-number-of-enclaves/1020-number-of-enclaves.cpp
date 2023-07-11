class Solution {
public:
    void dfs(vector<vector<int>>& grid,int row,int col,vector<vector<int>>&visited,
  int delr[],int delc[]){
    visited[row][col]=1;
    for(int i=0;i<4;i++){
        int nrow=row+delr[i];
        int ncol=col+delc[i];
        if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && visited[nrow][ncol]==0
        && grid[nrow][ncol]==1){
            dfs(grid,nrow,ncol,visited,delr,delc);    
        }
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        for(int j=0;j<m;j++){
            // first row
            if(visited[0][j]==0 && grid[0][j]==1){
                dfs(grid,0,j,visited,delr,delc);
            }
            // last row
            if(visited[n-1][j]==0 && grid[n-1][j]==1){
                dfs(grid,n-1,j,visited,delr,delc);
            }
        }
        for(int j=0;j<n;j++){
            // first col
            if(visited[j][0]==0 && grid[j][0]==1){
                dfs(grid,j,0,visited,delr,delc);
            }
            // last col
            if(visited[j][m-1]==0 && grid[j][m-1]==1){
                dfs(grid,j,m-1,visited,delr,delc);
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && visited[i][j]==0){
                    count++;
                }
            }
        }
        return count;
    }
};