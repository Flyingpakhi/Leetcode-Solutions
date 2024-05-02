class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>arr;
        arr.push_back(first);
        for(int i=0;i<encoded.size();i++){
            int ans=arr[i]^encoded[i];
            arr.push_back(ans);
        }
        return arr;
    }
};