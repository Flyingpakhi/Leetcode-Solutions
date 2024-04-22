class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1=0,maj1=NULL,cnt2=0,maj2=NULL;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maj1){
                cnt1++;
            }
            else if(nums[i]==maj2){
                cnt2++;
            }
            else if(cnt1==0){
                cnt1=1;
                maj1=nums[i];
            }
            else if(cnt2==0){
                cnt2=1;
                maj2=nums[i];
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        vector<int>res;
        int c=0,c1=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==maj1){
                    c++;
                }
                else if(nums[j]==maj2){
                    c1++;
                }
            }
            if(c>nums.size()/3.0){
                res.push_back(maj1);
            }
            if(c1>nums.size()/3.0){
                res.push_back(maj2);
            }
        return res;
        
    }
};