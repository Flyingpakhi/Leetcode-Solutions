class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=nums.size()-1;
        if(i>=1){
        int val=(nums[i]-1)*(nums[i-1]-1);
        return val;
        }
        return 0;
    }
};