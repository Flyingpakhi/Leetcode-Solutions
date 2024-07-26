class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxind=0;
        int i=0;
        for(int i=0;i<nums.size();i++){
            if(i>maxind){
                return false;
            }
            if(nums[i]+i>maxind){
                maxind=nums[i]+i;
            }
            if(maxind>=nums.size()){
                break;
            }
        }
        return true;
    }
};