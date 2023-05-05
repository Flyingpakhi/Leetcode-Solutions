class Solution {
public:
    int count(vector<int>&sub){
        int value=sub['a'-'a']+sub['e'-'a']+sub['i'-'a']+sub['o'-'a']+sub['u'-'a'];
        return value;
    }
    int maxVowels(string s, int k) {
        vector<int>sub(26,0);
        int windowS=0;
        int ans=-1;
        for(int windowE=0;windowE<s.size();windowE++){
                sub[s[windowE]-'a']++;
                if(windowE-windowS+1>k){
                    sub[s[windowS]-'a']--;
                    windowS++;
                }
            if(windowE-windowS+1==k){
                ans=max(ans,count(sub));
            }
        }
        return ans;
    }
};