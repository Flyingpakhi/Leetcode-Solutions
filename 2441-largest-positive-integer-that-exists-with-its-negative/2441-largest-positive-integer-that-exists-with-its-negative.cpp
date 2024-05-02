class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;
        while(s<e){
            if(nums[s]+nums[e]==0){
                return nums[e];
            }
            else if(abs(nums[s])<nums[e]){
                e--;
            }
            else{
                s++;
            }
        }
        return -1;
    }
};