class Solution {
public:
    void solve(vector<int> nums,int i,vector<int> output,vector<vector<int>>&ans){
        if(i>=nums.size()){
            std::sort(output.begin(), output.end());
            ans.push_back(output);
            return ;
        }
        //exclude
        solve(nums,i+1,output,ans);
        //include
        int ele=nums[i];
        output.push_back(ele);
        solve(nums,i+1,output,ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> output;
        int index=0;
        solve(nums,index,output,ans);
        vector<vector<int>>::iterator ip;
        std::sort(ans.begin(), ans.end());
        ip = std::unique(ans.begin(), ans.end());
        ans.resize(std::distance(ans.begin(), ip));
        return ans;
    }
};