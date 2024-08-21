class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double avg=100;
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        while(low<=high){
            double val=(1.0*nums[low])+(nums[high]-nums[low])/2.0;
            if(avg>val){
                avg=val;
            }
            low++;
            high--;
        }
        return avg;
    }
};