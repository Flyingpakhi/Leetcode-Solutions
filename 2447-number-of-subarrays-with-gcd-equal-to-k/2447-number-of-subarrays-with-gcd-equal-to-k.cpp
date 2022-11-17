class Solution {
public:
    //  int gcd(int a,int b){
    //     while(a!=b){
    //         if(a>b){
    //             a=a-b;
    //         }
    //         else{
    //             b=b-a;
    //         }
    //     }
    //     return a;
    // }
    //GCD of all the elements of the sub-array arr[l…r] is known then the GCD of all the elements of the sub-array arr[l…r+1] can be obtained by simply taking the GCD of the previous sub-array with arr[r + 1]. 
    int subarrayGCD(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int curr_gcdval=0;
            for(int j=i;j<nums.size();j++){
                curr_gcdval=gcd(nums[j],curr_gcdval);
                if(curr_gcdval==k){
                    count++;
                }
            }
        }
        return count;
    }
};