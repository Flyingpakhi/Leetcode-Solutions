class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans(2);
        int maxi=INT_MIN;
        int index=-1;
        int col=mat[0].size();
        for(int i=0;i<mat.size();i++){
            int val=0;
            for(int j=0;j<col;j++){
                if(mat[i][j]==1){
                    val++;
                }
            }
            if(val>maxi){
                    maxi=val;
                    index=i;
                }
            }
        ans[0]=index;
        ans[1]=maxi;
        return ans;
    }
};