class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                //primary i==j and secondary i+j==size-1;
                if((i==j || i+j==n-1) && grid[i][j]==0){
                    return false;
                }
                else if((i!=j && i+j!=n-1) && grid[i][j]!=0){
                    return false;
                }
            }
        }
        return true;
    }
};