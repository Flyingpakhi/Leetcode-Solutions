class Solution {
public:
    int count(int n){
        int count1=0;
        while(n>0){
            n=n/10;
            count1++;
        }
        return count1;
    }
    int findNumbers(vector<int>& nums) {
        int k,add=0;
        for(int i=0;i<nums.size();i++){
            k=count(nums[i]);
            if(k%2==0){
                add++;
            }
        }
        return add;
    }
};