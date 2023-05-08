class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                //primary i==j and secondary i+j==size-1;
                if(i==j || i+j==n-1){
                    cout<<mat[i][j]<<endl;
                    sum+=mat[i][j];
                }
            }
        }
        // if(n%2!=0){
        //     sum=sum-mat[n/2][n/2];
        // }
        return sum;
    }
};