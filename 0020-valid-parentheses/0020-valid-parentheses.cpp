#include<stack>
class Solution {
public:
    bool isValid(string s) {
    stack<char>si;
    for(int i=0;i<s.length();i++){
      if(s[i]=='(' || s[i]=='{' || s[i]=='['){
         si.push(s[i]);
      }
      else if((s[i]==')' || s[i]=='}' || s[i]==']')&&si.size()>0){
         if(s[i]==']' && si.top()=='['){
            si.pop();
         }
         else if(s[i]==')' && si.top()=='('){
            si.pop();
         }
         else if(s[i]=='}' && si.top()=='{'){
            si.pop();
         }
         else{
            return false;
         }
      }
        else{
            return false;
        }
   }
   if(si.empty()){
      return true;
   }
      return false;
    }
};