class Solution {
public:
    string reverseOnlyLetters(string s) {
        int l=0,h=s.size()-1;
        while(l<=h){
            if((s[l]>='a' &&s[l]<='z')||(s[l]>='A' && s[l]<='Z')){
                if((s[h]>='a' &&s[h]<='z')||(s[h]>='A' && s[h]<='Z')){
                    swap(s[l++],s[h--]);
                }
                else{
                    h--;
                }
            }
            else{
                l++;
            }
        }
        return s;
    }
};