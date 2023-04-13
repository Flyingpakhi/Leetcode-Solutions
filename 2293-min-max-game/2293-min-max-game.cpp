class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size()!=1){
            int s=nums.size()/2;
            int *arr=new int[s];
            for(int i=0;i<s;i++){
                if(i%2==0){
                    arr[i]=min(nums[2*i],nums[2*i+1]);
                }
                else{
                    arr[i]=max(nums[2*i],nums[2*i+1]);
                }
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