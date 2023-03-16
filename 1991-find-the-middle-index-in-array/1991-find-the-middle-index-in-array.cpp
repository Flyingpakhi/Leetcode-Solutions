class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int left=0;
        int right=0;
        for(int i=0;i<nums.size();i++){
            right+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            right=right-nums[i];
            // cout<<left<<" "<<right<<endl;
            if(left==right){
                return i;
            }
            left=left+nums[i];
        }
        return -1;
    }
};