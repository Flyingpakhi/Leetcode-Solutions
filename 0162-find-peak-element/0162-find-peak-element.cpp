class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid=low+(high-low)/2;
        while(low<high){
            if(nums[mid]<nums[mid+1]){
                low=mid+1;
            }
            // else if(nums[mid]>nums[mid+1]){
            //     high=mid-1;
            // }
            else{
                high=mid;
            }
            mid=low+(high-low)/2;
        }
        return low;
    }
};