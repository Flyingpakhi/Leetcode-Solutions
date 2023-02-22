class Solution {
public:
    int climb(int n,int*ans){
        if(n<0){
            return 0;
        }
        if(n==0){
            return 1;
        }
        if(ans[n]!=-1){
            return ans[n];
        }
        int a=climb(n-1,ans);
        int b=climb(n-2,ans);
        ans[n]=a+b;
        return ans[n];
    }
    int climbStairs(int n) {
        int *ans=new int[n+1];
        for(int i=0;i<=n;i++){
            ans[i]=-1;
        }
        return climb(n,ans);
    }
};