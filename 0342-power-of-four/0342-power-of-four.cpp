class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1){
            return true;
        }
        int sum=1;
        while(sum<=n){
            if(sum==n){
                return true;
                break;
            }
            if(sum>INT_MAX/4 || sum<INT_MIN/4){
                return false;
            }
            sum=sum*4;
        }
        return false;
    }
};