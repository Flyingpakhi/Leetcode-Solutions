class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0,odd=0;
        int i=0;
        while(n!=0){
            if(i%2==0 && n&1==1){
                even++;
            }
            else if(i%2!=0 && n&1==1){
                odd++;
            }
            i++;
            n=n>>1;
        }
        return {even,odd};
    }
};