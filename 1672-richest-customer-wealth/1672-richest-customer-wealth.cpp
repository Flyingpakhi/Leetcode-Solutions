class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth=0;
        int maximum=INT_MIN;
        for(int i=0;i<accounts.size();i++){
            wealth=0;
            for(int j=0;j<accounts[i].size();j++){
                wealth+=accounts[i][j];
            }
            if(wealth>maximum){
                maximum=wealth;
            } 
        }
        return maximum;
    }
};