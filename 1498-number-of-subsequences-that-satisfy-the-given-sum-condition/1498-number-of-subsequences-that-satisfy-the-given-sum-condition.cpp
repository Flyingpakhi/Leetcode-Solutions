class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mod=1e9+7,count=0;
        vector<int>power2(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            power2[i]=power2[i-1]*2%mod;
        }
        int l=0,r=nums.size()-1;
        while(l<=r){
            if(nums[l]+nums[r]>target){
                r--;
            }
            else{
                count+=power2[r-l];
                count%=mod;
                l++;
            }
        }
        return count;
    }
};