class Solution {
public:
    void dfs(vector<vector<int>>&ans,vector<vector<int>>& image,int sr,int sc,int newColor,
    int ini,int delr[],int delc[]){
        ans[sr][sc]=newColor;
        for(int i=0;i<4;i++){
            int nrow=sr+delr[i];
            int ncol=sc+delc[i];
            if(nrow>=0 && nrow<image.size() && ncol>=0 && ncol<image[0].size() && ans[nrow][ncol]!=newColor && 
            image[nrow][ncol]==ini){
                dfs(ans,image,nrow,ncol,newColor,ini,delr,delc);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        int ini=image[sr][sc];
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        dfs(ans,image,sr,sc,color,ini,delr,delc);
        return ans;
    }
};