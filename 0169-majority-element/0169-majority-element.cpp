class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0,ele;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                ele=nums[i];
                count=1;
            }
            else if(ele==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        return ele;
    }
};