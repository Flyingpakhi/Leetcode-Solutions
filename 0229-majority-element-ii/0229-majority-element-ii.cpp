class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto i:ans){
            if(i.second>nums.size()/3.0){
                res.push_back(i.first);
            }
        }
        return res;
        
    }
};