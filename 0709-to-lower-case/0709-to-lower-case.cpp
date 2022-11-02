class Solution {
public:
    
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]-'A'+'a';
            }
            else {
                s[i]=s[i];
            }
        }
        return s;
    }
};