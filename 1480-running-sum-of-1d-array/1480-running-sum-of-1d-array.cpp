class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // vector<int>ans;
        // int sum=0;
        // for(int i=0;i<nums.size();i++){
        //     sum+=nums[i];
        //     ans.push_back(sum);
        // }
        // // for(int i=0;i<ans.size();i++){
        // //     cout<<ans[i]<<endl;
        // // }
        // return ans;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        return nums;
    
    }
};