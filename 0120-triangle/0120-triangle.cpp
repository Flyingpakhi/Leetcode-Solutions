class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        //make a dp arr of n+1 size as triangle size is n
        int n=triangle.size();
        vector<int>dp(n+1,0);
        //traverse from bottom to top row
        for(int i=n-1;i>=0;i--){
            //traverse through each row
            for(int j=0;j<=i;j++){
                //for each current row val, check minimum of j and j+1 value of dp
                dp[j]=min(dp[j],dp[j+1])+triangle[i][j];
            }
        }
        return dp[0];
        
    }
};