#include<string>
class Solution {
public:
    int compress(vector<char>& chars) {
        string s="";
        string res="";
        int j=0;
        int i;
        for(i=0;i<chars.size();i++){
            if(chars[i]==chars[j]){
                s+=chars[i];
            }
            else{
                res+=chars[j];
                if(s.length()>1){
                    string v=to_string(s.length());
                    for(int k=0;k<v.length();k++){
                        res+=v[k];
                    }
                }
                j=i;
                s="";
                if(chars[i]==chars[j]){
                    s+=chars[i];
                }
            }
        }
        res+=chars[j];
        if(s.length()>1){
                string v=to_string(s.length());
                for(int k=0;k<v.length();k++){
                        res+=v[k];
                    }
                }
        for(int i=0;i<res.size();i++){
            chars[i]=res[i];
        }
        return res.size();
    }
};