class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,j=0;
	    for(int i=0;i<nums.size();i++){
		    if(nums[i]!=nums[j]){
                if((i-j)>=2){
                    nums[k]=nums[j];
                    nums[k+1]=nums[j];
                    k=k+2;
                    j=i;
                }
                else{
                     nums[k]=nums[j];
                     k=k+1;
			         j=i;
                }
		    }
	    }
        nums[k]=nums[j];
        if(nums.size()-j>=2){
            nums[k+1]=nums[j];
            k=k+1;
        }
	    return k+1;
    }
};