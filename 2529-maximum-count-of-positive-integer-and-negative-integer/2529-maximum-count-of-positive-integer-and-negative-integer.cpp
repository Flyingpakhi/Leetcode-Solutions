class Solution {
public:
    // int neg=0,pos=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>0){
        //         pos++;
        //     }
        //     else if(nums[i]<0){
        //         neg++;
        //     }
        // }
        // return max(pos,neg);
    int maximumCount(vector<int>& nums) {
        int len=nums.size();
        //get the index of first pos number if 1 no then that index not just after 1 that index
        int firstPos=lower_bound(nums.begin(),nums.end(),1)-nums.begin();
        //get the index of first zero number if 0 no then that index not just after 0 that index
        int firstZero=lower_bound(nums.begin(),nums.end(),0)-nums.begin();
        return max(len-firstPos,firstZero);
    }
};