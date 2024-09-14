class Solution {
public:
    string finalString(string s) {
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='i'){
                reverse(res.begin(),res.end());
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};