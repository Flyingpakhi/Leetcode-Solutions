class Solution {
public:
    int binarysearch(vector<int>& nums,int key){
        int s=0;
        int e=nums.size()-1;
        int mid;
        while(s<=e){
            mid=s+(e-s)/2;
            if(nums[mid]==key){
                return mid;
            }
            else if(nums[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
    return s;
    }
    int searchInsert(vector<int>& nums, int target) {
       int ans=binarysearch(nums,target); 
        return ans;
    }
};