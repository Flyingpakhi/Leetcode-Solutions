class Solution {
public:
    int ans(int i,int j,vector< vector<int>> &obstacleGrid,vector< vector< int> > &dp){
    if(i>=0 && j>=0 && obstacleGrid[i][j]==1){
        return 0;
    }
    if(i==0 && j==0){
        return 1;
    }
    if(i<0 || j<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up=ans(i-1,j,obstacleGrid,dp);
    int left=ans(i,j-1,obstacleGrid,dp);
    dp[i][j]=(up+left);
    return dp[i][j];
}
int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
    
        return ans(m-1,n-1,obstacleGrid,dp);
    }
};