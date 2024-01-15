
class Solution {
public:
    void spiral(vector<vector<int>>&matrix,ListNode* head){
        int row_start=0,row_end=matrix.size()-1;
        int col_start=0,col_end=matrix[0].size()-1;
        while(row_start<=row_end && col_start<=col_end){
            int s=-1;
            //left->right
            for(int c=col_start;c<=col_end;c++){
                if(head!=NULL){
                    s=head->val;
                    head=head->next;
                }
                else{
                    s=-1;
                }
                matrix[row_start][c]=s;
            }
            row_start++;
            if(row_start>row_end){
                break;
            }
            //top->bottom
            for(int r=row_start;r<=row_end;r++){
                if(head!=NULL){
                    s=head->val;
                    head=head->next;
                }
                else{
                    s=-1;
                }
                matrix[r][col_end]=s;
            }
            col_end--;
            if(col_end<col_start){
                break;
            }
            //right->left
            for(int c=col_end;c>=col_start;c--){
                if(head!=NULL){
                    s=head->val;
                    head=head->next;
                }
                else{
                    s=-1;
                }
                matrix[row_end][c]=s;
            }
            row_end--;
            if(row_end<row_start){
                break;
            }
            //bottom->top
            for(int r=row_end;r>=row_start;r--){
                if(head!=NULL){
                    s=head->val;
                    head=head->next;
                }
                else{
                    s=-1;
                }
                matrix[r][col_start]=s;
            }
            col_start++;
            if(col_start>col_end){
                break;
            }
        }
}
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>matrix(m,vector<int>(n));
        spiral(matrix,head);
        return matrix;
        
    }
};