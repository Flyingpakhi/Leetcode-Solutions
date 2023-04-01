class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int m=grid.size();
        int neg=0;
        for(int i=0;i<m;i++){
            reverse(grid[i].begin(),grid[i].end());
            int firstZero=lower_bound(grid[i].begin(),grid[i].end(),0)-grid[i].begin();
            neg+=firstZero;
        }
        return neg;
    }
};