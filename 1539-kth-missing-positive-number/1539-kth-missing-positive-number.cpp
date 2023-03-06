class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int j=k;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>j){
                return j;
            }
            j++;
        }
        return j;
    }
};