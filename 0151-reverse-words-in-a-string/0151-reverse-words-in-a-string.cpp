#include<string>
class Solution {
public:
    void rev(string& t){
        int s=0;
        int e=t.size()-1;
        while(s<=e){
            swap(t[s++],t[e--]);
        }
    }
    string reverseWords(string s) {
        int wordbeg=-1;
        string t="";
        for(int i=0;i<s.size();i++){
            //depicts from where the alphabet starts
            if(wordbeg==-1 && s[i]!=' '){
                t+=" ";
                wordbeg=i;
            }
            if(wordbeg!=-1 && ((s[i+1]==' ')||i+1==s.size())){
                string temp=s.substr(wordbeg,i-wordbeg+1);
                reverse(temp.begin(),temp.end());
                t+=temp;
                wordbeg=-1;
            }
        }
        rev(t);
        string res="";
        for(int i=0;i<t.size()-1;i++){
            res+=t[i];
        }
        return res;
    }
};