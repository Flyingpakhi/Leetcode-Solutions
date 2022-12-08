class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(nums[i]);
            }
        }
        // vector<int>::iterator ip;
        sort(ans.begin(),ans.end());
        unique(ans.begin(), ans.end());
        // ip = std::unique(ans.begin(), ans.end());
        // ans.resize(std::distance(ans.begin(), ip));
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=1;
            if(sum!=ans[i]){
                return sum;
            }
        }
        return sum+1;
    }
};