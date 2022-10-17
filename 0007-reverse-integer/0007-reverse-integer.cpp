class Solution {
public:
    int reverse(int x) {
        bool check=(x<0 && x>INT_MIN)?true:false;
        if(check){
            x=x*(-1);
        }
     int rev=0;
        int m=x;
        while(x>0){
            int last=x%10;
            if((rev>INT_MAX/10)||(rev<INT_MIN/10)){
                return 0;
            }
            rev=rev*10+last;
            x=x/10;
        }  
        if(check){
            return rev*(-1);
        }
        return rev;
    }
};