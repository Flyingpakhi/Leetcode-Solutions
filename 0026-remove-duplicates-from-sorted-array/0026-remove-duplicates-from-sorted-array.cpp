#include<unordered_map>
class Solution {
public:
    vector<int> remove(vector<int>& nums){
        unordered_map<int,bool>seen;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(seen.count(nums[i])>0){
                continue;
            }
            seen[nums[i]]=true;
            res.push_back(nums[i]);
        }
        return res;
    }
    int removeDuplicates(vector<int>& nums) {
        vector<int>output=remove(nums);
        int ans=output.size();
        for(int i=0;i<ans;i++){
            nums[i]=output[i];
        }
        return ans;
    }
};