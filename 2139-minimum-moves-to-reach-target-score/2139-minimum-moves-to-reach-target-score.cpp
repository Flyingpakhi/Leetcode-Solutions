class Solution {
public:
    // int steps(int n,int max){
    //     if(n<=1){
    //         return 0;
    //     }
    //     int a;
    //     if(n%2==0 && max!=0){
    //         a=steps(n/2,max-1);
    //     }
    //     else{
    //         a=steps(n-1,max);
    //     }
    //         return a+1;
    // }
    int minMoves(int target, int maxDoubles) {
        int count=0;
        while(target!=1){
            if(target%2==1){
                target=target-1;
                count=count+1;
            }
            else{
                if(maxDoubles>0){
                    target=target/2;
                    maxDoubles--;
                    count++;
                }
                else{
                    count+=target-1;
                    target=1;
                }
            }
        }
        return count;
    }
};