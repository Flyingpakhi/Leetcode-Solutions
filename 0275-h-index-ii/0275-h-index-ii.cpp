class Solution {
public:
    int lowerBound(vector<int>&c,int val){
        int low=0,high=c.size()-1;
        int ans=c.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            if(c[mid]>=val){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return c.size()-ans;
        
    }
    int hIndex(vector<int>& citations) {
        
        int low=0;
        int high=citations.size();
        while(low<=high){
            int mid=low+(high-low)/2;
            
            int count=lowerBound(citations,mid);
            if(count>=mid){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};
