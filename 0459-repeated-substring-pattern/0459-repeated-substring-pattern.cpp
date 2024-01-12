class Solution {
public:
    string repeat(string temp,int val){
        string ans="";
        for(int i=0;i<val;i++){
            ans+=temp;
        }
        return ans;
    }
    bool repeatedSubstringPattern(string s) {
        string ans="";
        for(int i=0;i<s.size()/2;i++){
            ans+=s[i];
            int val=s.size()%ans.size();
            if(val==0){
                string temp=repeat(ans,s.size()/ans.size());
                if(temp==s){
                    return true;
                }
            }
        }
        return false;
    }
};