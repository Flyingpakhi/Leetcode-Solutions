class Solution {
public:
char toLower(char ch){
    char temp=ch-'A'+'a';
    return temp;
}
bool pal(string &res){
    int s=0;
    int e=res.size()-1;
    while(s<=e){
        if(res[s]!=res[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}
bool isPalindrome(string s) {
    string res="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            res+=s[i];
        }
        else if(s[i]>='A'&&s[i]<='Z'){
            char temp=toLower(s[i]);
            res+=temp;
        }
        else if(s[i]>='0'&&s[i]<='9'){
            res+=s[i];
        }
    }
    bool ans=pal(res);
    return ans;
}
};