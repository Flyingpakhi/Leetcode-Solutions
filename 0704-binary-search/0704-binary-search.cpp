class Solution {
public:
    int searchB(vector<int>& nums,int s,int e,int target){
        if(s>e){
            return -1;
        }
        int mid=s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            return searchB(nums,s,mid-1,target);
        }
        else{
            return searchB(nums,mid+1,e,target);
        }
    }
    int search(vector<int>& nums, int target) {
        return searchB(nums,0,nums.size()-1,target);
    }
};