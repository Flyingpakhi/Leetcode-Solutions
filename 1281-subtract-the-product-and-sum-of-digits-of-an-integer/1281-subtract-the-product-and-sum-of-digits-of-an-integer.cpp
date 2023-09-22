class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1;
        while(n>0){
            int last=n%10;
            sum+=last;
            pro=pro*last;
            n=n/10;
        }
        return pro-sum;
    }
};