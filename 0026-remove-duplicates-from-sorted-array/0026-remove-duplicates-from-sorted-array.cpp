class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                nums[k]=nums[j];
                j=i;
                k++;
            }
        }
        nums[k]=nums[j];
        return k+1;
    }
};