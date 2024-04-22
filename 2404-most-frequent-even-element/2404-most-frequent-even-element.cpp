class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                ans[nums[i]]++;
            }
        }
        int maxi=INT_MIN;
        int ele=-1;
        for(auto i:ans){
            if(i.second>maxi){
                maxi=i.second;
                ele=i.first;
            }
        }
        return ele;
    }
};