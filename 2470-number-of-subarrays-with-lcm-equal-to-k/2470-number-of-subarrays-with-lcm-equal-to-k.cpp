class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            long long int curr_lcmval=1;
            for(int j=i;j<nums.size();j++){
                if(curr_lcmval>=INT_MAX){
                    break;
                }
                curr_lcmval=(nums[j]/gcd(nums[j],curr_lcmval))*curr_lcmval;
                if(curr_lcmval==k){
                    count++;
                }
            }
    }
        return count;
    }
};