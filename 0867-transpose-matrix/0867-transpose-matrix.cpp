class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        int m=matrix.size();
        vector<vector<int>>newmatrix(n , vector<int> (m));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                newmatrix[j][i]=matrix[i][j];
            }
        }
        return newmatrix;
        
    }
};