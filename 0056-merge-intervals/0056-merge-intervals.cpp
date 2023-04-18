#include<algorithm>
#include<vector>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>res;
        if(intervals.size()==0){
            return res;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>temp=intervals[0];
        for(int i=0;i<intervals.size();i++){
            if(temp[1]>=intervals[i][0]){
                temp[1]=max(temp[1],intervals[i][1]);
            }
            else{
                res.push_back(temp);
                temp=intervals[i];
            }
        }
        res.push_back(temp);
        return res;
    }
};