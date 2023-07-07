class Solution {
public:
    int bfs(vector<vector<bool>>&visited,vector<vector<int>>& grid,int row,int col){
        queue<pair<int,int>>q;
        int val=0;
        q.push(make_pair(row,col));
        visited[row][col]=true;
        val+=grid[row][col];
        // cout<<row<<" "<<col<<endl;
        while(!q.empty()){
            pair<int,int>frontnode=q.front();
            q.pop();
            int row=frontnode.first;
            int col=frontnode.second;
            for(int delrow=-1;delrow<=1;delrow++){
                for(int delcol=-1;delcol<=1;delcol++){
                    int nrow=row+delrow;
                    int ncol=col+delcol;
                    if(nrow>=0 && nrow<grid.size() && ncol>=0 && ncol<grid[0].size() && (nrow==row || ncol==col) && visited[nrow][ncol]==false && grid[nrow][ncol]>0){
                        visited[nrow][ncol]=true;
                        q.push(make_pair(nrow,ncol));
                        val+=grid[nrow][ncol];
                        // cout<<nrow<<" "<<ncol<<endl;
                        
                    }
                }
            }
        }
        return val;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>>visited(n,vector<bool>(m,false));
        int cnt=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(!visited[row][col] && grid[row][col]>0){
                    int val=bfs(visited,grid,row,col);
                    if(val>cnt){
                        cnt=val;
                    }
                }
            }
        }
        return cnt;
    }
};