class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        vector<int>output;
        std::sort(arr.begin(),arr.end());
        int diff=arr[1]-arr[0];
        for(int i=1;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]<diff){
                diff=arr[i+1]-arr[i];
            }
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i+1]-arr[i]==diff){
                output.push_back(arr[i]);
                output.push_back(arr[i+1]);
                ans.push_back(output);
                output.pop_back();
                output.pop_back();
            }
        }
        return ans;
    }
};