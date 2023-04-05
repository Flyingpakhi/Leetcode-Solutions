class Solution {
public:
    bool check(int mid,vector<int>& nums){
        long sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>long(mid)*(i+1)){
                return false;
            }
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int mini=0;
        int maxi=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(mini<=maxi){
            int mid=mini+(maxi-mini)/2;
            if(check(mid,nums)){
                ans=mid;
                maxi=mid-1;
            }
            else{
                mini=mid+1;
            }
        }
        return ans;
    }
};