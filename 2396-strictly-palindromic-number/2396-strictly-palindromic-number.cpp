class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        int count[100];
        int k=0,c,m=n;
        bool fact=true;
        for(int i=2;i<=m-2;i++){
            c=0;
        while(n>0){
            int last=n%i;
            count[k]=last;
            n=n/i;
            k++;
            c++;
        }
        for(int k=0;k<=c/2;k++){
            if(count[k]!=count[c-k-1]){
                fact=false;
                break;
            }
        }
            if(fact==false){
                return fact;
            }
            n=m;
            k=0;
            
    }
        return fact;
}
};