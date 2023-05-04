class Solution {
public:
    int findMin(vector<int>& nums) {
        //first we assume the min value nums[0]
        int res=nums[0];
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            //if the array is sorted then min value will be leftmost value
            if(nums[s]<nums[e]){
                res=min(res,nums[s]);
                break;
            }
            //find out the mid value
            int mid=s+(e-s)/2;
            //update res with min value
            res=min(res,nums[mid]);
            //if mid value is in left portion then search in right side
            if(nums[mid]>=nums[s]){
                s=mid+1;
            }
            //if mid value is in right portion then search in left side to find more smaller value
            else{
                e=mid-1;
            }
        }
        return res;
    }
};