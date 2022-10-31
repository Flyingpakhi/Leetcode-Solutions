class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[i].size();j++){
               if((i!=matrix.size()-1)&&(j!=matrix[i].size()-1)){
               if(matrix[i][j]!=matrix[i+1][j+1]){
                   return false;
               }
           }
       } 
    }
    return true;
    }
};