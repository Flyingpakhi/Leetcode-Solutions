#include<cmath>
class Solution {
public:
    bool prime(int num){
        if(num==1){
            return false;
        }
        for(int i=2;i<=sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                if(i==j || j==nums.size()-i-1){
                    if(prime(nums[i][j])){
                        ans=max(ans,nums[i][j]);
                    }
                }
            }
        }
        return ans;
    }
};