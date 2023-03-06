class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int len=arr.size();
        int countMiss=arr[len-1]-len;
        if(countMiss<k){
            return arr[len-1]+k-countMiss;
        }
        int s=0;
        int e=len-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            int miss=arr[mid]-(mid+1);
            if(miss<k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        if(e<0){
            return k;
        }
        return arr[e]+k-(arr[e]-(e+1));
    }
};