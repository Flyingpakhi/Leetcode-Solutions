class Solution {
public:
    int binarysearch(vector<int>& nums,int n,int key){
        int s=0;
        int e=n-1;
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
        if(nums[mid]<key){
            int k=mid+1;
            nums.insert(nums.begin()+k,key);
            return k;
        }
        else{
            if(mid!=0){
            int k=mid;
            nums.insert(nums.begin()+k,key);
            return k;
        }
            else{
                nums.insert(nums.begin(),key);
                return 0;
            }
    }
    }
    int searchInsert(vector<int>& nums, int target) {
       int ans=binarysearch(nums,nums.size(),target); 
        return ans;
    }
};