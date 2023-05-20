class Solution {
public:
    int rob(vector<int>& nums) {
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
};