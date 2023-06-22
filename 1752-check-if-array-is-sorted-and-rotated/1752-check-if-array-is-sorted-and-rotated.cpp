class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int>ans(nums.size());
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                count=i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=nums[(i+count)%nums.size()];
        }
        for(int i=1;i<ans.size();i++){
            if(ans[i]<ans[i-1]){
                return false;
            }
        }
        return true;
    }
};