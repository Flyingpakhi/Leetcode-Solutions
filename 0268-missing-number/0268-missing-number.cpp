class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum!=nums[i]){
                return sum;
            }
            sum+=1;
        }
        return sum;
    }
};