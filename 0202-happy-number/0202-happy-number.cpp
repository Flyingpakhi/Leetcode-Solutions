class Solution {
public:
    bool happy(int n,int count){
        if(n==1){
            return true;
        }
        if(count>100){
            return false;
        }
        int sum=0;
        while(n>0){
        int digit=n%10;
        sum=sum+(digit*digit);
        n=n/10;
        }
        n=sum;
        return happy(n,count+1);
        
    }
    bool isHappy(int n) {
        int count=0;
        if(n==1){
            return true;
        }
        else{
        return happy(n,count);
    }
    }
};
    
    