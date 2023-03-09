#include<unordered_map>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,bool>seen;
        for(int i=0;i<nums.size();i++){
            if(seen.count(nums[i])>0){
                return nums[i];
            }
            seen[nums[i]]=true;
        }
        return 0;
    }
};