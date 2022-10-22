class Solution {
public:
    int robbing(vector<int>&nums,int k,int len){
        int rob1=0,rob2=0;
        for(int i=k;i<len;i++){
            int temp=max(nums[i]+rob1,rob2);
            rob1=rob2;
            rob2=temp;
        }
        return rob2;
    }
    int rob(vector<int>& nums) {
        int len=nums.size();
        if(len==1){
            return nums[0];
        }
        int count1=robbing(nums,0,len-1);
        int count2=robbing(nums,1,len);
        if(count1>count2){
            return count1;
        }
        else{
            return count2;
        }
    }
};