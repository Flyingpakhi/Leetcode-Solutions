class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n==0){
            return 0;
        }
        if(n%2==0){
            return n;
        }
        else{
            return n*2;
        }
    }
};