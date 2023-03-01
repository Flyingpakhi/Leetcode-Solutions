class Solution {
public:
    void insert(vector<int>& nums){
        int i=1;
        while(i<nums.size()){
            int childIndex=i;
            while(childIndex>0){
                int parentIndex=(childIndex-1)/2;
                if(nums[childIndex]>nums[parentIndex]){
                    int temp=nums[childIndex];
                    nums[childIndex]=nums[parentIndex];
                    nums[parentIndex]=temp;
                }
                else{
                    break;
                }
                childIndex=parentIndex;
            }
            i++;
        }
    }
    void remove(vector<int>& nums){
        if(nums.size()==0){
            return;
        }
        int n=nums.size();
        while(n!=0){
            int ans=nums[0];
            nums[0]=nums[n-1];
            nums[n-1]=ans;
            n--;
            int parentIndex=0;
            int lc=2*parentIndex+1;
            int rc=2*parentIndex+2;
            while(lc<n){
                int maxIndex=parentIndex;
                if(nums[maxIndex]<nums[lc]){
                    maxIndex=lc;
                }
                if(nums[maxIndex]<nums[rc]&& rc<n){
                    maxIndex=rc;
                }
                if(maxIndex==parentIndex){
                    break;
                }
                int temp=nums[maxIndex];
                nums[maxIndex]=nums[parentIndex];
                nums[parentIndex]=temp;
                parentIndex=maxIndex;
                lc=2*parentIndex+1;
                rc=2*parentIndex+2;
            }
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        insert(nums);
        remove(nums);
        return nums;
    }
};