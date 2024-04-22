class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
            if(ans.size()<=2){
                continue;
            }
            map<int,int>count;
            for(auto i:ans){
                if(i.second>1){
                    count[i.first]=i.second-1;
                }
            }
            ans=count;
        }
        // for(auto i:ans){
        //     cout<<i.first<<" ";
        // }
        vector<int>res;
        int c;
        for(auto i:ans){
            c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i.first){
                    c++;
                }
            }
            if(c>nums.size()/3.0){
                res.push_back(i.first);
            }
        }
        return res;
        
    }
};