class Solution {
public:
    double power(double x,int n){
        if(n==0){
            return 1.0;
        }
        double small=power(x,n-1);
        double big=x*small;
        return big;
    }
    double myPow(double x, int n) {
        if(n>=INT_MAX){
            return x;
        }
        if(n<=INT_MIN){
            double ans=1/x;
            int ans1=ans;
            if(ans<0)
            return (-1)*double(ans1);
            else
                return double(ans1);
        }
        if(n>0){
            if(x>0)
        return power(x,n);
            else
                x=x*(-1);
            if(n%2==0){
                return power(x,n);
            }
            else{
                return (-1)*power(x,n);
            }
    }
        else{
        if(x>0){
            n=n*(-1);
            return 1/power(x,n);
        }
            else{
                x=x*(-1);
                n=n*(-1);
               if(n%2==0){
                return 1/power(x,n);
            }
            else{
                return (-1)/power(x,n);
            } 
            }
        }
}
};