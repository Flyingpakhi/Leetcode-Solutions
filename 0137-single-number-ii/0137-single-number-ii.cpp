class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        int i;
        for(i=0;i<nums.size()-1;i++){
            if(nums[i]!=nums[i+1]){
                return nums[i];
            }
            else{
                i++;
                i++;
            }
        }
        if(nums[i]!=nums[i-1]){
            return nums[i];
        }
        return 0;
    }
};