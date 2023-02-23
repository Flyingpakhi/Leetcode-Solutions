class Solution {
public:
    int steps(int n){
        if(n<=0){
            return 0;
        }
        int a;
        if(n%2==0){
            a=steps(n/2);
        }
        else{
            a=steps(n-1);
        }
        return a+1;
    }
    int numberOfSteps(int num) {
        return steps(num);
    }
};