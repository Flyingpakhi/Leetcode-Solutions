class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>arr;
        arr.push_back(pref[0]);
        int val=pref[0];
        for(int i=1;i<pref.size();i++){
            int ans=val^pref[i];
            arr.push_back(ans);
            val=val^arr[i];
        }
        return arr;
    }
};