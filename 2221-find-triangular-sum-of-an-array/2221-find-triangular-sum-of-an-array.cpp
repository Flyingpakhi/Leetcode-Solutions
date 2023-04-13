class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size()!=1){
            int s=nums.size()-1;
            int *arr=new int[s];
            for(int i=0;i<s;i++){
                arr[i]=(nums[i]+nums[i+1])%10;
            }
            nums.resize(s);
            for(int i=0;i<s;i++){
                nums[i]=arr[i];
            }
            delete[]arr;
        }
        return nums[0];
    }
};