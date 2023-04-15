class Solution {
public:
    int bitwiseComplement(int n) {
        int mask=0;
        int m=n;
        if(n==0){
            return 1;
        }
        while(n!=0){
            mask=mask<<1;
            mask=mask|1;
            n=n>>1;
        }
        int ans=mask & (~m);
        return ans;
    }
};