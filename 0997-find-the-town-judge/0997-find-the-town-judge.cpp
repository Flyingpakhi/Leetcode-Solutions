class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //as labelling starts from 1 to n so we take n+1 size array
        vector<int>peopleTrusting(n+1,0);
        vector<int>peopleTrusted(n+1,0);
        for(int i=0;i<trust.size();i++){
            int u=trust[i][0];
            int v=trust[i][1];
            peopleTrusting[u]++;
            peopleTrusted[v]++;
        }
        for(int i=1;i<=n;i++){
            if(peopleTrusting[i]==0 && peopleTrusted[i]==n-1){
                return i;
            }
        }
        return -1;
    }
};