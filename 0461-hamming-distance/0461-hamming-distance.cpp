class Solution {
public:
    int hammingDistance(int x, int y) {
        int num=x^y;
        int count=0;
        while(num!=0){
            if(num&1){
                count++;
            }
            num=num>>1;
        }
        return count;
    }
};