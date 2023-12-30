class Solution {
public:
    bool possible(vector<int>&nums,int limit,int mid){
	    long long ans=0;
	    for(int i=0;i<nums.size();i++){
		    ans+=(ceil)(nums[i]/(double)mid);
		        if(ans>limit){
			    return false;
		        }
	        }
	    return true;
    }
int smallestDivisor(vector<int>& nums, int threshold) {
    int low=1,high=*max_element(nums.begin(),nums.end());
	// int res=0;
	while(low<=high){
		int mid=low+(high-low)/2;
		bool ans=possible(nums,threshold,mid);
		if(ans){
			// res=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
    }
	return low;
}
};