class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        int sum=1;
        while(sum<=n){
            if(sum==n){
                return true;
                break;
            }
            if(sum>INT_MAX/2 || sum<INT_MIN/2){
                return false;
            }
            sum=sum*2;
        }
        return false;
    }
};