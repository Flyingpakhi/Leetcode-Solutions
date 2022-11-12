class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        int count1=0;
        for(int i=0;i<arr1.size();i++){
        for(int j=0;j<arr2.size();j++){
            if((arr1[i]-arr2[j])<=d &&(arr1[i]-arr2[j])>=-d){
                break;
            }
            else{
                count++;
            }
        }
            if(count==arr2.size()){
                count1++;
            }
            count=0;
    }
        return count1;
}
};