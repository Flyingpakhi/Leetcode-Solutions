class Solution {
public:
    int subtractProductAndSum(int n) {
        int pro=1;
        int sum=0;
        while(n!=0){
            int last=n%10;
            sum+=last;
            pro*=last;
            n=n/10;
        }
        int ans=pro-sum;
        return ans;
    }
};