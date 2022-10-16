class Solution {
public:
    bool isPalindrome(int x) {
        int reverse=0;
        int m=x;
        while(x>0){
            int last=x%10;
            if((reverse>INT_MAX/10)||(reverse<INT_MIN/10)){
                return false;
            }
            reverse=reverse*10+last;
            x=x/10;
        }
        if(m==reverse){
            return true;
        }
        else{
            return false;
        }
    }
};