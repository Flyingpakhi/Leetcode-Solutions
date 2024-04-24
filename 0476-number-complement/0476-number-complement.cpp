class Solution {
public:
    int findComplement(int num) {
        int val=num;
        int count=0;
        while(num!=0){
            count++;
            num=num>>1;
        }
        int i=0;
        while(i<count){
            val=val^(1<<i);
            i++;
        }
        return val;
    }
};