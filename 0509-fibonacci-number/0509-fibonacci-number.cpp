class Solution {
public:
    int fib_helper(int*ans,int n){
        if(n<=1){
            return n;
        }
        if(ans[n]!=-1){
            return ans[n];
        }
        int a=fib_helper(ans,n-1);
        int b=fib_helper(ans,n-2);
        ans[n]=a+b;
        return ans[n];
    }
    int fib(int n) {
        int* ans=new int[n+1];
        for(int i=0;i<=n;i++){
            ans[i]=-1;
        }
        return fib_helper(ans,n);
    }
};