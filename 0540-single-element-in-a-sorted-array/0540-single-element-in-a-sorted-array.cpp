class Solution {
public:
    int binarySearch(vector<int>&nums){
        int s=0;
        int e=nums.size()-1;
        int mid;
        if(e==0||nums[s]!=nums[s+1]){
            return s;
        }
        if(nums[e]!=nums[e-1]){
            return e;
        }
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
                return mid;
            }
            else if((nums[mid]==nums[mid-1] && (mid)%2!=0)||(nums[mid]==nums[mid+1] && (mid)%2==0)){
                s=mid+1;
            }
            else{
               e=mid-1;
        }
        }
        return -1;
    }
    int singleNonDuplicate(vector<int>& nums) {
        int val= binarySearch(nums);
        return nums[val];
    }
};