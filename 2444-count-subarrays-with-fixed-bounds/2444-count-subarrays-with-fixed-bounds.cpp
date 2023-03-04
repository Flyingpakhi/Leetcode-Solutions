class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long ans=0;
        vector<int>maxE,minE; //array for storing min and max element
        for(int i=0;i<nums.size();i++){
            if(nums[i]==minK){
                minE.push_back(i);
            }
            if(nums[i]==maxK){
                maxE.push_back(i);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>maxK || nums[i]<minK){//element greater than max and less than min discarded
                continue;
            }
            int l=i;
            while(i<nums.size() && nums[i]>=minK && nums[i]<=maxK){
                i++;
            }
            i--;
            int last=l-1;
            for(int j=l;j<=i;j++){
                if(nums[j]==minK){
                    int maxPos=lower_bound(maxE.begin(),maxE.end(),j)-maxE.begin();//gives us the next element max after the min value
                    long long count1=j-last;
                    if(maxPos==maxE.size()){
                        continue;
                    }
                    long long count2=i-maxE[maxPos]+1;
                    if(count2>0){
                        ans+=(count1*count2);
                    }
                    last=j;
                }
                if(nums[j]==maxK){
                    int minPos=lower_bound(minE.begin(),minE.end(),j)-minE.begin();//gives us the next element min after the max value
                    long long count1=j-last;
                    if(minPos==minE.size()){
                        continue;
                    }
                    long long count2=i-minE[minPos]+1;
                    if(count2>0){
                        ans+=(count1*count2);
                    }
                    last=j;
                }
            }
        }
        return ans;
    }
};