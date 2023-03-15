class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum=INT_MIN;
        int value=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                value+=1;
            }
            else{
                if(maximum<value){
                    maximum=value;
                }
                value=0;
            }
        }
        if(maximum<value){
            maximum=value;
        }
        return maximum;
    }
};