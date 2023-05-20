class Solution {
public:
    int robb(vector<int> nums) {
        int n=nums.size();
        int rob1=nums[0];
        int rob2=0;
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1){
                take+=rob2;
            }
            int nt=rob1+0;
            int curr=max(take,nt);
            rob2=rob1;
            rob1=curr;
        }
        return rob1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        vector<int>temp,temp1;
        for(int i=0;i<n;i++){
            if(i!=0){
                temp.push_back(nums[i]);
            }
            if(i!=n-1){
                temp1.push_back(nums[i]);
            }
        }
        return max(robb(temp),robb(temp1));
    }
};