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
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>output;
        std::sort(nums.begin(), nums.end());
        int ans=binaryFirst(nums,target);
        for(int i=ans;i<nums.size();i++){
            if(nums[i]!=target){
                break;
            }
            output.push_back(i);
        }
        return output;
    }
};