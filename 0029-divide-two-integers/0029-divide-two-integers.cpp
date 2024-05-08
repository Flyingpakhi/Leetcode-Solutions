class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor){
            return 1;
        }
//         true->positive sign after division
        bool sign=true;
        if(dividend>=0 && divisor<0){
            sign=false;
        }
        if(dividend<=0 && divisor>0){
            sign=false;
        }
        long n=abs(dividend);
        long d=abs(divisor);
        long quo=0;
        while(n>=d){
            long cnt=0;
            while(n>=(d<<(cnt+1))){
                cnt++;
            }
            quo+=1<<cnt;
            n=n-(d<<cnt);
        }
        if(quo==(1<<31) && sign==true){
            return INT_MAX;
        }
        if(quo==(1<<31) && sign==false){
            return INT_MIN;
        }
        return sign?quo:(-1)*quo;
        
    }
};