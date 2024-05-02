class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long int xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr=xorr^nums[i];
        }
        int rightmost=((xorr)&(xorr-1))^xorr;
        int b1=0,b2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&rightmost){
                b1=b1^nums[i];
            }
            else{
                b2=b2^nums[i];
            }
        }
        return {b1,b2};
    }
};