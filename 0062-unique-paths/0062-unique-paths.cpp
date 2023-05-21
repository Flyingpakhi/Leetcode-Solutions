class Solution {
public:
    int solve(int r,int c,vector<vector<int>>&dp){
	if(r==0&&c==0){
		return 1;
	}
	if(r<0||c<0){
		return 0;
	}
	if(dp[r][c]!=-1){
		return dp[r][c];
	}
	int up=solve(r-1,c,dp);
	int left=solve(r,c-1,dp);
	dp[r][c]=up+left;
	return dp[r][c];
}
int uniquePaths(int m, int n) {
	vector<vector<int>>dp(m,vector<int>(n,-1));
	int sum=solve(m-1,n-1,dp);
	return sum;
}
};