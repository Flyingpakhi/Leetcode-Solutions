class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        vector<int>freq1(128,-1);
        vector<int>freq2(128,-1);
        for(int i=0;i<s.size();i++){
            if(freq1[s[i]]!=freq2[t[i]]){
                return false;
            }
            freq1[s[i]]=i;
            freq2[t[i]]=i;
        }
        return true;
    }
};