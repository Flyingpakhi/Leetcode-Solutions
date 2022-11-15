class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans;
        int index=(nums.size()*2);
        for(int i=0;i<index;i++){
            if(i<nums.size()){
                ans.push_back(nums[i]);
            }
            else{
                ans.push_back(nums[i-nums.size()]);
            }
        }
        return ans;
    }
};