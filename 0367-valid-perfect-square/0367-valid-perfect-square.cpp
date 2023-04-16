class Solution {
public:
    bool isPerfectSquare(int num) {
        long low=1;
        long high=num;
        while(high-low>1){
            long mid=low+(high-low)/2;
            cout<<low<<" "<<high<<" "<<mid<<endl;
            if(mid==num/floor(mid)){
                return true;
            }
            else if(mid>num/floor(mid)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(low*low==num || high*high==num){
            return true;
        }
        return false;
    }
};