class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1){
            return true;
        }
        int sum=1;
        while(sum<=n){
            if(sum==n){
                return true;
                break;
            }
            if(sum>INT_MAX/3 || sum<INT_MIN/3){
                return false;
            }
            sum=sum*3;
        }
        return false;
    }
    };