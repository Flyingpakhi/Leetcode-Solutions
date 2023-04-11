#include<stack>
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>si;
        stack<char>si1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='#'&&!si.empty()){
                si.pop();
            }
            else if(s[i]!='#'){
                si.push(s[i]);
            }
        }
        for(int i=0;i<t.length();i++){
            if(t[i]=='#' && !si1.empty()){
                si1.pop();
            }
            else if(t[i]!='#'){
                si1.push(t[i]);
            }
        }
        while(!si.empty()&&!si1.empty()){
            if(si.top()!=si1.top()){
                return false;
            }
            si.pop();
            si1.pop();
        }
        if(!si.empty()||!si1.empty()){
            return false;
        }
        else{
            return true;
        }
    }
};