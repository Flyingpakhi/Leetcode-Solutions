class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0){
        //         nums[i]=nums[i]*(-1);
        //     }
        //     ans.push_back(nums[i]*nums[i]);
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        vector<int>ans;
        int l=0;
        int r=nums.size()-1;
        while(l<=r){
            if(nums[l]*nums[l]>nums[r]*nums[r]){
                ans.push_back(nums[l]*nums[l]);
                l++;
            }
            else{
                ans.push_back(nums[r]*nums[r]);
                r--;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};