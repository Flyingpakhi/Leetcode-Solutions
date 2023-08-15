class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>seen;
        for(int i=0;i<arr.size();i++){
            seen[arr[i]]++;
        }
        unordered_map<int,int>ans;
        for(auto i:seen){
            if(ans.count(i.second)>0){
                return false;
            }
            ans[i.second]=true;
        }
        
        return true;
    }
};