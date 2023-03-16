class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int left=0;
        int right=0;
        int val=0;
        for(int i=0;i<nums.size();i++){
            right+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            right=right-nums[i];
            val=left-right;
            if(val<0){
                val=val*(-1);
            }
            left=left+nums[i];
            nums[i]=val;
        }
        return nums;
    }
};