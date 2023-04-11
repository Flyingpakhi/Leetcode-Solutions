#include<stack>
class Solution {
public:
    string removeStars(string s) {
        stack<char>si;
        for(int i=0;i<s.length();i++){
            if(s[i]=='*'){
                si.pop();
            }
            else{
                si.push(s[i]);
            }
        }
        string ans="";
        while(!si.empty()){
            ans+=si.top();
            si.pop();
        }
        string rev = string(ans.rbegin(), ans.rend());
        return rev;
    }
};