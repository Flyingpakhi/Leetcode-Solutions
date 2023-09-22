class Solution {
public:
    int countbit(int n){
        int count=0;
        while(n!=0){
            if(n&1){
                count++;
            }
            n=n>>1;
        }
        return count;
    }
    bool prime(int n){
        bool pr=1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                pr=0;
                break;
            }
        }
        if(pr==0 || n==1){
            return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            int val=countbit(i);
            bool ans=prime(val);
            if(ans==true){
                count++;
            }          
        }
        return count;
    }
};