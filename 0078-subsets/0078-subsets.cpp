class Solution {
    private:
    void solve(vector<int> nums,int index,vector<int>output,vector<vector<int>>& ans,int &count){
        if(index>=nums.size()){
            ans.push_back(output);
            count++;
            return ;
        }
        //exclude
        solve(nums,index+1,output,ans,count);
        //include
        int element=nums[index];
        output.push_back(element);
        solve(nums,index+1,output,ans,count);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        int count=0;
        solve(nums,index,output,ans,count);
        cout<<count<<endl;
        return ans;
    }
};