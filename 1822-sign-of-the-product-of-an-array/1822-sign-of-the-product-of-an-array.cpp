class Solution {
public:
    int arraySign(vector<int>& nums) {
        int pos=0;
        int neg=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos++;
            }
            else if(nums[i]<0){
                neg++;
            }
            else{
                return 0;
            }
        }
        if(neg%2==0){
            return 1;
        }
        return -1; 
    }
};