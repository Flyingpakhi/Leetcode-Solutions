class Solution {
public:
    int binaryFirst(vector<int>nums,int x){
        int low=0,high=nums.size()-1,fir=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                fir=mid;
                high=mid-1;
            }
            else if(nums[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return fir;
    }
    int binaryLast(vector<int>nums,int x){
        int low=0,high=nums.size()-1,las=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==x){
                las=mid;
                low=mid+1;
            }
            else if(nums[mid]>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return las;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>output;
        int first=binaryFirst(nums,target);
        int last=binaryLast(nums,target);
        output.push_back(first);
        output.push_back(last);
        return output;   
    }
};