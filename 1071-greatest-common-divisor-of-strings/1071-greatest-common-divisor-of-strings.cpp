class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a=str1.size();
        int b=str2.size();
        while(a!=b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
        }
        string s="";
        for(int i=0;i<a;i++){
            s+=str1[i];
        }
        string f="";
        string g="";
        while(f.size()!=str1.size()){
            f+=s;
        }
        while(g.size()!=str2.size()){
            g+=s;
        }
        if(g==str2 && f==str1){
            return s;
        }
        else{
            return "";
        }
    }
};