using namespace std;
class Solution {
public:
    int binarySearch(vector<int> nums,int target){
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
               else{
                   s=mid+1;
               }
        }
        return s;
    }
    int searchInsert(vector<int>& nums, int target) {
        return binarySearch(nums,target);
    }
};