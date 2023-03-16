class Solution {
public:
    int findNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            int len=s.length();
            nums[i]=len;
        }
        int val=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                val+=1;
            }
        }
        return val;
    }
};