#include<vector>
class Solution {
public:
void addSolution(vector<vector<string>>&ans,vector<string>&board,int n){
	vector<string>temp;
	for(int i=0;i<n;i++){
        temp.push_back(board[i]);
	}
	ans.push_back(temp);
}
bool isSafe(vector<string>&board,int row,int col,int n){
	int x=row;
	int y=col;
	while(y>=0){
		if(board[x][y]=='Q'){
			return false;
		}
		y--;
	}
	x=row;
	y=col;
	while(x>=0 && y>=0){
		if(board[x][y]=='Q'){
			return false;
		}
		y--;
		x--;
	}
	x=row;
	y=col;
	while(x<n && y>=0){
		if(board[x][y]=='Q'){
			return false;
		}
		y--;
		x++;
	}
	return true;
}
void solve(int col,vector<vector<string>>&ans,vector<string>&board,int n){
	if(col==n){
		addSolution(ans,board,n);
		return;
	}
	for(int row=0;row<n;row++){
		if(isSafe(board,row,col,n)){
			board[row][col]='Q';
			solve(col+1,ans,board,n);
			board[row][col]='.';
		}
	}
}

    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        string s="";
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                s+=".";
            }
            board[i]=s;
            s="";
        }
	    vector<vector<string>>ans;
	    solve(0,ans,board,n);
	    return ans;
}
};