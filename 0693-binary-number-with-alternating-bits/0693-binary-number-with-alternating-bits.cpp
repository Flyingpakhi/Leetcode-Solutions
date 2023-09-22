class Solution {
public:
    bool hasAlternatingBits(int n) {
        int fact=-1;
        int val=-1;
        while(n!=0){
            if(n&1){
                val=0;
            }
            else{
                val=1;
            }
            if(fact==val){
                return false;
            }
            fact=val;
            n=n>>1;
        }
        return true;
        
    }
};