class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=nums.size()-1;
        while(i<=j){
            if(nums[i]==val){
                if(nums[j]!=val){
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
                i++;
                j--;
            }
            else
                j--;
            
        }
        else
            i++;
        }
        return j+1;
    }
};