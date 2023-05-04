class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //implies the position of nonZero element
        int nonZero=0;
        for(int j=0;j<nums.size();j++){
            //find nonzero element and swap it with the value in its correct position
            if(nums[j]!=0){
                swap(nums[j],nums[nonZero]);
                nonZero++;
            }
        }
    }
};