class Solution {
public:
    int findMin(vector<int>& nums) {
        //first we assume the min value nums[0]
        int res=nums[0];
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            if(nums[s]<nums[e]){
                res=min(res,nums[s]);
                break;
            }
            int mid=s+(e-s)/2;
            res=min(res,nums[mid]);
            if(nums[mid]>=nums[s]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return res;
    }
};