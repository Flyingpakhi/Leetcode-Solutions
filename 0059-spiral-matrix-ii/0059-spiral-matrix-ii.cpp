class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>matrix(n,vector<int>(n,0));
        // vector<int> output;
        // int matrix[100][100];
        int k=0;
        int row_start=0,row_end=n-1,col_start=0,col_end=n-1;
    while(row_start<=row_end && col_start<=col_end){
        for(int col=col_start;col<=col_end;col++){
            k=k+1;
            matrix[row_start][col]=k;
        }
        row_start++;
        if(row_start>row_end){
            break;
        }
        for(int row=row_start;row<=row_end;row++){
            k=k+1;
            matrix[row][col_end]=k;
        }
        col_end--;
        if(col_end<col_start){
            break;
        }
        for(int col=col_end;col>=col_start;col--){
            k=k+1;
           matrix[row_end][col]=k;
        }
        row_end--;
        if(row_end<row_start){
            break;
        }
        for(int row=row_end;row>=row_start;row--){
            k=k+1;
            matrix[row][col_start]=k;
        }
        col_start++;
        if(col_start>col_end){
            break;
        }
    }
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         output.push_back(matrix[i][j]);
        //     }
        //     matrix1.push_back(output);
        //     output.clear();
        // }
        return matrix;
    }
};
