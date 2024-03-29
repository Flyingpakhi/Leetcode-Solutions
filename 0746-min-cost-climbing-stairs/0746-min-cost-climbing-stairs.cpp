class Solution {
public:
    //using recursion + memoization
    /*int solve(vector<int>&cost,vector<int>&dp,int n){
        if(n==0){
            return cost[0];
        }
        if(n==1){
            return cost[1];
        }
        //if already value is stored then just return
        if(dp[n]!=-1){
            return dp[n];
        }
        //store the value in dp array for further use
        //when we are in kth stair then to further go we have to pay the cost of kth stair..so to reach kth stair min cost will be min of k-1 and k-2 cost with addition of kth cost
        dp[n]=min(solve(cost,dp,n-1),solve(cost,dp,n-2))+cost[n];
        return dp[n];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        //make an array of n+1 and initialize with 1
        vector<int>dp(n+1,-1);
        //in the top floor we do not go further so need not to pay the cost
        int ans=min(solve(cost,dp,n-1),solve(cost,dp,n-2));
        return ans;
    }*/
    //using tabulation method bottom up approach\
    
    /*int minCostClimbingStairs(vector<int>& cost){
        int n=cost.size();
        vector<int>dp(n+1);
        //base case analyse
        dp[0]=cost[0];
        dp[1]=cost[1];
        //handle the case from 2 to n-1
        for(int i=2;i<n;i++){
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        //nth case
        return min(dp[n-1],dp[n-2]);
    }*/
    //using space optimization
    
    int minCostClimbingStairs(vector<int>& cost){
        int n=cost.size();
        //base case analyse
        int prev1=cost[0];
        int prev2=cost[1];
        int curr;
        //handle the case from 2 to n-1
        for(int i=2;i<n;i++){
            curr=min(prev1,prev2)+cost[i];
            prev1=prev2;
            prev2=curr;
        }
        //nth case
        return min(prev2,prev1);
    }
};