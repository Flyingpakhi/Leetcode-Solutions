class Solution {
public:
    vector<int> getRow(int rowIndex) {
        //rowindex=3 then 4 size row
        /* [
        
        
            ]*/
        vector<vector<int>>res(rowIndex+1);
        for(int i=0;i<=rowIndex;i++){
            //each row of i+1 size 
            res[i].resize(i+1);
            for(int j=0;j<i+1;j++){
                if(j==0||j==i){
                    res[i][j]=1;
                }
                else{
                    res[i][j]=res[i-1][j-1]+res[i-1][j];
                 }
            }
    }
    return res[rowIndex];
    }
};