class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]+nums[i+1];
                nums[i+1]=0;
            }
        }
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[index]=nums[i];
                index++;
            }
        }
        for(int i=index;i<nums.size();i++){
            nums[i]=0;
        }
        return nums;
    }
};