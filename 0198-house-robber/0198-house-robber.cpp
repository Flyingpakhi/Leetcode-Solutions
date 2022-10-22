class Solution {
public:
    int rob(vector<int>& nums) {
        int rob1=0,rob2=0;
        for(int i=0;i<nums.size();i++){
            int temp=max(nums[i]+rob1,rob2);
            rob1=rob2;
            rob2=temp;
        }
        return rob2;
    }
};