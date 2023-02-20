class Solution {
public:
    bool search(vector<vector<int>>& matrix,int target){
        int r=0;
        int c=matrix[0].size()-1;
        int n=matrix.size()-1;
        while(r<=n && c>=0){
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]>target){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        return search(matrix,target);
    }
};