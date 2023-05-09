class Solution {
public:
    void reverse(string &s,int st,int e){
        while(st<e){
            swap(s[st++],s[e--]);
        }
    }
    string reverseWords(string s) {
        int wordbeg=-1;
        for(int i=0;i<s.size();i++){
            //depicts from where the alphabet starts
            if(wordbeg==-1 && s[i]!=' '){
                wordbeg=i;
            }
            if(wordbeg!=-1 && ((s[i+1]==' ')||i+1==s.size())){
                reverse(s,wordbeg,i);
                wordbeg=-1;
            }
        }
        return s;
        
    }
};