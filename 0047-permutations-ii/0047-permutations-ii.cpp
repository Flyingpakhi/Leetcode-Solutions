class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>>& ans,int i){
        if(i>=nums.size()){
            ans.push_back(nums);
            return ;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            solve(nums,ans,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        solve(nums,ans,index);
        //vector<vector<int>>::iterator ip;
        sort(ans.begin(), ans.end());
        // ip = std::unique(ans.begin(), ans.end());
        // ans.resize(std::distance(ans.begin(), ip));
        ans.resize(distance(ans.begin(),unique(ans.begin(), ans.end())));
        return ans;
    }
};