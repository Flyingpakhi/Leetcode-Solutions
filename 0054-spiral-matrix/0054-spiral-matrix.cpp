class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> output;
        int row_start=0,row_end=matrix.size()-1,col_start=0,col_end=matrix[0].size()-1;
    while(row_start<=row_end && col_start<=col_end){
        for(int col=col_start;col<=col_end;col++){
            output.push_back(matrix[row_start][col]);
        }
        row_start++;
        if(row_start>row_end){
            break;
        }
        for(int row=row_start;row<=row_end;row++){
            output.push_back(matrix[row][col_end]);
        }
        col_end--;
        if(col_end<col_start){
            break;
        }
        for(int col=col_end;col>=col_start;col--){
            output.push_back(matrix[row_end][col]);
        }
        row_end--;
        if(row_end<row_start){
            break;
        }
        for(int row=row_end;row>=row_start;row--){
            output.push_back(matrix[row][col_start]);
        }
        col_start++;
        if(col_start>col_end){
            break;
        }
    }
        return output;
}
};
