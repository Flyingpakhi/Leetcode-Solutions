class Solution {
public:
    void dfs(vector<vector<char>>& board,int row,int col,vector<vector<int>>&visited,int delr[],int delc[]){
    visited[row][col]=1;
    for(int i=0;i<4;i++){
        int nrow=row+delr[i];
        int ncol=col+delc[i];
        if(nrow>=0 && nrow<board.size() && ncol>=0 && ncol<board[0].size() && visited[nrow][ncol]==0
        && board[nrow][ncol]=='O'){
            dfs(board,nrow,ncol,visited,delr,delc);    
        }
    }
}
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>visited(n,vector<int>(m,0));
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        for(int j=0;j<m;j++){
            // first row
            if(visited[0][j]==0 && board[0][j]=='O'){
                dfs(board,0,j,visited,delr,delc);
            }
            // last row
            if(visited[n-1][j]==0 && board[n-1][j]=='O'){
                dfs(board,n-1,j,visited,delr,delc);
            }
        }
        for(int j=0;j<n;j++){
            // first col
            if(visited[j][0]==0 && board[j][0]=='O'){
                dfs(board,j,0,visited,delr,delc);
            }
            // last col
            if(visited[j][m-1]==0 && board[j][m-1]=='O'){
                dfs(board,j,m-1,visited,delr,delc);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]=='O' && visited[i][j]==0){
                    board[i][j]='X';
                }
            }
        }
    }
};