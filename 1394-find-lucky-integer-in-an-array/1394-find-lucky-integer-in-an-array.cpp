class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<bool>visit(arr.size(),false);
        vector<int>ans;
        ans.push_back(-1);
        for(int i=0;i<arr.size();i++){
            if(visit[i]==true){
                continue;
            }
            int count=1;
            for(int j=i+1;j<arr.size();j++){
                if(arr[i]==arr[j]){
                    visit[j]=true;
                    count++;
                }
            }
            if(count==arr[i]){
                ans.push_back(count);
            }
        }
        sort(ans.begin(),ans.end());
        int val=ans.size()-1;
        return ans[val];
    }
};