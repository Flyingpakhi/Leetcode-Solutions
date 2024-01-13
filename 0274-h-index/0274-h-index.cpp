class Solution {
public:
    int cit(vector<int>&v,int h){
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>=h){
                count++;
            }
        }
        return count;
    }
    int hIndex(vector<int>& citations) {
        int low=0;
        int high=citations.size();
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int count=cit(citations,mid);
            if(count>=mid){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
};