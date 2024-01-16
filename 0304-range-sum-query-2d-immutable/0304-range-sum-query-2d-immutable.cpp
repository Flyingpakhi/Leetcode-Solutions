class NumMatrix {
public:
    vector<vector<int>>mat;
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.empty()){
            return;
        }
        int n=matrix.size(),m=matrix[0].size();
        mat=vector<vector<int>>(n,vector<int>(m));
        //prefix sum row wise
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    mat[i][j]=matrix[i][j];
                }
                else{
                mat[i][j]=matrix[i][j]+mat[i][j-1];
            }
        }
    }
        //prefix sum array col wise
        for(int row=1;row<n;row++){
            for(int col=0;col<m;col++){
                mat[row][col]=mat[row][col]+mat[row-1][col];
        }
    }
}
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        int top_sum=0,left_sum=0,top_leftsum=0;
        if(row1!=0){top_sum=mat[row1-1][col2];}
        if(col1!=0){left_sum=mat[row2][col1-1];}
        if(row1!=0&&col1!=0){top_leftsum=mat[row1-1][col1-1];}
        sum=mat[row2][col2]-top_sum-left_sum+top_leftsum;
        return sum;
    }
};
